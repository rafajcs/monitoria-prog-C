#include <stdio.h>

int main(){
    int estrelinhas=0;
    scanf("%d",&estrelinhas);

    for(int i = 0 ; i <= estrelinhas ; i++){
        int espacos = estrelinhas-i;

        for(int j = 0 ; j <= espacos;j++)  printf(" ");
        for(int j = 0 ; j < (i*2)-1 ; j++) printf("*");

        printf("\n");
    }
    for(int j = 0 ; j < estrelinhas ; j++) printf(" ");
    printf("|\n");


    for(int j = 0 ; j < 10 ; j++) printf(" ");
    return 0;
}
