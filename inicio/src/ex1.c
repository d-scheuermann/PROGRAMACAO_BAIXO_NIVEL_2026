#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//Escreva um programa para um caixa de banco, que leia um valor inteiro R e determina o número de notas de 100, 50, 10, 5 e 1 reais necessário para pagar a quantia R. Faça de forma que o número de notas usado seja o menor possível, exibindo o resultado na tela.

int main() {
    int valor;
    printf("Digite um valor inteiro: ");
    scanf("%d", &valor);
    int n100 = valor / 100;
    int n50 = valor % 100 / 50;
    int n10 = valor % 100 % 50 / 10;
    int n5 = valor % 100 % 50 % 10 / 5;
    int n1 = valor % 100 % 50 % 10 % 5;
    printf("Quantidade de notas de R$100: %d\n", n100);
    printf("Quantidade de notas de R$50: %d\n", n50);
    printf("Quantidade de notas de R$10: %d\n", n10);
    printf("Quantidade de notas de R$5: %d\n", n5);
    printf("Quantidade de notas de R$1: %d\n", n1);
    return 0;
}
