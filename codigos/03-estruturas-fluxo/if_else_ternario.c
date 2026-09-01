#include <stdio.h>

int main(){

    int idade = 0;
    printf("Digite a sua idade: ");
    scanf("%d", &idade);

    // if-else padrão
    if (idade >= 18) {
        printf("Maior de idade\n");
    } else {
        printf("Menor de idade\n");
    }

    // else-if encadeados:
    int nota;
    printf("\nSua nota: ");
    scanf("%d", &nota);

    if (nota >= 9) {
        printf ("Conceito A \n");
    } else if (nota >= 7) {
        printf ("Conceito B \n");
    } else if (nota >= 5) {
        printf ("Conceito C \n");
    } else {
        printf ("Reprovado \n");
    }

    // operador ternario: ?
    int x;
    printf("\nDigite um numero de dois algarismos distintos: ");
    scanf("%d", &x);
    char *teste = (x == 67) ? ("reprovado") : ("normal");
    printf("%s\n", teste);

    return 0;
}