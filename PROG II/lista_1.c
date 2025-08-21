#include <stdio.h>
#include <stdlib.h>

//Exercício 1
int ex_1()
{
    int *ptr;
    int p = 1;
    ptr = &p;
    printf("Exercício 1: %d\n", *ptr);
    return 0;
}

//Exercício 2
int ex_2()
int ex_2()
{
    int *ptr;
    int v[] = {10, 20, 30, 40, 50};

    printf("Exercício 2:");
    for (int i = 0; i < sizeof(v)/sizeof(v[i]); i++)
    {
        printf(" %d", *(v + i));
    }
    printf("\n");
    return 0;
}

//Exercício 3
int ex_3()
{
    int x = 10;
    int *ptr = &x;
    *ptr = 42;
    printf("Exercício 3: %d\n", x);
    return 0;
}

//Exercício 4
int ex_4()
{
    int n, i;
    int *arr;

    printf("Tamanho do vetor: ");
    scanf("%d", &n);

    arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL)
    {
        printf("Erro de alocação de memória!\n");
        return 1;
    }

    for (i = 0; i < n; i++)
    {
        printf("Digite o valor %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Exercício 4: ");
    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    free(arr);
    return 0;
}

//Exercício 5
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int ex_5()
{
    int x = 5, y = 10;
    swap(&x, &y);
    printf("Exercício 5: x=%d, y=%d\n", x, y);
    return 0;
}

//Exercício 6
int ex_6()
{
    char str[] = "Ponteiros em C";
    char *ptr = str;

    printf("Exercício 6: ");
    while (*ptr != '\0')
    {
        printf("%c ", *ptr);
        ptr++;
    }
    printf("\n");
    return 0;
}

//Exercício 7
int ex_7()
{
    int l, c;

    printf("Linhas: ");
    scanf("%d", &l);

    printf("Colunas: ");
    scanf("%d", &c);

    int **matriz = (int **)malloc(l * sizeof(int *));

    for (int i = 0; i < l; i++)
    {
        matriz[i] = (int *)malloc(c * sizeof(int));
        for (int j = 0; j < c; j++)
        {
            printf("Digite o valor [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("Exercício 7: ");
    for (int i = 0; i < l; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < l; i++)
    {
        free(matriz[i]);
    }
    free(matriz);

    return 0;
}

//Exercício 8
int ex_8()
{
    int *arr = (int *)malloc(5 * sizeof(int));
    if (arr == NULL)
    {
        printf("Erro de alocação!\n");
        return 1;
    }

    printf("Digite 5 valores: ");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }

    arr = (int *)realloc(arr, 10 * sizeof(int));
    if (arr == NULL)
    {
        printf("Erro de realocação!\n");
        return 1;
    }

    printf("Digite mais 5 valores: ");
    for (int i = 5; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Exercício 8: ");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    free(arr);
    return 0;
}

//Exercício 9
int ex_9()
{
    char filename[100];
    char text[500];
    FILE *file;

    printf("Digite o nome do arquivo: ");
    scanf("%s", filename);

    printf("Digite o texto: ");
    scanf(" %[^\n]", text);

    file = fopen(filename, "w");
    if (file == NULL)
    {
        printf("Erro ao abrir arquivo!\n");
        return 1;
    }

    fputs(text, file);
    fclose(file);

    printf("Exercício 9: \n");
    return 0;
}

//Exercício 10
int ex_10()
{
    char filename[100];
    char ch;
    FILE *file;

    printf("Digite o nome do arquivo: ");
    scanf("%s", filename);

    file = fopen(filename, "r");
    if (file == NULL)
    {
        printf("Erro: arquivo não encontrado!\n");
        return 1;
    }

    printf("Exercício 10: ");
    while ((ch = fgetc(file)) != EOF)
    {
        putchar(ch);
    }
    printf("\n");
    fclose(file);
    return 0;
}

//Exercício 11
int ex_11()
{
    char origem[100], destino[100];
    FILE *src, *dest;
    char ch;

    printf("Origem: ");
    scanf("%s", origem);

    printf("Destino: ");
    scanf("%s", destino);

    src = fopen(origem, "r");

    if (src == NULL)
    {
        printf("Origem inexistente\n");
        return 1;
    }

    dest = fopen(destino, "w");

    if (dest == NULL)
    {
        printf("Erro ao definir\n");
        fclose(src);
        return 1;
    }

    while ((ch = fgetc(src)) != EOF)
    {
        fputc(ch, dest);
    }

    fclose(src);
    fclose(dest);

    printf("Exercício 11:\n");
    return 0;
}

int main()
{
    ex_1();
    ex_2();
    ex_3();
    ex_4();
    ex_5();
    ex_6();
    ex_7();
    ex_8();
    ex_9();
    ex_10();
    ex_11();

    return 0;
}
