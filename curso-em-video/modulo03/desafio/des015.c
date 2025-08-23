#include <stdio.h>
#include <locale.h>

void main(){
    //setlocale(LC_ALL, "Portuguese");
    float nota1, nota2, media;
    printf("Digite a sua primeira nota: ");
    fflush(stdin);
    scanf("%f", &nota1);
    printf("Digite a sua segunda nota: ");
    fflush(stdin);
    scanf("%f", &nota2);
    media = ( nota1 + nota2) / 2;
    if( media >= 7){
        printf("Meus Parabens! ");
    }
    printf("A sua media final foi %.2f", media);
}