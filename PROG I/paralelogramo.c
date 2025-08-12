#include <stdio.h>
#include <math.h>

typedef struct
{
    float lado1;
    float lado2;
    float angulo;
} Paralelogramo;

int main()
{
    Paralelogramo medidas;

    printf("Digite os valores dos lados do paralelogramo: ");
    scanf("%f %f", &medidas.lado1, &medidas.lado2);
    printf("Digite o ângulo (graus): ");
    scanf("%f", &medidas.angulo);

    float area = medidas.lado1 * medidas.lado2 * sin(medidas.angulo * M_PI / 180);
    float perimetro = 2 * (medidas.lado1 + medidas.lado2);
    printf("Área: %.2f\n", area);
    printf("Perímetro: %.2f\n", perimetro);

    return 0;
}