#include <stdio.h>

int potencia_fatorial(int x, int m)
{
    int res = 1;
    while (m > 0)
    {
        res *= x;
        x--;
        m--;
    }
    return res;
}

int coeficiente_binomial(int n, int k)
{
    return potencia_fatorial(n, k) / potencia_fatorial(k, k);
}

void imprime_pascal(int n_max)
{
    for (int n = 0; n <= n_max; n++)
    {
        for (int k = 0; k <= n; k++)
        {
            printf("%d ", coeficiente_binomial(n, k));
        }
        printf("\n");
    }
}

int main()
{
    int n_max;

    printf("Entre com o n máximo: ");
    scanf("%d", &n_max);

    imprime_pascal(n_max);

    return 0;
}