// collatz.c
#include <stdio.h>

int main()
{

    long long termo;
    int passos = 0;

    printf("Entre com o termo inicial: ");
    scanf("%lld", &termo);

    if (termo != 1)
    {
        printf("Sequência de Collatz: [%lld, ", termo);

        while (termo > 1)
        {
            if (termo % 2 == 0)
            {
                termo /= 2;
            }
            else
            {
                termo = termo * 3 + 1;
            }
            printf("%lld", termo);
            if (termo != 1)
            {
                printf(", ");
            }
            passos++;
        }
        printf("]\n");
        printf("Número de passos: %d\n", passos);
    }

    else
    {
        printf("Sequência de Collatz: [1]\n");
        printf("Número de passos: 0\n");
    }
    return 0;
}
