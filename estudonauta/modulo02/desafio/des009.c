#include <stdio.h>
#include <locale.h>

void main(){
    //setlocale(LC_ALL, "Portuguese");
    char nome[20];
    float nota1, nota2, media;
    printf("Media do aluno\n");
    printf("Nome do aluno: ");
    fflush(stdin);
    gets(nome);
    printf("Nota 1: ");
    fflush(stdin);
    scanf("%f", &nota1);
    printf("Nota 2: ");
    fflush(stdin);
    scanf("%f", &nota2);
    media = ( nota1 + nota2) / 2;
    printf("O aluno %s tirou notas %.2f e %.2f e ficou com media %.2f", nome, nota1, nota2, media);
}