#include <stdio.h>
#include <math.h>

float hav(float theta)
{
    return pow(sin(theta / 2), 2);
}

float grausRad(float graus)
{
    return (graus * 3.1415) / 180;
}

float distancia(float lat1, float lon1, float lat2, float lon2)
{
    return 2 * 6371 * asin(sqrt(hav(lat2 - lat1) + cos(lat1) * cos(lat2) * hav(lon2 - lon1)));
}

int main()
{
    int lat1, lat2, lon1, lon2;

    printf("Primeiro ponto (lat lon):\n");
    scanf("%d %d", &lat1, &lon1);

    printf("Segundo ponto (lat lon):\n");
    scanf("%d %d", &lat2, &lon2);

    float dist = distancia(grausRad(lat1), grausRad(lon1), grausRad(lat2), grausRad(lon2));

    printf("Distância: %.2f km\n", dist);

    return 0;
}
