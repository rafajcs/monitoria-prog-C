---
layout: default
title: 4. Funções
---

[🏠 Início](../README.md) | [⬅️ Anterior: Controle de Fluxo](03-controle-de-fluxo.md)

---

# 4. Funções

## O que você precisa saber

Funções permitem reutilizar código: em vez de repetir a mesma lógica em vários pontos do programa, você a escreve uma vez e a chama sempre que precisar. Isso torna o programa mais organizado, mais fácil de corrigir e mais fácil de ler.

## Conceitos principais

- **Definição**: o código completo da função — nome, parâmetros, tipo de retorno e corpo.
- **void**: usado como tipo de retorno quando a função não devolve valor, e no lugar dos parâmetros quando ela não recebe nenhum.
- **Protótipo**: a "assinatura" da função (sem corpo), declarada antes de `main`, avisando o compilador sobre a função antes de sua definição completa.
- **Passagem por valor**: ao chamar uma função, C copia o valor de cada argumento para o parâmetro correspondente. Alterar o parâmetro dentro da função não altera a variável original.

## Sintaxe essencial

```c
int somar(int a, int b); // protótipo

int main(void) {
    int total = somar(5, 3);
    printf("%d\n", total);
    return 0;
}

int somar(int a, int b) { // definição
    return a + b;
}
```

```c
void dobrar(int numero) {
    numero = numero * 2; // altera apenas a copia local
}
```

## Na prática

Divida um problema em pequenas funções e observe o `main` ficar mais legível:

```bash
gcc funcoes.c -Wall -Wextra -o funcoes
./funcoes
```

Escreva uma função que tente alterar uma variável de `main` recebendo-a como parâmetro comum. Confirme, com `printf` antes e depois da chamada, que o valor original não muda — essa é a passagem por valor em ação.

## Erros comuns

- Declarar uma função com retorno diferente de `void` e esquecer o `return` em algum caminho do código.
- Protótipo e definição com assinaturas diferentes (tipo de retorno ou parâmetros incompatíveis).
- Esperar que uma função altere, "por fora", uma variável passada como argumento comum (sem ponteiro).
- Chamar uma função antes de declará-la ou defini-la, sem protótipo.

## Exercícios

1. Escreva `int quadrado(int n)` que devolva o quadrado de `n`, com protótipo e chamada em `main`.
2. Escreva três funções — `ler_notas`, `calcular_media` e `exibir_resultado` — e organize `main` para chamá-las em sequência.
3. Escreva uma função `trocar(int a, int b)` que tenta trocar os valores de duas variáveis de `main`. Confirme que não funciona e explique o porquê usando o conceito de passagem por valor.

## Para aprofundar

Se a apostila em LaTeX estiver disponível, consulte o capítulo **Funções**.