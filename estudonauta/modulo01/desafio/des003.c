#include <stdio.h>
#include <locale.h>

void main(){
    //setlocale(LC_ALL, "Portuguese");
    char nome[20];
    int idade;
    float peso;
    printf("Qual e seu nome ? ");
    fflush(stdin);
    gets(nome);
    printf("Quantos anos voce tem ? ");
    fflush(stdin);
    scanf("%d", &idade);
    printf("Qual e o seu peso ? (Kg) ");
    fflush(stdin);
    scanf("%f", &peso);
    printf("------<<< PROCESSANDO >>>------");
    printf("\nMuito prazer, %s.\nVoce tem %d anos e pesa %.2f correto?", nome, idade, peso);
    printf("\nFIM");
}

