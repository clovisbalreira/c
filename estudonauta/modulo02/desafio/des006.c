#include <stdio.h>
#include <locale.h>

void main(){
    //setlocale(LC_ALL, "Portuguese");
    int numero;
    int antecessor;
    int sucessor;
    printf("Antecessor e sucessor\n");
    printf("Digite um numero: ");
    scanf("%d", &numero);
    antecessor = numero - 1;
    sucessor = numero + 1;
    printf("Analisando o numero %d, e seu antecessor e %d e seu sucessor e %d", numero, antecessor, sucessor);
}