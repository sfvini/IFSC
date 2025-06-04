#include <stdio.h>

int main()
{

    int dia, mes, ano;
    const char *m;
    const char *d;

    printf("Digite a data (dd/mm/aaaa): ");
    scanf("%d/%d/%d", &dia, &mes, &ano);
    if (dia < 1 || dia > 31 || mes < 1 || mes > 12 || ano < 0)
    {
        printf("Data inválida.\n");
        return 1;
    }
    else
    {

        printf("Data original: %02d/%02d/%04d\n", dia, mes, ano);

        switch (mes)
        {
        case 1:
            m = "January";
            break;
        case 2:
            m = "February";
            break;
        case 3:
            m = "March";
            break;
        case 4:
            m = "April";
            break;
        case 5:
            m = "May";
            break;
        case 6:
            m = "June";
            break;
        case 7:
            m = "July";
            break;
        case 8:
            m = "August";
            break;
        case 9:
            m = "September";
            break;
        case 10:
            m = "October";
            break;
        case 11:
            m = "November";
            break;
        case 12:
            m = "December";
            break;
        default:
            return 1;
            break;
        }
    }

    if (dia == 1 || dia == 21 || dia == 31)
    {
        d = "st";
    }
    else if (dia == 2 || dia == 22)
    {
        d = "nd";
    }
    else if (dia == 3 || dia == 23)
    {
        d = "rd";
    }
    else
    {
        d = "th";
    }

    printf("Data formatada: %d%s %s, %d\n", dia, d, m, ano);

    return 0;
}