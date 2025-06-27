#include <stdio.h>

#define MAX 100

int main()
{
    int linhas, colunas;
    int matriz[MAX][MAX];
    float media;

    printf("Entre com o número de linhas e colunas: ");
    scanf("%d %d", &linhas, &colunas);

    printf("Entre com os elementos da matriz: \n");
    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            scanf("%d", &matriz[i][j]);
        }
    }
    printf("\n");

    printf("Médias das linhas: ");
    for (int i = 0; i < linhas; i++)
    {
        media = 0.0;
        for (int j = 0; j < colunas; j++)
        {
            media += matriz[i][j];
        }
        media = media / 3;
        printf("%.1f ", media);
    }
    printf("\n");

    printf("Médias das colunas: ");
    for (int j = 0; j < colunas; j++)
    {
        media = 0.0;
        for (int i = 0; i < linhas; i++)
        {
            media += matriz[i][j];
        }
        media = media / 2;
        printf("%.1f ", media);
    }
    printf("\n");

    return 0;
}