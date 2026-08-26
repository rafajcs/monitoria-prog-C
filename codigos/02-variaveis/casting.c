#include <stdio.h>

int main(void) {
    int a = 5;
    int b = 2;
    double resultado;
    
    // Divisao inteira
    resultado = a / b;
    printf("Sem casting (a / b): %lf\n", resultado);
    
    // Divisao com casting
    resultado = (double) a / b;
    printf("Com casting ((double) a / b): %lf\n", resultado);
    
    return 0;
}
