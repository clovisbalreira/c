#include <stdio.h>
#include <locale.h>

void main(){
    //setlocale(LC_ALL, "Portuguese");
    int numero;
    int dobro;
    float terco;
    printf("dobro e terca parte\n");
    printf("Digite um numero: ");
    scanf("%d", &numero);
    dobro = numero * 2;
    terco = (float) numero / 3;
    printf("Analisando o numero %d, e seu dobro e %d e seu terca parte e %.2f", numero, dobro, terco);
}

