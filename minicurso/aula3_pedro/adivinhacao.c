#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    int numeroSecreto;
    int tentativa;

    srand(time(NULL));
    numeroSecreto = rand() % 100 + 1;

    printf("Tente adivinhar o numero de 1 a 100!\n\n");

    while (1) {

        printf("Digite sua tentativa: ");
        scanf("%d", &tentativa);

        if (tentativa < numeroSecreto) {
            printf("Suba mais esse numero!\n\n");
        }
        else if (tentativa > numeroSecreto) {
            printf("Desca mais esse numero!\n\n");
        }
        else {
            printf("\nAcertou:D\n");
            printf("O numero era: %d\n", numeroSecreto);
            break;
        }
    }
}