#include <stdio.h>
#include <locale.h>

void main(){
    //setlocale(LC_ALL, "Portuguese");
    float distancia, valor, valorTotal;
    printf("==========Tabela de precos========\n");
    printf("Viagens ate 200 Km\tR$ 0.50/Km\n");
    printf("A partir de 200 Km\tR$ 0.35/Km\n");
    printf("----------------------------------\n");
    printf("Distancia total da viagem, em Km: ");
    scanf("%f", &distancia);
    if(distancia > 200){
        valor = 0.35;
    }else{

        valor = 0.50;
    }
    valorTotal = distancia * valor;
    printf("Uma viagem de %.2f Km vai custar R$ %.2f/Km.\nValor Total: R$ %.2f\n", distancia, valor, valorTotal);
    printf("----------------------------------\n");
}