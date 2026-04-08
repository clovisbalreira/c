#include <stdio.h>
#include <locale.h>
#include <string.h>

void main(){
    //setlocale(LC_ALL, "Portuguese");
    int numero;
    char resultado[20];
    printf("Positivo ou negativo\n");
    printf("Me diga um numero e eu te direi se el e positivo, negativo ou nulo.\n");
    printf("Digite um numero: ");
    scanf("%d", &numero);
    if(numero > 0){
       strcpy(resultado, "positivo");
    }else if(numero < 0){
        strcpy(resultado, "negativo");
    }else{
        strcpy(resultado, "nulo");
    }
    printf("O valor %d digitado e %s", numero, resultado);
}