#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//Escreva um programa que leia um vetor de inteiros, descubra e exiba um número inteiro correspondente à quantidade de valores que aparecem mais de uma vez. Exemplo: se o vetor for [1, 2, 3, 4, 5, 3, 6, 7, 2, 8], o retorno será 2 (2 números se repetem, 2 e 3).

int main() {
    int vet[10] = {1, 2, 3, 4, 5, 3, 6, 7, 2, 8};
    int repetidos = 0;
    int total;
    for (int pos1=0; pos1 < 10; pos1++) {
        for (int pos2=pos1+1; pos2 < 10; pos2++) {
            if (vet[pos1] == vet[pos2]) {
                total++;
            }
        }
        if(total == 1)
        repetidos++;
    }
    printf("Quantidade de valores repetidos: %d\n", repetidos);
    return 0;
}
