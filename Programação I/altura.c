// #include <stdio.h>

// int main()
// {

//     float metros;
//     int pes, polegadas;

//     printf("Entre com sua altura em pés + polegadas (ex: 5 10)\n");
//     scanf("%d%d", &pes, &polegadas);

//     metros = (pes * 12 + polegadas) * 0.0254;

//     printf("Altura em metros: %.2f\n", metros);

//     return 0;
// }

#include <stdio.h>

int main()
{

    float metros;
    int pes, polegadas;

    printf("Entre com sua altura em metros (ex: 1.94)\n");
    scanf("%f", &metros);

    polegadas = (int)(metros / 0.0254);
    pes = polegadas / 12;
    polegadas = polegadas - 12 * pes;

    printf("Altura em pés e polegadas: %d.%d\n", pes, polegadas);

    return 0;
}
