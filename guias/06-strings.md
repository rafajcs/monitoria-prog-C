---
layout: default
title: 6. Strings
---

[🏠 Início](../README.md) | [⬅️ Anterior](05-vetores.md) | [Próximo ➡️](07-arrays-multidimensionais.md)

---

# 6. Strings

## O que você precisa saber

C não possui um tipo `string`. Uma string é apenas um **vetor de `char`** que termina com o caractere especial `'\0'` (terminador nulo). Tudo o que você aprendeu sobre vetores se aplica diretamente aqui.

## Conceitos principais

- **`'\0'`**: marca onde o texto termina dentro do vetor. Funções como `printf` e `strlen` leem até encontrá-lo.
- **Tamanho do vetor ≠ tamanho do texto**: o vetor precisa ter espaço extra para o `'\0'`.
- **`<string.h>`**: `strlen`, `strcpy`, `strncpy`, `strcmp`, `strcat` — funções prontas para operar sobre strings.
- **`scanf` sem `&`**: o nome do vetor já é um endereço, então `scanf("%s", nome)` (sem `&`) está correto.
- **Percurso manual**: `for (int i = 0; texto[i] != '\0'; i++)` é o padrão-base de qualquer processamento de texto em C.

## Sintaxe essencial

```c
char nome[] = "Rafael"; // inclui o '\0' automaticamente

#include <string.h>
printf("%d\n", strlen(nome));

char copia[20];
strcpy(copia, nome);

for (int i = 0; nome[i] != '\0'; i++) {
    printf("%c", nome[i]);
}
```

## Na prática

```bash
gcc strings.c -Wall -Wextra -o strings
./strings
```

Implemente `strlen` manualmente, sem usar `<string.h>`, e compare o resultado com a função da biblioteca padrão — é a forma mais direta de sentir que uma string é só um vetor comum.

## Erros comuns

* Esquecer de reservar espaço para o `'\0'` ao dimensionar um vetor de `char`.
* Confundir `'A'` (um `char`) com `"A"` (uma string, com 2 posições: `'A'` e `'\0'`).
* Estourar o vetor de destino em `strcpy` ou `strcat`.
* Usar `sizeof` esperando o comprimento do texto — o correto é `strlen`.

## Exercícios

1. Leia um nome com `scanf` e exiba seu tamanho com `strlen`.
2. Escreva `int contar_vogais(const char texto[])`, percorrendo a string manualmente.
3. Implemente `int minha_strcmp(const char s1[], const char s2[])` sem usar `<string.h>`.
4. Leia uma frase com `fgets` e verifique se ela é um palíndromo, ignorando espaços.

## Para aprofundar

Se a apostila em LaTeX estiver disponível, consulte o capítulo **Strings**.