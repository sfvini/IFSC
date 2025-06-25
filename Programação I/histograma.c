#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    int res, d1, d2, rol;
    float hist[11] = {};

    printf("Entre com o número de rolagens: ");
    scanf("%d", &rol);

    for (int i = 0; i < rol; i++)
    {
        d1 = 1 + (rand() % 6);
        d2 = 1 + (rand() % 6);
        res = d1 + d2;
        hist[res-2] += 1;
    }

    for (int i = 0; i < 11; i++)
    {
        printf("%d : %.2f%%\n", i+2, 100 * hist[i] / rol);
    }
}