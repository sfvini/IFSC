#include <stdio.h>
#include <stdbool.h>

bool vogal(char caractere)
{
    char vogais[] = "aeiouAEIOU";
    for (int i = 0; i < 10; i++)
    {
        if (caractere == vogais[i])
        {
            return true;
        }
    }
    return false;
}

void remover(char palavra[])
{
    int j = 0;
    for (int i = 0; palavra[i] != '\0'; i++)
    {
        if (!vogal(palavra[i]))
        {
            palavra[j] = palavra[i];
            j++;
        }
    }
    palavra[j] = '\0';
}

int main()
{
    char palavra[11];

    printf("Entre com uma palavra: ");
    scanf("%10s", palavra);

    remover(palavra);
    printf("Palavra sem vogais: %s\n", palavra);

    return 0;
}