#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int num, palpite, tentativas = 0;

    srand(time(NULL));
    num = 1 + rand() % 100;

    do
    {
        printf("Entre com seu palpite (1 a 100): ");
        scanf("%d", &palpite);

        tentativas++;

        if (palpite > num)
            printf("O número sorteado é menor\n");
        else if (palpite < num)
            printf("O número sorteado é maior\n");

    } while (num != palpite);

    printf("Parabéns, você acertou em %d tentativas!\n", tentativas);

    return 0;
}
