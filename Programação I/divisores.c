#include <stdio.h>

int main()
{

    int n, d = 0;

    printf("Entre com um inteiro positivo: ");
    scanf("%d", &n);

    printf("Divisores: [");
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0 && n != i)
        {
            d++;
            printf("%d, ", i);
        }
        else if (n == i)
        {
            printf("%d", i);
        }
    }
    printf("]\n");

    d == 2 ? printf("É primo\n") : printf("Não é primo\n");

    return 0;
}