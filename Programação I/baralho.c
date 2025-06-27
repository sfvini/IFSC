#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

#define VALORES 13
#define NAIPES 4

int main()
{
    int sortN, sortV, n;
    char naipes[] = {'e', 'c', 'o', 'p'};
    char valores[] = {
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

    bool sorteada[VALORES][NAIPES] = {};

    srand(time(NULL));

    printf("Entre com o número de cartas: ");
    scanf("%d", &n);

    printf("Mão sorteada:");
    while (n > 0)
    {
        sortV = rand() % VALORES;
        sortN = rand() % NAIPES;
        if (!sorteada[sortV][sortN])
        {
            printf(" %c%c", valores[sortV], naipes[sortN]);
            sorteada[sortV][sortN] = true;
            n--;
        }
    }
    printf("\n");

    return 0;
}