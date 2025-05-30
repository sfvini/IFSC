#include <stdio.h>

int main()
{

    float peso, imc, altura;

    printf("Peso: ");
    scanf("%f", &peso);

    printf("Altura: ");
    scanf("%f", &altura);

    imc = peso / (altura * altura);

    printf("IMC: %.2fkg/m³\n", imc);

    if (imc <= 18.5)
    {
        printf("Abaixo do normal\n");
    }
    else if (imc >= 18.6 && imc <= 24.9)
    {
        printf("Normal\n");
    }
    else if (imc >= 25 && imc <= 29.9)
    {
        printf("Sobrepeso\n");
    }
    else if (imc >= 30 && imc <= 34.9)
    {
        printf("Obesidade grau I\n");
    }
    else if (imc >= 35 && imc <= 39.9)
    {
        printf("Obesidade grau II\n");
    }
    else
    {
        printf("Obesidade grau III\n");
    }

    return 0;
}