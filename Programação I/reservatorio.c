#include <stdio.h>

int main()
{

    int cap = 400, l, dt;

    for (int i = 1; i <= 7; i++)
    {
        if (cap <= 0)
        {
            dt = i;
            break;
        }
        else
        {
            printf("Entre com a quantidade de chuva no dia %d em litros: ", i);
            scanf("%d", &l);
            cap = cap - l;
        }
    }

    cap <= 0 ? printf("O reservatório transbordou no dia %d\n", dt) : printf("O reservatório não transbordou. Espaço livre: %d litros\n", cap);

    return 0;
}