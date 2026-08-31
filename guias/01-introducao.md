---
layout: default
title: 1. Introdução
---

[🏠 Início](../README.md) | [Próximo: Variáveis, Tipos e Operadores ➡️](02-variaveis-tipos-operadores.md)

---

# 1. Introdução

## O que você precisa saber

Programar é resolver problemas. A linguagem C oferece alto controle sobre a máquina, permitindo gerenciar memória e otimizar recursos, sendo a base de sistemas operacionais e sistemas embarcados.

## Conceitos principais

- **Compilação**: Diferente de Python (interpretado), C precisa ser compilado (traduzido para linguagem de máquina) antes de executar.
- **Estrutura básica**: Todo programa em C tem uma função `main` que serve como ponto de entrada.
- **Inclusão de bibliotecas**: Usamos `#include` para ter acesso a funções padrão, como entrada e saída.

## Sintaxe essencial

```c
#include <stdio.h> // Biblioteca para I/O

int main(void) {
    printf("Olá, mundo!\n"); // Imprime texto
    return 0; // Indica sucesso
}
```

## Na prática

Compile e execute o seu primeiro programa em C:

```bash
# Compilar
gcc hello.c -Wall -Wextra -o hello

# Executar
./hello
```

## Erros comuns

* Esquecer o ponto e vírgula (`;`) no final dos comandos.
* Esquecer as chaves `{ }` delimitando blocos de código.
* Esquecer de incluir `<stdio.h>` e tentar usar o `printf`.

## Exercícios

1. Escreva um programa que imprima o seu nome na tela.
2. Explique a diferença entre o arquivo fonte (`.c`) e o executável.
3. Pesquise e explique qual a função da flag `-Wall` no GCC.

## Para aprofundar

Se a apostila em LaTeX estiver disponível, consulte o capítulo **Introdução**.
