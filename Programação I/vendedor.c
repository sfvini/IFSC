#include <stdio.h>

int main()
{
    float vendas, bonus, remuneracao;
    int av_desempenho;

    printf("Valor total das vendas: \n");
    scanf("%f", &vendas);

    printf("Avaliação de desempenho (1-10): \n");
    scanf("%d", &av_desempenho);

    if (av_desempenho >= 8)
    {
        bonus = 500;
    }
    else
    {
        bonus = 0;
    }

    if (vendas >= 10000)
    {
        remuneracao = bonus + 2000 + vendas * 0.07;
    }
    else
    {
        remuneracao = bonus + 2000 + vendas * 0.05;
    }

    printf("Remuneração: %.2f\n", remuneracao);

    return 0;
}