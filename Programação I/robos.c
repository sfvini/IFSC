#include <stdio.h>

typedef struct
{
    float x, y;
} Ponto;

void mover(Ponto *p, char direcao, float distancia)
{

    switch (direcao)
    {
    case 'N':
        p->x += distancia;
        break;
    case 'S':
        p->x -= distancia;
        break;
    case 'L':
        p->y += distancia;
        break;
    case 'O':
        p->y -= distancia;
        break;
    default:
        break;
    }
}

float distancia(Ponto p1, Ponto p2)
{

}

int main()
{
    Ponto p1 = {0, 0};
    Ponto p2 = {10, 10};

    char direcao;
    float distancia;

    printf("Entre com os movimentos do robô 1: ");
    scanf(" %c %f  %c %f  %c %f", &direcao, &distancia, &direcao, &distancia, &direcao, &distancia);

    mover(&p1, direcao, distancia);
    printf("Posição final do robô 1: (%f,%f)\n", p1);

    printf("Entre com os movimentos do robô 2: ");
    scanf(" %c %f %c %f %c %f", &direcao, &distancia, &direcao, &distancia, &direcao, &distancia);

    mover(&p2, direcao, distancia);
    printf("Posição final do robô 1: (%f,%f)\n", p2);

    return 0;
}