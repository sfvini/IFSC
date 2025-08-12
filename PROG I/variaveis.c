#include <stdio.h>

int main()
{
    float altura, largura, profundidade, area, volume, preco, quantidade;

    printf("Entre com a altura da caixa:\n");
    scanf("%f", &altura);

    printf("Entre com a largura da caixa:\n");
    scanf("%f", &largura);

    printf("Entre com a profundidade da caixa:\n");
    scanf("%f", &profundidade);

    printf("Entre com o preço do metro quadrado:\n");
    scanf("%f", &preco);

    printf("Entre com a quantidade de caixas:\n");
    scanf("%f", &quantidade);

    area = (2 * altura * largura) + (2 * altura * profundidade) + (2 * largura * profundidade);
    volume = profundidade * altura * largura;

    printf("A área é %.2fm² e o volume é %.3fm³\n", area, volume);
    printf("O preço por m² é R$%.2f\n", area * preco);
    printf("O preço total é R$%.2f\n", area * preco * quantidade);

    return 0;
}