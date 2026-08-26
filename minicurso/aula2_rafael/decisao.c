#include <stdio.h>

typedef enum bool{ 
    false, true 
}boolean;

boolean retorna_booleano(int valor) {
    if (valor) {
        return true;
    } 
    else {
        return false;
    }
}


void exemplo_if_else(int valor) {
    if (valor > 0) {
        printf("O valor %d eh positivo.\n", valor);
    } else {
        printf("O valor %d eh negativo ou zero.\n", valor);
    }
}


int main(){

    // Testando a funcao retorna_booleano
    int numero = 4;
    boolean resultado = retorna_booleano(numero);
    printf("O valor %d eh %s.\n", numero, resultado ? "verdadeiro" : "falso");

    // Testando a funcao exemplo_if_else
    exemplo_if_else(numero);

    // No fundo true é um inteiro = 1
    exemplo_if_else(true);
    exemplo_if_else(false); 

    return 0;
}