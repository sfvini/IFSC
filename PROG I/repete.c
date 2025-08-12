#include <stdio.h>
#include <string.h>

int repete(char orig[], int n, char dest[])
{   
    for (int i = 0; i < n; i++)
    {
        strcat(dest, orig);
    }
    return strlen(dest);
}

int main()
{
    int n, tamanho;
    char orig[11];
    char dest[101] = "";

    printf("Entre com uma palavra: ");
    scanf("%10s", orig);

    printf("Entre com o número de repetições (0 a 10): ");
    scanf("%d", &n);

    tamanho = repete(orig, n, dest);

    printf("Resultado: %s\n", dest);
    printf("Resultado: %d\n", tamanho);

    return 0;
}