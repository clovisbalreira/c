#include <stdio.h>
#include <locale.h>

void main(){
    //setlocale(LC_ALL, "Portuguese");
    int numero = 90;
    printf("Digite um numero: ");
    scanf("%d", &numero);
    switch (numero){
        case 1:
            printf("Um");
            break;
        case 2:
            printf("Dois");
            break;
        case 3:
            printf("Tres");
            break;
        case 4:
            printf("Quatro");
            break;
        case 5:
            printf("Cinco");
            break;
        default:
            printf("Erro!");
            break;
    }
}

/*
    Condição multiplas
    swich(condicao){
        case 1:
        break:
        default:
        break;
    }
*/