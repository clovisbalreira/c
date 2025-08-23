#include <stdio.h>
#include <locale.h>

void main(){
    //setlocale(LC_ALL, "Portuguese");
    int numero = 90;
    printf("Digite um numero: ");
    scanf("%d", &numero);
    printf("O numero %d e ", numero);
    if(numero % 2 == 0){
        printf("par");
    }else{
        printf("impar");
    }
}

/*
    Condição compostas
    if(condição){

    }else{
    
    }
*/