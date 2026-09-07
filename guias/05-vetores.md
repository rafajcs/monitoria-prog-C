---
layout: default
title: 5. Vetores
---

[🏠 Início](../README.md) | [⬅️ Anterior](04-funcoes.md) | [Próximo ➡️](06-strings.md)

---

# 5. Vetores

## O que você precisa saber

Um vetor armazena vários valores do mesmo tipo sob um único nome, em posições contíguas de memória. Cada elemento é acessado por um índice, que em C **sempre começa em `0`**.

## Conceitos principais

- **Índice**: um vetor de tamanho `n` tem índices válidos de `0` a `n - 1`. Não existe verificação automática de limites.
- **Inicialização parcial**: posições não preenchidas explicitamente recebem `0` automaticamente.
- **Vetores em funções**: o tamanho não "viaja" junto com o vetor — passe-o sempre como parâmetro extra.
- **Passagem por endereço**: diferente de variáveis simples, um vetor passado para uma função permite que ela altere os elementos originais.
- **Vetor = endereço**: o nome de um vetor é tratado como o endereço do seu primeiro elemento (`vetor` ≡ `&vetor[0]`).

## Sintaxe essencial

```c
int notas[5];
int valores[] = {10, 20, 30, 40};

for (int i = 0; i < 5; i++) {
    printf("%d\n", notas[i]);
}

void exibir(int vetor[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        printf("%d\n", vetor[i]);
    }
}
```

## Na prática

```bash
gcc vetores.c -Wall -Wextra -o vetores
./vetores
```

Escreva uma função que altere os elementos de um vetor recebido como parâmetro e confirme, com `printf` antes e depois da chamada, que o vetor original em `main` também mudou — diferente do que acontecia com variáveis simples no Capítulo 4.

## Erros comuns

* Assumir que os índices começam em `1`.
* Acessar `vetor[tamanho]` — o último índice válido é `tamanho - 1`.
* Esquecer de passar o tamanho do vetor como parâmetro em uma função.
* Processar um vetor cujas posições ainda não foram inicializadas.

## Exercícios

1. Leia 10 números em um vetor e exiba-os em ordem inversa.
2. Leia as notas de uma turma e exiba a média, a maior e a menor nota.
3. Escreva `int buscar(int vetor[], int tamanho, int valor)`, devolvendo o índice encontrado ou `-1`.
4. Implemente `void inverter(int vetor[], int tamanho)`, invertendo o vetor sem criar um vetor auxiliar.

## Para aprofundar

Se a apostila em LaTeX estiver disponível, consulte o capítulo **Vetores**.