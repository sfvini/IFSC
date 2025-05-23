#include <stdio.h>
#include <stdbool.h>
#include <math.h>

int main()
{
    float p11, p12, rec1, prova1, prova2, rec2, media;
    int freq, conceito;
    bool aprov;

    printf("Primeira parcial da prova 1:\n");
    scanf("%f", &p11);

    printf("Segunda parcial da prova 1:\n");
    scanf("%f", &p12);

    printf("Recuperação da prova 1:\n");
    scanf("%f", &rec1);

    printf("Prova 2:\n");
    scanf("%f", &prova2);

    printf("Recuperação da prova 2:\n");
    scanf("%f", &rec2);

    prova1 = fmax(rec1, p11 + p12);
    prova2 = fmax(rec2, prova2);

    

    return 0;
}