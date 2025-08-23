#include <stdio.h>
#include <locale.h>

void main(){
    //setlocale(LC_ALL, "Portuguese");
    int n1, n2;
    printf("Primeiro valor: ");
    scanf("%d", &n1);
    printf("Segundo valor: ");
    scanf("%d", &n2);
    if(n1 > n2){
        printf("O maior e o primeiro %d\n", n1);
    }else if(n1 < n2){
        printf("O maior e o segundo %d\n", n2);
    }else{
        printf("Ele sao iguais");
    }
}
/*
    if(condicao){
    }else if(condicao){
    }else{
    }
*/