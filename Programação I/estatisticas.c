#include <stdio.h>
#include <math.h>

typedef struct
{
    float media, min, max;
} Estatisticas;

Estatisticas calculos(int ne, float e[])
{
    Estatisticas stats = {0.0, INFINITY, -INFINITY};
    for (int i = 0; i < ne; i++)
    {
        stats.media += e[i];
        if (e[i] < stats.min)
            stats.min = e[i];
        if (e[i] > stats.max)
            stats.max = e[i];
    }
    stats.media /= ne;
    return stats;
}

int main()
{
    int ne;
    Estatisticas stats;

    printf("Entre com o número de elementos (máx 100): ");
    scanf("%d", &ne);

    float elem[ne];

    printf("Entre com os elementos: ");
    for (int i = 0; i < ne; i++)
    {
        scanf("%f", &elem[i]);
    }

    stats = calculos(ne, elem);
    printf("Média: %g\n", stats.media);
    printf("Mínimo: %g\n", stats.min);
    printf("Máximo: %g\n", stats.max);

    return 0;
}