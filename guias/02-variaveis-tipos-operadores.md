# 2. Variáveis, Tipos e Operadores

## O que você precisa saber

Em C, toda variável precisa ter seu **tipo** e **tamanho** conhecidos pelo compilador *antes* de ser utilizada. Não há tipagem dinâmica como em Python; você deve declarar a variável explicitamente.

## Conceitos principais

- **Declaração**: O compilador reserva espaço na memória RAM de acordo com o tipo escolhido.
- **Tipos Primitivos**: `int` (inteiros, 4 bytes), `float` (decimais, 4 bytes), `double` (decimais precisos, 8 bytes), `char` (caracteres, 1 byte).
- **Operadores**: Aritméticos (`+`, `-`, `*`, `/`, `%`), Relacionais (`==`, `>`, `<`) e Lógicos (`&&`, `||`, `!`).
- **Casting**: É possível converter explicitamente um tipo para outro, ex: `(float) x`.

## Sintaxe essencial

```c
int idade = 20;           // Inteiro
float altura = 1.75;      // Decimal
char inicial = 'R';       // Caractere (aspas simples)
const float PI = 3.14159; // Constante (não pode ser alterada)
```

## Exemplos

**Lendo e imprimindo dados (I/O)**

```c
#include <stdio.h>

int main(void) {
    int idade;
    
    printf("Digite sua idade: ");
    scanf("%d", &idade); // & indica o endereço de memória
    
    printf("Você tem %d anos.\n", idade);
    return 0;
}
```

Especificadores:
- `%d`: `int`
- `%f`: `float`
- `%lf`: `double`
- `%c`: `char`

## Erros comuns

* Usar `scanf` sem o operador `&` para ler variáveis comuns.
* Esquecer de inicializar uma variável (ela conterá "lixo" de memória).
* Usar aspas duplas `"R"` (string) em vez de aspas simples `'R'` (caractere) para um `char`.
* Divisão inteira: `5 / 2` resulta em `2`. Para obter `2.5`, use `5.0 / 2.0` ou aplique o casting `(float) 5 / 2`.

## Na prática

Teste o exemplo de declarações presente em `codigos/02-variaveis/declaracao.c`:

```bash
cd codigos/02-variaveis/
gcc declaracao.c -Wall -Wextra -o declaracao
./declaracao
```

## Exercícios

1. Declare três variáveis (`int`, `float` e `char`), atribua valores e exiba-os na tela.
2. Crie um programa que leia o raio de um círculo via `scanf` e calcule a área ($Area = \pi * R^2$). Use uma constante para $\pi$.
3. Declare um `char` com valor `65`. Tente imprimir essa mesma variável usando `%c` e `%d`. O que acontece e por quê?

## Para aprofundar

Se a apostila em LaTeX estiver disponível, consulte o capítulo **Variáveis, Tipos e Operadores**.
