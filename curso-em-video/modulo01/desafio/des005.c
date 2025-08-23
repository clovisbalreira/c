#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

void main(){
    //setlocale(LC_ALL, "Portuguese");
    srand(time(NULL));
    int computador = rand() % 10 + 1; // gera entre 1 a 10
    int jogador;
    printf("Sera que voce acerta?");
    printf("\nVou pensar em um numero entre 1 a 5. Tente adivinhar!");
    printf("\nQual e o seu palpite? ");
    scanf("%d", &jogador);
    printf("Eu pensei no numero %d e voce pensou no numero %d", computador, jogador);
}
