#include <stdio.h>

typedef struct
{
    float media, min, max;
} Estatisticas;

Estatisticas calculos(int ne, float e[]){
    Estatisticas info = ;

    for (int i = 0; i < ne; i++)
    {
        
    }
    
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
    
    Estatisticas e = calculos(ne, elem);

    return 0;
}