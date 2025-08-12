#include <stdio.h>

int main()
{

    float f1, f2, ph;
    int m, mff = 0;

    printf("Entre com a faixa de pH adequada: ");
    scanf("%f %f", &f1, &f2);

    printf("Entre com o número de medições: ");
    scanf("%d", &m);

    printf("Entre com as medições de pH: ");
    for (int i = m; i > 0; i--)
    {
        scanf("%f", &ph);

        if (ph > f2 || ph < f1)
        {
            mff++;
        }
    }

    printf("Medições fora da faixa: %d\n", mff);

    return 0;
}