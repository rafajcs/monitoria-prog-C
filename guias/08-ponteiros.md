---
layout: default
title: 8. Ponteiros
---

[🏠 Início](../README.md) | [⬅️ Anterior: Arrays Multidimensionais](07-arrays-multidimensionais.md)

---

# 8. Ponteiros

## O que você precisa saber

Um ponteiro é uma variável que não guarda um valor comum — ela guarda um **endereço de memória**. Isso resolve, de uma vez por todas, os "ganchos" deixados nos capítulos anteriores: por que `scanf` precisa de `&`, e por que uma função como `trocar(x, y)` não conseguia alterar `x` e `y` de `main`.

## Conceitos principais

- **`&`**: operador de endereço — devolve onde uma variável está armazenada na memória.
- **`*` na declaração**: declara um ponteiro (`int *p;` — "`p` aponta para um `int`").
- **`*` no uso**: operador de desreferenciamento — acessa o valor armazenado no endereço apontado.
- **Passagem por referência (simulada)**: em C, para uma função alterar uma variável de fora, ela precisa receber o **endereço** dessa variável, e não uma cópia do valor.
- **Vetor = ponteiro constante**: retomando o Capítulo 5, o nome de um vetor já é o endereço do seu primeiro elemento — por isso vetores "passam por referência" naturalmente, sem precisar de `&`.
- **Ponteiro nulo (`NULL`)**: um ponteiro que não aponta para lugar nenhum. Sempre inicialize ponteiros que ainda não têm um endereço válido.

## Sintaxe essencial

```c
int idade = 20;
int *p = &idade;   // p guarda o endereco de idade

printf("%d\n", *p);  // desreferencia: exibe 20
*p = 25;              // altera idade atraves de p
printf("%d\n", idade); // exibe 25
```

```c
void trocar(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(void) {
    int x = 5, y = 10;
    trocar(&x, &y); // passa os enderecos
    printf("%d %d\n", x, y); // 10 5
    return 0;
}
```

## Na prática

```bash
gcc ponteiros.c -Wall -Wextra -o ponteiros
./ponteiros
```

Volte ao exercício do Capítulo 4 (a função `trocar` que "não funcionava") e reescreva-o usando ponteiros. É o exemplo mais direto de por que esse conceito existe.

## Erros comuns

* Esquecer o `&` ao passar o endereço de uma variável para a função.
* Esquecer o `*` ao desreferenciar, tentando usar o ponteiro como se fosse o valor.
* Desreferenciar um ponteiro não inicializado (ou já `NULL`), causando comportamento indefinido.
* Confundir `int *p` (ponteiro para `int`) com `int p` (um `int` comum) só pelo nome da variável.

## Exercícios

1. Declare uma variável `int`, um ponteiro para ela, e altere o valor da variável através do ponteiro.
2. Reescreva a função `trocar` do Capítulo 4 usando ponteiros, e confirme que agora ela funciona.
3. Escreva uma função `void incrementar(int *n)` que soma 1 ao valor apontado por `n`, e use-a em um laço para incrementar uma variável 5 vezes.
4. Explique, com suas palavras, por que `vetor[i]` e `*(vetor + i)` são equivalentes — usando o que você aprendeu neste capítulo e no Capítulo 5.

## Para aprofundar

Se a apostila em LaTeX estiver disponível, consulte o capítulo **Ponteiros**. Para quem quiser ir além, a Parte especial "Para ir além" também traz um aprofundamento inspirado em *Understanding and Using C Pointers* (Reese).