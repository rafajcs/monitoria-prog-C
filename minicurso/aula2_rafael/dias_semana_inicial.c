#include <stdio.h>

void escolhe_inicial(char c){

    switch (c)
    {
    case 'S':
    case 's':
        printf("Segunda\n");
        printf("Sexta\n");
        printf("Sabado\n");
        break;
    case 't':
    case 'T':
        printf("Terça\n");
        break;

    case 'q':
    case 'Q':
        printf("Quarta\n");
        printf("Quinta\n");
        break;
        
    case 'd':
    case 'D':
        printf("Domingo\n");
        break;

    default:
        printf("Dia invalido!\n");
        break;
    }
}


int main(){
    char inicial = ' ';
    scanf(" %c", &inicial);
    escolhe_inicial(inicial);
    return 0;
}