#include <stdio.h>
#include <locale.h>

void main(){
    //setlocale(LC_ALL, "Portuguese");
    char letra;
    char letraAntes;
    char letraDepois;
    printf("Letra Antes e Letra Depois\n");
    printf("Digite um letra: ");
    scanf("%c", &letra);
    letraAntes = letra - 1;
    letraDepois = letra + 1;
    printf("Antes da letra %c temos a letra %c. Depois temos a letra %c", letra, letraAntes, letraDepois);
}