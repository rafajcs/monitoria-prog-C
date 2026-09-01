---
layout: default
title: 3. Controle de Fluxo
---

[🏠 Início](../README.md) | [⬅️ Anterior: Variáveis, Tipos e Operadores](02-variaveis-tipos-operadores.md) | [Próximo: Funções ➡️](04-funcoes.md)

---

# 3. Controle de Fluxo

## O que você precisa saber

Por padrão, um programa executa linha por linha, de cima para baixo. Estruturas de controle de fluxo quebram essa sequência: condicionais desviam o caminho com base em uma decisão, e laços repetem um trecho de código enquanto uma condição for verdadeira.

## Conceitos principais

- **Condição**: qualquer expressão que resulte em 0 (falso) ou diferente de 0 (verdadeiro).
- **if / else if / else**: executa um bloco só se a condição correspondente for verdadeira.
- **switch**: compara uma variável com vários valores possíveis; cada `case` precisa de `break` para não "vazar" para o próximo.
- **while**: testa a condição antes de executar o bloco.
- **do-while**: testa a condição depois, garantindo pelo menos uma execução.
- **for**: junta inicialização, condição e incremento em uma linha só — ideal quando o número de repetições é conhecido.
- **break**: encerra o laço imediatamente. `continue`: pula para a próxima repetição.

## Sintaxe essencial

```c
if (idade >= 18) {
    printf("Maior de idade\n");
} else {
    printf("Menor de idade\n");
}

switch (dia) {
    case 1:
        printf("Domingo\n");
        break;
    default:
        printf("Outro dia\n");
}

for (int i = 1; i <= 5; i++) {
    printf("%d\n", i);
}

while (opcao != 0) {
    scanf("%d", &opcao);
}
```

## Na prática

Teste a diferença entre `if` e `switch`, e entre `for` e `while`, no mesmo problema:

```bash
gcc controle.c -Wall -Wextra -o controle
./controle
```

Modifique a condição de um `for` para gerar um laço infinito de propósito (e depois interrompa com Ctrl+C) — é a forma mais rápida de sentir na pele por que toda condição de repetição precisa, eventualmente, ficar falsa.

## Erros comuns

- Confundir `=` (atribuição) com `==` (comparação) dentro de um `if`.
- Esquecer o `break` em um `case` do `switch`, causando fall-through.
- Esquecer de atualizar a variável de controle em um `while`, gerando um laço infinito.
- Omitir as chaves `{ }` em um `if` de uma linha só e, depois, adicionar uma segunda linha ao bloco sem perceber que ela ficou fora da condição.

## Exercícios

1. Escreva um programa que leia um número e informe, com `if-else`, se ele é positivo, negativo ou zero.
2. Usando um `for`, exiba todos os múltiplos de 3 entre 1 e 50 e some-os.
3. Implemente um menu com `do-while` e `switch` que se repete até o usuário escolher "Sair".

## Para aprofundar

Se a apostila em LaTeX estiver disponível, consulte o capítulo **Controle de Fluxo**.