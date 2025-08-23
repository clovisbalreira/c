#include <stdio.h>
#include <locale.h>

void main(){
    //setlocale(LC_ALL, "Portuguese");
    int numero, deslocamento;
    printf("-----Operacoes de deslocamento-----\n");
    printf("Digite um numero: ");
    fflush(stdin);
    scanf("%d", &numero);
    printf("Digite o deslocamento: ");
    fflush(stdin);
    scanf("%d", &deslocamento);
    int esquerda = numero >> deslocamento;
    printf("Calculando %d >> %d e igual a %d\n", numero, deslocamento, esquerda);
    int direita = numero << deslocamento;
    printf("Calculando %d << %d e igual a %d\n", numero, deslocamento, direita);
}

