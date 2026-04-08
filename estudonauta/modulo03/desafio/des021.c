#include <stdio.h>
#include <locale.h>

void main(){
    //setlocale(LC_ALL, "Portuguese");
    float numero, resultado;
    printf("Inverso ou oposto\n");
    printf("Digite um numero (positivo ou negativo): ");
    scanf("%f", &numero);
    if(numero > 0){
        resultado = 1 / numero;
        printf("O inverso de %.0f e igual %.4f", numero, resultado);
    }else{
        resultado = numero * (-1);
        printf("O oposto de %.0f e igual %.0f", numero, resultado);
    }
    

}