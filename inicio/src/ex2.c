#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//Escreva um programa que receba um tempo em total de segundos desde a meia-noite, exibindo o tempo em horas, minutos e segundos correspondentes.

int main() {
    int totalSegundos;
    printf("Digite um total de segundos desde a meia-noite: ");
    scanf("%d", &totalSegundos);
    int horas = totalSegundos/3600;
    int minutos = totalSegundos % 3600/60;
    int segundos = totalSegundos % 3600 % 60;
    printf("Quantidade de horas: %d\n", horas);
    printf("Quantidade de minutos: %d\n", minutos);
    printf("Quantidade de segundos: %d\n", segundos);
    return 0;
}
