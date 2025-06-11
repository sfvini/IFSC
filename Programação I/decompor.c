#include <stdio.h>

char decompor(float x, int *parte_int, float *parte_frac)
{
    char sinal = x < 0 ? '-' : '+';

    if (x < 0)
        x *= -1;

    *parte_frac = x - (int)x;
    *parte_int = (int)x;

    return sinal;
}

int main()
{
    float x, parte_frac;
    int parte_int;
    char sinal;

    printf("Digite um numero: ");
    scanf("%f", &x);

    if (x == 0)
    {
        printf("Sinal: \n");
        printf("Parte inteira: 0\n");
        printf("Parte fracionaria: 0\n");
    }
    else
    {
        sinal = decompor(x, &parte_int, &parte_frac);

        printf("Sinal: %c\n", sinal);
        printf("Parte inteira: %d\n", parte_int);
        printf("Parte fracionaria: %f\n", parte_frac);
    }

    return 0;
}