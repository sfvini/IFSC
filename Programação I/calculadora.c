#include <stdio.h>

int main()
{
    float num1, num2, res;
    int op;

    printf("Escreva a operação matemática (Ex: 3 + 5): ");
    scanf("%f, %d, %f", num1, op, num2);

    switch (op)
    {
    case '+':
        res = num1 + num2;
        break;
    case '-':
        res = num1 - num2;
        break;
    case '*':
        res = num1 * num2;
        break;
    case '/':
        res = num1 / num2;
        break;
    default:
        printf("Operação inválida");
        break;
    }

    printf("%f", res);

    return 0;
}