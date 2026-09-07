---
layout: default
title: 7. Arrays Multidimensionais
---

[🏠 Início](../README.md) | [⬅️ Anterior](06-strings.md) | [Próximo ➡️](08-ponteiros.md)

---

# 7. Arrays Multidimensionais

## O que você precisa saber

Uma matriz é, na prática, um vetor de vetores: uma estrutura organizada em linhas e colunas. Tudo o que você já sabe sobre vetores — índices, laços, passagem para funções — se estende diretamente para duas dimensões.

## Conceitos principais

- **`matriz[linha][coluna]`**: dois índices, ambos começando em `0`.
- **Laços aninhados**: um `for` externo percorre as linhas, um `for` interno percorre as colunas de cada linha.
- **Memória contígua**: a memória é fisicamente unidimensional; C armazena a matriz por linhas (*row-major*) — todos os elementos da linha 0, depois todos os da linha 1, e assim por diante.
- **Matrizes em funções**: o número de **colunas** precisa sempre ser informado na assinatura da função, para o compilador calcular corretamente cada posição.

## Sintaxe essencial

```c
int matriz[2][3] = {
    {1, 2, 3},
    {4, 5, 6}
};

for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 3; j++) {
        printf("%d ", matriz[i][j]);
    }
    printf("\n");
}

void imprime_matriz(int matriz[][3], int linhas) {
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", matriz[i][j]);
        }
    }
}
```

## Na prática

```bash
gcc matrizes.c -Wall -Wextra -o matrizes
./matrizes
```

Implemente a soma de duas matrizes e sua transposição — bons exercícios para fixar a diferença entre percorrer por linha e percorrer por coluna.

## Erros comuns

* Confundir linha e coluna: `matriz[coluna][linha]` em vez de `matriz[linha][coluna]`.
* Inverter as dimensões na declaração (linhas x colunas trocadas).
* Errar a condição de um dos dois `for`, misturando o limite de linhas com o de colunas.
* Esquecer (ou errar) o número de colunas ao passar a matriz para uma função.

## Exercícios

1. Leia uma matriz `3x3` e exiba-a formatada como uma tabela.
2. Leia uma matriz `4x4` e calcule a soma total, a soma da diagonal principal e o maior elemento (com sua posição).
3. Implemente `void transpor(...)`, produzindo a transposta de uma matriz `2x3`.
4. Implemente o jogo da velha, representando o tabuleiro como uma matriz `3x3` de `char`.

## Para aprofundar

Se a apostila em LaTeX estiver disponível, consulte o capítulo **Arrays Multidimensionais**.