#include <stdio.h>
#include <string.h>

void main(){
    char nome[10];
    strcpy(nome, "Gustavo");
    float media = 5;
    char sit[10];
    char nome1[10] = "Guanabara";
    int tam = strlen(nome);
    char nome_upper[40];
    char nome1_lower[40];
    strcpy(sit, (media >= 7) ? "Aprovado" : "Reprovado");
    printf("Muito Prazer %s\n", nome);
    printf("A situacao do aluno e %s\n", sit);
    printf("O tamanho e %d\n", tam);
    int res = strcmp(nome, nome1);
    printf("O resultado da comparacao e %d\n", res);
    printf("%s\n", strcat(nome, nome1));
    strcpy(nome_upper, nome);
    strcpy(nome1_lower, nome1);
    printf("Maiusculas: %s\n", strupr(nome_upper));
    printf("Minusculas: %s\n", strlwr(nome1_lower));
}
/*
    Ternario
*/