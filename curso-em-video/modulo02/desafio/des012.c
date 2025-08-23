#include <stdio.h>
#include <locale.h>
#include <string.h>

void main(){
    //setlocale(LC_ALL, "Portuguese");
    float nota1, nota2, media;
    char resultado[20];
    printf("Primeira nota: ");
    fflush(stdin);
    scanf("%f", &nota1);
    printf("Segunda nota: ");
    fflush(stdin);
    scanf("%f", &nota2);
    media = (nota1 + nota2) / 2;
    strcpy(resultado, (media >= 7 ) ? "Aprovado" : "Reprovado");
    printf("Com as notas %.2f e %.2f, o aluno tem media de %.2f.\nA situacao e %s", nota1, nota2, media, resultado);
}