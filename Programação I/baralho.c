#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

#define MAX 52

int main()
{
    char mao[MAX][MAX];
    int sortN, sortV;
    char naipes[MAX] = {'e', 'c', 'o', 'p'};
    char valores[MAX] = {
        'A',
        '2',
        '3',
        '4',
        '5',
        '6',
        '7',
        '8',
        '9',
        'X',
        'J',
        'Q',
        'K',
    };
    bool sorteada[MAX][MAX];
    int n;

    printf("Entre com o número de cartas: ");
    scanf("%d", &n);

    srand(time(NULL));

    for (int i = 0; i < n; i++)
    {
        sortN = rand() % 4;
        sortV = rand() % 13;

        
    }

    return 0;
}