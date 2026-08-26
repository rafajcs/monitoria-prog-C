/*

 Faça um programa que leia as notas de T1, T2, T3, T4, S, P1 e P2 de um aluno;
 E exiba a NT, NS, NP e a NF com precisão de 2 casas decimais.

 Sendo:
 NT = Média ponderada das notas de T1, T2, T3 e T4
 NS = Nota do Seminário
 NP = Média ponderada das notas de P1 e P2
 NF = Nota Final

 NT = (T1*1 + T2*2 + T3*3 + T4*2) / 8
 NP = (P1*4 + P2*6) / 10
 NF = (NT*4 + NS*2 + NP*4) / 10

*/

#include <stdio.h>

int main(){

    // Lê as notas do trabalho primeiro;
    
    float t1, t2, t3, t4;

    scanf("%f %f %f %f", &t1, &t2, &t3, &t4);

    float nt = (t1*1 + t2*2 + t3*3 + t4*2) / 8;

    printf("NT = %.2f\n", nt);

    // Lê a nota do seminário;

    float ns;

    scanf("%f", &ns);

    printf("NS = %.2f\n", ns);
    
    // Lê as notas da prova;

    float p1, p2;

    scanf("%f %f", &p1, &p2);

    float np = (p1*4 + p2*6) / 10;

    printf("NP = %.2f\n", np);

    // Lê a nota final;

    float nf = (nt*4 + ns*2 + np*4) / 10;

    printf("NF = %.2f\n", nf);

    return 0;
}
