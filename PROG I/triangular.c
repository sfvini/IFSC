#include <stdio.h>
#include <stdbool.h>

bool triangular(int n)
{
    int i = 1;
    int soma = 0;

    while (soma < n)
    {
        soma = soma + i;
        i++;
    }

    return soma == n;
}

int main()
{
    int n;

    printf("Digite um número inteiro positivo: ");
    scanf("%d", &n);

    if (triangular(n))
    {
        printf("É triângular\n");
    }
    else
    {
        printf("Não é triângular\n");
    }

    return 0;
}