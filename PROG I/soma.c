#include <stdio.h>

int main()
{
    int num, soma = 0, dig;

    printf("Digite um número inteiro: ");
    scanf("%d", &num);

    while (num > 0)
    {
        dig = num % 10;
        soma += dig;
        num = num / 10;
    }
    printf("Soma: %d\n", soma);

    return 0;
}