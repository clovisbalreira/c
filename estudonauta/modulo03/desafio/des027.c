#include <stdio.h>
#include <locale.h>

void main(){
    //setlocale(LC_ALL, "Portuguese");
    int n1, n2, n3;
    printf("Ordem em dois numeros\n");
    printf("Me diga dois numeros e eu colocarei os dois em ordem crescente.\n");
    printf("Primeiro numero: ");
    fflush(stdin);
    scanf("%d", &n1);
    printf("Segunda numero: ");
    fflush(stdin);
    scanf("%d", &n2);
    printf("Terceiro numero: ");
    fflush(stdin);
    scanf("%d", &n3);
    if(n1 > n2 && n1 > n3 && n2 > n3){
        printf("Maior %d\nIntermediario: %d\nMenor: %d", n1, n2, n3);
    }else if(n1 > n2 && n1 > n3 && n2 < n3){
        printf("Maior %d\nIntermediario: %d\nMenor: %d", n1, n3, n2);
    }else if(n1 < n2 && n1 > n3 && n2 > n3){
        printf("Maior %d\nIntermediario: %d\nMenor: %d", n2, n1, n3);
    }else if(n1 < n2 && n1 < n3 && n2 > n3){
        printf("Maior %d\nIntermediario: %d\nMenor: %d", n2, n1, n3);
    }else if(n1 < n2 && n1 < n3 && n2 < n3){
        printf("Maior %d\nIntermediario: %d\nMenor: %d", n3, n2, n1);
    }else if(n1 > n2 && n1 < n3 && n2 < n3){
        printf("Maior %d\nIntermediario: %d\nMenor: %d", n3, n2, n1);
    }
}