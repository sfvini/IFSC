#include <stdio.h>
#include <math.h>

typedef struct
{
    float x, y;
} Ponto;

void mover(Ponto *p, char direcao, float distancia)
{
    switch (direcao)
    {
    case 'N':
        p->y += distancia;
        break;
    case 'S':
        p->y -= distancia;
        break;
    case 'L':
        p->x += distancia;
        break;
    case 'O':
        p->x -= distancia;
        break;
    default:
        printf("Direção inválida: %c\n", direcao);
        break;
    }
}

float distancia(Ponto p1, Ponto p2)
{
    return sqrt((p1.x - p2.x) * (p1.x - p2.x) + (p1.y - p2.y) * (p1.y - p2.y));
}

int main()
{
    Ponto p1 = {0, 0};
    Ponto p2 = {10, 10};

    char dir;
    float dis;

    printf("Entre com os movimentos do robô 1: ");
    for (int i = 0; i < 3; i++)
    {
        scanf(" %c %f", &dir, &dis);
        mover(&p1, dir, dis);
    }

    printf("Entre com os movimentos do robô 2: ");
    for (int i = 0; i < 3; i++)
    {
        scanf(" %c %f", &dir, &dis);
        mover(&p2, dir, dis);
    }

    printf("Posição final do robô 1: (%.1f,%.1f)\n", p1.x, p1.y);
    printf("Posição final do robô 2: (%.1f,%.1f)\n", p2.x, p2.y);
    printf("Distância entre os robôs: %f\n", distancia(p1, p2));

    return 0;
}