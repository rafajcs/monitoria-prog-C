#include <stdio.h>


void calcular(double num1, double num2, char operador);

int main(void) {
    double n1 = 0.0, n2 = 0.0;
    char op = ' ';

    printf("=========================================\n");
    printf("        CALCULADORA BASICA EM C          \n");
    printf("=========================================\n");

    printf("Digite a expressao no formato [numero operador numero]\n");
    printf("Exemplo: 10.5 + 2 ou 8 / 4\n");
    printf("Operacoes aceitas: +, -, *, /\n");
    printf("-----------------------------------------\n");
    printf("Entrada: ");

    /* 
        O espaço antes de %c (" %c") é crucial.
        Ele instrui o scanf a ignorar qualquer espaço em branco ou '\n' (Enter) 
        deixado para trás no buffer do teclado.
    */
    if (scanf("%lf %c %lf", &n1, &op, &n2) != 3) {
        printf("Erro: Formato de entrada invalido!\n");
        return 1;
    }

    // Chamada da funcao que encapsula o switch-case
    calcular(n1, n2, op);

    return 0;
}

/* =========================================================================
 * IMPLEMENTAÇÃO
 * ========================================================================= */
void calcular(double num1, double num2, char operador) {
    double resultado = 0.0;

    /*
     * O switch avalia o valor ASCII do caractere passado.
     * Aspas simples ('') representam um único literal char (1 byte na memória).
     * Aspas duplas -> ERRO!
     */
    switch (operador) {
        case '+':
            resultado = num1 + num2;
            printf("Resultado: %.2f + %.2f = %.2f\n", num1, num2, resultado);
            break;

        case '-':
            resultado = num1 - num2;
            printf("Resultado: %.2f - %.2f = %.2f\n", num1, num2, resultado);
            break;

        case '*':
            resultado = num1 * num2;
            printf("Resultado: %.2f * %.2f = %.2f\n", num1, num2, resultado);
            break;

        case '/':
            // Tratamento de caso excepcional com if-else
            if (num2 == 0.0) {
                printf("Erro matematico: Divisao por zero nao eh permitida!\n");
            } else {
                resultado = num1 / num2;
                printf("Resultado: %.2f / %.2f = %.2f\n", num1, num2, resultado);
            }
            break;

        default:
            // Executado caso o caractere nao coincida com nenhum 'case'
            printf("Operador '%c' invalido! Use apenas +, -, * ou /.\n", operador);
            break;
    }
}