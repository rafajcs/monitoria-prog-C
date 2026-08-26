#include <stdio.h>

int main(void) {
    // Declaracao de variaveis
    int idade = 20;
    float altura = 1.75;
    char inicial = 'R';
    
    // Imprimindo as variaveis
    printf("Idade: %d\n", idade);
    printf("Altura: %.2f\n", altura);
    printf("Inicial: %c\n", inicial);
    
    // Modificando os valores
    idade = idade + 1;
    printf("Idade no ano que vem: %d\n", idade);
    
    return 0;
}
