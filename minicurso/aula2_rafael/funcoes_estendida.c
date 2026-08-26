#include <stdio.h>
// Header para funcoes.c

// Apenas a assinatura (protótipo) da função terminada com ponto e vírgula
void imprimir_mensagem();

int main(){
    imprimir_mensagem();
    return 0;
}

// Finalmente a função implementada
void imprimir_mensagem() {
    printf("Esse minicurso eh muito cunt!\n");
}