#include <stdio.h>

typedef struct
{
    float media, min, max;
} Estatisticas;

Estatisticas calculos(int n, float a[]){

}


int main()
{
    int ne;
    

    printf("Entre com o número de elementos (máx 100): ");
    scanf("%d", &ne);

    float elem[ne];

    printf("Entre com os elementos: ");
    for (int i = 0; i < ne; i++)
    {
        scanf("%f", &elem[i]);
        
    }
    

    return 0;
}