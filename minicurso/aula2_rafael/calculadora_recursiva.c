#include <stdio.h>
#include <stdlib.h>

/* =========================================================================
 * PROTÓTIPOS DAS FUNÇÕES RECURSIVAS
 * ========================================================================= */
int mult_recursiva(int a, int b);
int div_recursiva(int a, int b);
void calcular(int num1, int num2, char operador);

int main(void) {
    int n1 = 0, n2 = 0;
    char op = ' ';

    printf("=========================================\n");
    printf("   CALCULADORA RECURSIVA FUNDAMENTAL     \n");
    printf("=========================================\n");
    printf("Digite: [inteiro operador inteiro]\n");
    printf("Exemplo: 4 * 3  ou  15 / 4\n");
    printf("-----------------------------------------\n");
    printf("Entrada: ");

    if (scanf("%d %c %d", &n1, &op, &n2) != 3) {
        printf("Erro: Formato de entrada invalido!\n");
        return 1;
    }

    calcular(n1, n2, op);

    return 0;
}

/* =========================================================================
 * 1. MULTIPLICAÇÃO RECURSIVA (Somas Sucessivas)
 * a * b = a + (a * (b - 1))
 * ========================================================================= */
int mult_recursiva(int a, int b) {
    // Caso Base: Qualquer numero multiplicado por 0 eh 0
    if (b == 0) {
        return 0;
    }

    // Tratamento de multiplicador negativo: inverte os sinais para convergir ao caso base
    if (b < 0) {
        return -mult_recursiva(a, -b);
    }

    // Passo Recursivo
    return a + mult_recursiva(a, b - 1);
}

/* =========================================================================
 * 2. DIVISÃO INTEIRA RECURSIVA (Subtrações Sucessivas)
 * a / b = 1 + ((a - b) / b)
 * Cautela: Trata apenas magnitudes positivas no nucleo recursivo.
 * ========================================================================= */
int div_recursiva(int a, int b) {
    // Tratamento da regra de sinais antes de calcular as magnitudes
    if (a < 0 || b < 0) {
        int sinal = ((a < 0) ^ (b < 0)) ? -1 : 1;
        return sinal * div_recursiva(abs(a), abs(b));
    }

    // Caso Base: O dividendo eh menor que o divisor (nao cabe mais nenhuma vez)
    if (a < b) {
        return 0;
    }

    // Passo Recursivo: Contabiliza 1 divisao e subtrai 'b' de 'a'
    return 1 + div_recursiva(a - b, b);
}

/* =========================================================================
 * FLUXO PRINCIPAL (SWITCH-CASE)
 * ========================================================================= */
void calcular(int num1, int num2, char operador) {
    switch (operador) {
        case '+':
            printf("Resultado: %d + %d = %d\n", num1, num2, num1 + num2);
            break;

        case '-':
            printf("Resultado: %d - %d = %d\n", num1, num2, num1 - num2);
            break;

        case '*': {
            int res = mult_recursiva(num1, num2);
            printf("Resultado (Somas Sucessivas): %d * %d = %d\n", num1, num2, res);
            break;
        }

        case '/': {
            // Guard clause indispensavel: previne recursao infinita / falha matematica
            if (num2 == 0) {
                printf("Erro matematico: Divisao por zero indefinida!\n");
            } else {
                int res = div_recursiva(num1, num2);
                printf("Resultado (Divisao Inteira): %d / %d = %d\n", num1, num2, res);
            }
            break;
        }

        default:
            printf("Operador '%c' invalido! Use apenas +, -, * ou /.\n", operador);
            break;
    }
}