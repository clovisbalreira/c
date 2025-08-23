#include <stdio.h>
#include <locale.h>

void main(){
    //setlocale(LC_ALL, "Portuguese");
    float vel = 90;
    printf("Digite a velocidade do veiculo: ");
    scanf("%f", &vel);
    if(vel > 80){
        printf("Voce foi multado!\n");
    }
    printf("Dirija com cuidado!!");
}

/*
    Condição simples
    if(condição){

    }
*/