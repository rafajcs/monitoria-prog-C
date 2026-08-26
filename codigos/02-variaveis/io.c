#include <stdio.h>

int main(void) {
    int ano_nascimento;
    int ano_atual = 2026;
    
    printf("Digite o seu ano de nascimento: ");
    scanf("%d", &ano_nascimento);
    
    int idade_estimada = ano_atual - ano_nascimento;
    
    printf("Voce deve ter (ou vai fazer) %d anos.\n", idade_estimada);
    
    return 0;
}
