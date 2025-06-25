#include <stdio.h>

void rotaciona(int n, float arranjo[], int r)
{
    float nArranjo[n];

    for (int i = 0; i < n; i++)
    {
        nArranjo[i] = arranjo[i];
    }

    r %= n;

    if (r < 0)
    {
        r += n;
    }

    for (int i = 0; i < n; i++)
    {
        arranjo[(i + r) % n] = nArranjo[i];
    }
}

int main()
{
    int n, r;

    printf("Entre com o número de elementos (máx 100): ");
    scanf("%d", &n);

    float arranjo[n];

    printf("Entre com os elementos: ");

    for (int i = 0; i < n; i++)
    {
        scanf("%f", &arranjo[i]);
    }

    printf("Entre com a rotação: ");
    scanf("%d", &r);

    rotaciona(n, arranjo, r);

    for (int i = 0; i < n; i++)
    {
        printf("%g ", arranjo[i]);
    }
    printf("\n");

    return 0;
}