#include <stdio.h>

int main(void) {
    int idade = 0;
    int car, senha = 0;
    
    printf("=========================================\n");
    printf("     O SEGREDO DO PRINTF E SCANF         \n");
    printf("=========================================\n");

    // 1. O retorno do PRINTF: Retorna a quantidade de CARACTERES impressos
    int caracteres_impressos = printf("Ola, Mundo!\n");
    printf("O printf acima imprimiu %d caracteres (incluindo o '\\n')!\n\n", caracteres_impressos);

    // 2. O retorno do SCANF: Retorna a quantidade de ITENS lidos com SUCESSO
    printf("Digite a sua idade (apenas numeros inteiros): ");
    int itens_lidos = scanf("%d", &idade);

    printf("O scanf retornou: %d\n", itens_lidos);

    printf("Digite o num. do seu cartao e senha: ");
    int dois_lidos = scanf("%d %d", &car, &senha);

    // 3. A aplicacao pratica de nivel profissional:
    if (itens_lidos == 1) {
        printf("Leitura perfeita! Voce votou %d.\n", idade);
    } else {
        printf("Entrada invalida! O usuario digitou letras ou caracteres invalidos.\n");
    }

    return 0;
}