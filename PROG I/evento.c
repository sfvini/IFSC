#include <stdio.h>

typedef struct
{
    int hora, minuto;
} Horario;

typedef struct
{
    Horario inicio, final;
} Evento;

int cMinutos(Horario horario)
{
    int minutos;
    minutos = horario.minuto + 60 * horario.hora;
    return minutos;
}

Horario cHorario(int minutos)
{
    Horario horario;
    horario.hora = minutos / 60;
    horario.minuto = minutos % 60;
    return horario;
}

Horario dEvento(Evento evento)
{
    int h;
    h = cMinutos(evento.final) - cMinutos(evento.inicio);
    if (h <= 0)
    {
        h += 24 * 60;
    }
    return cHorario(h);
}

int main()
{
    Evento evento;
    Horario horario;

    printf("Entre com o horário de início (HH:MM): ");
    scanf("%d:%d", &evento.inicio.hora, &evento.inicio.minuto);

    printf("Entre com o horário de término (HH:MM): ");
    scanf("%d:%d", &evento.final.hora, &evento.final.minuto);

    horario = dEvento(evento);
    printf("Duração do evento: %02d:%02d\n", horario.hora, horario.minuto);

    return 0;
}
