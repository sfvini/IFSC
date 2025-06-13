#include <stdio.h>

int main()
{

    int c = 0, v = 0;
    char caractere;

    printf("Entre com uma frase: ");
    scanf("%c", &caractere);

    while (caractere != '\n')
    {
        if (caractere >= 'A'&& caractere <= 'Z')
        {
            caractere -= 'A' - 'a';
        }
        if (caractere == 'a' || caractere == 'e' ||
            caractere == 'i' || caractere == 'o' || caractere == 'u')
        {
            v++;
        }
        else if ('a' <= caractere && caractere <= 'z')
        {
            c++;
        }
        scanf("%c", &caractere);
    }
    
    printf("Número de vogais: %d\n", v);
    printf("Número de consoantes: %d\n", c);

    return 0;
}