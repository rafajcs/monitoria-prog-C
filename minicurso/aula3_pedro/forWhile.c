#include <stdio.h>

int main() {

    // Usando for
    for(int i = 0; i < 5; i++){
        if(i != 4)
            printf("%d -> ", i);
        else
            printf("%d", i);
    }

    printf("\n");

    // Usando while
    int i = 0;

    while(i < 5){
        if(i != 4)
            printf("%d -> ", i);
        else
            printf("%d", i);

        i++;
    }

    return 0;
}