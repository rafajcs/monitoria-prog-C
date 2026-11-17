---
layout: default
title: 10. Alocação Dinâmica
---

[🏠 Início](../README.md) | [⬅️ Anterior: Organização da Memória](09-organizacao-da-memoria.md)

---

# 10. Alocação Dinâmica

## O que você precisa saber

Alocar memória dinamicamente é pedir espaço na **Heap** em tempo de execução por meio das funções de `<stdlib.h>`. Isso permite criar vetores e matrizes cujo tamanho só é conhecido quando o programa roda e retornar dados criados dentro de funções sem que eles sejam destruídos no `return` — em troca da responsabilidade de liberar tudo com `free`.

## Conceitos principais

- **`malloc(bytes)`**: reserva `bytes` contíguos na `Heap` (com lixo de memória) e devolve um `void *` — ou `NULL` se faltar memória.
- **`calloc(qtd, tam)`**: funciona como `malloc`, mas recebe quantidade e tamanho separados e **zera todos os bytes**.
- **`realloc(ptr, novo_tam)`**: redimensiona um bloco já alocado, preservando os dados antigos (pode mover o bloco para outro endereço).
- **`free(ptr)`**: devolve o bloco à `Heap` para reutilização. Não zera nem altera o ponteiro `ptr` automaticamente.
- **Propriedade (*ownership*)**: toda chamada bem-sucedida a `malloc`/`calloc` deve ter um `free` correspondente quando o bloco não for mais necessário.

## Sintaxe essencial

```c
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n = 5;
    int *v = malloc(n * sizeof(int));
    if (v == NULL) {
        return 1; // sempre verificar falha na alocacao
    }

    for (int i = 0; i < n; i++) {
        v[i] = i * 10;
    }

    // Redimensionamento seguro com ponteiro temporario
    int *tmp = realloc(v, 10 * sizeof(int));
    if (tmp == NULL) {
        free(v);
        return 1;
    }
    v = tmp;

    free(v);
    v = NULL; // boa pratica para evitar uso apos liberacao
    return 0;
}
```

## Na prática

```bash
gcc alocacao.c -Wall -Wextra -o alocacao
./alocacao
```

Sempre compile com `-Wall -Wextra` e, no Linux/macOS, acostume-se a rodar seus programas com `valgrind` ou `-fsanitize=address` para detectar vazamentos de memória e acessos inválidos na `Heap`.

## Erros comuns

* Esquecer de multiplicar por `sizeof(tipo)` em `malloc(n * sizeof(int))`.
* Não testar `if (p == NULL)` antes de usar o ponteiro retornado.
* Fazer `v = realloc(v, ...)` diretamente: se `realloc` retornar `NULL`, o endereço original de `v` é perdido (vazamento de memória).
* Esquecer `+ 1` ao alocar uma string para comportar o terminador `'\0'`.
* Vazamento de memória (*memory leak*) por esquecer `free`, ou *double free* / *use-after-free* ao usar ou liberar o mesmo ponteiro duas vezes.
* Liberar o vetor principal `free(mat)` de uma matriz `int **` antes de liberar cada linha `free(mat[i])`.

## Exercícios

1. Leia um inteiro `n`, aloque dinamicamente um vetor de `n` `double` com `malloc`, leia os valores, exiba a média e libere a memória.
2. Simule uma contagem de votos para `k` candidatos usando `calloc` para iniciar os contadores zerados.
3. Implemente `char *duplicar_string(const char *origem)` alocando uma cópia exata na `Heap` e liberando-a em `main`.
4. Crie funções `criar_matriz(int lin, int col)` e `liberar_matriz(int **mat, int lin)` para alocar e liberar uma matriz dinâmica `int **`.

## Para aprofundar

Se a apostila em LaTeX estiver disponível, consulte o capítulo **Alocação Dinâmica** (Capítulo 10), que detalha alocação de matrizes em dois níveis (`int **`) vs. bloco único contíguo, transferência de propriedade e diagnóstico de vazamentos.
