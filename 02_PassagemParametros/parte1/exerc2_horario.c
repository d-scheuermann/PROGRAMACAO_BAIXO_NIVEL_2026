#include <stdio.h>

void tempo(int ts, int* h, int* m, int* s)
{
    *h = ts / 3600;
    *m  = ts % 3600 / 60;
    *s  = ts % 3600 % 60;
}

int main()
{
    int totalSegundos, horas, minutos, segundos;
    printf("Digite um total em segundos desde a meia-noite: ");
    scanf("%d", &totalSegundos);
    tempo(totalSegundos, &horas, &minutos, &segundos);
    printf("Horas: %d\n", horas);
    printf("Minutos: %d\n", minutos);
    printf("Segundos: %d\n", segundos);
    // %02d -> ocupa sempre 2 espaços, preenche com 0 à esquerda
    printf("%02d:%02d:%02d\n", horas, minutos, segundos);
}