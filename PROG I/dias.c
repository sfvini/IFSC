#include <stdio.h>
#include <stdbool.h>

bool bissexto(int ano)
{
    return ((ano % 4 == 0 && ano % 100 != 0) || ano % 400 == 0);
}

int diasMes(int mes, int ano)
{
    switch (mes)
    {
    case 2:
        return bissexto(ano) ? 29 : 28;
    case 4:
    case 6:
    case 9:
    case 11:
        return 30;
    default:
        return 31;
    }
}

bool dataValida(int dia, int mes, int ano)
{
    return !(ano <= 0 || mes < 1 || mes > 12 || dia < 1 || dia > diasMes(mes, ano));
}

int diasTotais(int dia, int mes, int ano)
{
    int total = dia;

    if (mes > 1)
        total += 31;
    if (mes > 2)
        total += bissexto(ano) ? 29 : 28;
    if (mes > 3)
        total += 31;
    if (mes > 4)
        total += 30;
    if (mes > 5)
        total += 31;
    if (mes > 6)
        total += 30;
    if (mes > 7)
        total += 31;
    if (mes > 8)
        total += 31;
    if (mes > 9)
        total += 30;
    if (mes > 10)
        total += 31;
    if (mes > 11)
        total += 30;

    return total;
}

int main()
{
    int dia, mes, ano;

    printf("Digite a data (dd/mm/aaaa): ");
    scanf("%d/%d/%d", &dia, &mes, &ano);

    dataValida(dia, mes, ano) ? printf("Dias totais: %d\n", diasTotais(dia, mes, ano)) : printf("Data invalida!\n");

    return 0;
}