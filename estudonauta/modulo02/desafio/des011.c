#include <stdio.h>
#include <locale.h>
#include <string.h>

void main(){
    //setlocale(LC_ALL, "Portuguese");
    int numero;
    char resultado[20];
    printf("Digite um numero qualquer: ");
    scanf("%d", &numero);
    strcpy(resultado, (numero % 2 == 0 )? "Par" : "Impar");
    printf("O numero %d que voce digitou e %s", numero, resultado);
}
33