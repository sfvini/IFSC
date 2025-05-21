#include <stdio.h>

int main()
{
    float altura, largura, profundidade, area, volume;

    printf("Entre com a altura da caixa:\n");
    scanf("%f", &altura);

    printf("Entre com a largura da caixa:\n");
    scanf("%f", &largura);

    printf("Entre com a profundidade da caixa:\n");
    scanf("%f", &profundidade);

    area = (2 * altura * largura) + (2 * altura * profundidade) + (2 * largura * profundidade);

    volume = profundidade * altura * largura;

    printf("A área é %.2fm² e o volume é %.3fm³\n", area, volume);

    return 0;
}