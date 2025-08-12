#include <stdio.h>

int main()
{
    int c = 0, v = 0;
    char caractere;

    printf("Entre com uma frase: ");

    caractere = getchar();

    while (caractere != '\n')
    {
        if (caractere >= 'A' && caractere <= 'Z')
        {
            caractere += 'a' - 'A';
        }

        if (caractere == 'a' || caractere == 'e' ||
            caractere == 'i' || caractere == 'o' || caractere == 'u')
        {
            v++;
        }
        else if (caractere >= 'a' && caractere <= 'z')
        {
            c++;
        }

        caractere = getchar();
    }

    printf("Número de vogais: %d\n", v);
    printf("Número de consoantes: %d\n", c);

    return 0;
}