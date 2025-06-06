#include <stdio.h>
#include <stdbool.h>

bool bissexto(int ano)
{
    return (ano % 4 == 0 && ano % 100 != 0 || (ano % 400 == 0));
}

int diasMes(int mes, int ano)
{
    int dias;

    if (mes == 2)
    {
        bissexto(ano) ? dias = 29 :  dias = 28;
    }

    switch (mes)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        dias = 31;
        break;
    default:
        dias = 30;
        break;
    }
}

// bool dataValida(int, int, int)
// {
//     return (dia < 1 || dia > 31 || mes < 1 || mes > 12 || ano < 0 || mes == 2 && dia > 29);
// }

int main()
{

    int dia, mes, ano;

    printf("Digite a data (dd/mm/aaaa): ");
    scanf("%d/%d/%d", &dia, &mes, &ano);

    return 0;
}