#include <stdio.h>
#include <locale.h>

void main(){
    //setlocale(LC_ALL, "Portuguese");
    int n1, n2;
    printf("Ordem em dois numeros\n");
    printf("Me diga dois numeros e eu colocarei os dois em ordem crescente.\n");
    printf("Primeiro numero: ");
    fflush(stdin);
    scanf("%d", &n1);
    printf("Segunda numero: ");
    fflush(stdin);
    scanf("%d", &n2);
    if(n1 < n2){
        printf("Os numeros em ordem sao %d e %d.", n1, n2);
    }else if(n1 > n2){
        printf("Os numeros em ordem sao %d e %d.", n2, n1);
    }else{
        printf("Os numeros sao iguais %d e %d.", n2, n1);
    }
}