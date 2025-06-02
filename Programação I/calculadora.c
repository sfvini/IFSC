#include <stdio.h>

int main()
{
    float num1, num2, res;
    char op;

    printf("Escreva a operação matemática (Ex: 3 + 5): ");
    scanf("%f %c %f", &num1, &op, &num2);

    if (op == '/' && num2 == 0)
    {
        printf("Divisão por zero não é permitida.");
    }
    else
    {
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
        printf("%.2f\n", res);
    }

    return 0;
}