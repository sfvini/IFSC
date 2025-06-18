#include <stdio.h>

int main()
{
    int cap = 400, l, dt;

    for (int i = 0; i <= 7; i++)
    {
        dt = i;
        if (cap <= 0)
        {
            break;
        }
        else
        {
            printf("Entre com a quantidade de chuva no dia %d em litros: ", i + 1);
            scanf("%d", &l);
            cap -= l;
        }
    }

    cap <= 0 ? printf("O reservatório transbordou no dia %d\n", dt) : printf("O reservatório não transbordou. Espaço livre: %d litros\n", cap);

    return 0;
}