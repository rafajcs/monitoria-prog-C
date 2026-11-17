---
layout: default
title: 9. Organização da Memória
---

[🏠 Início](../README.md) | [⬅️ Anterior: Ponteiros](08-ponteiros.md) | [Próximo ➡️](10-alocacao-dinamica.md)

---

# 9. Organização da Memória

## O que você precisa saber

A memória de um programa C em execução não é um bloco único: ela é dividida em **cinco regiões** com funções, tamanhos e tempos de vida distintos. Entender essa divisão explica por que variáveis locais começam com "lixo", por que globais e `static` começam zeradas e por que não se deve devolver o endereço de uma variável local.

## Conceitos principais

- **Text (Código)**: guarda as instruções compiladas e constantes literais (como `"ola"`). É fixa e **somente leitura**.
- **Data**: guarda variáveis globais e `static` inicializadas com valor definido no código-fonte. Existe durante todo o programa.
- **BSS**: guarda globais e `static` **não inicializadas** explicitamente; o sistema operacional preenche tudo com `0` ao iniciar.
- **Stack (Pilha)**: guarda parâmetros e variáveis locais comuns em **quadros de ativação** (LIFO). É rápida e automática, mas limitada em tamanho e os dados morrem no `return`.
- **Heap (Memória Dinâmica)**: região gerenciada manualmente pelo programador (via ponteiros) para dados cujo tamanho varia ou que precisam sobreviver após o retorno da função.

## Sintaxe essencial

```c
#include <stdio.h>

int global_init = 42;       // Data
int global_nao_init;        // BSS (vale 0)

void exemplo(int param) {   // param na Stack
    static int cont = 0;    // BSS/Data: mantem o valor entre chamadas
    int local = 10;         // Stack: criada e destruida a cada chamada
    const char *msg = "Oi"; // ponteiro na Stack; literal "Oi" no Text

    cont++;
    printf("%s: param=%d local=%d cont=%d\n", msg, param, local, cont);
}
```

## Na prática

```bash
gcc memoria.c -Wall -Wextra -o memoria
./memoria
```

Experimente imprimir endereços com `printf("%p\n", (void *)&var)` para uma variável global, uma `static`, uma local e a própria função `main` — observe como os endereços próximos revelam em qual região cada uma vive.

## Erros comuns

* Tentar modificar uma string literal apontada por `char *s = "oi";` (`s[0] = 'O'`), causando falha de segmentação (*Segmentation Fault*). Use `const char *` para literais.
* Devolver o endereço de uma variável ou vetor local da `Stack` (`return &local;`), criando um ponteiro pendente (*dangling pointer*).
* Declarar vetores ou matrizes gigantescos dentro de uma função, estourando o limite da `Stack` (*stack overflow*).
* Assumir que variáveis locais na `Stack` começam zeradas como as globais do `BSS`.

## Exercícios

1. Classifique em qual região (`Text`, `Data`, `BSS` ou `Stack`) ficam: uma global inicializada, uma global sem inicialização, uma local `static`, um parâmetro de função e uma string literal.
2. Crie uma função `int proximo_id(void)` usando `static` para retornar `1, 2, 3...` a cada chamada, sem usar variáveis globais.
3. Escreva um programa que imprima com `%p` os endereços de uma global, uma local e uma string literal, comparando os valores.
4. Explique, usando o conceito de quadros na `Stack`, por que retornar um vetor `char buf[20]` criado localmente é incorreto.

## Para aprofundar

Se a apostila em LaTeX estiver disponível, consulte o capítulo **Organização da Memória** (Capítulo 9), que traz o diagrama completo do espaço de endereçamento e o rastreamento passo a passo dos quadros da pilha.
