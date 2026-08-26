#include <stdio.h>
#include "funcoes.h"    // Incluindo o header com a assinatura da função

// include <> => procura em diretórios padrão do compilador
// include "" => procura primeiro no diretório do projeto, depois nos diretórios padrão

int main(){
    imprimir_mensagem();
    return 0;
}

// função implementada
void imprimir_mensagem() {
    printf("Esse minicurso eh muito cunt!\n");
}
