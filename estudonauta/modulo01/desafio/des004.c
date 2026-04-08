#include <stdio.h>
#include <locale.h>

void main(){
    //setlocale(LC_ALL, "Portuguese");
    char nome1[40], nome2[40], nome3[40];
    char sexo1, sexo2, sexo3 = 'M';
    float nota1, nota2, nota3 = 5.6;
    printf("------------------------------\n");
    printf("Cadastrando a primeira Pessoa:\n");
    printf("------------------------------\n");
    printf("Nome: ");
    fflush(stdin);
    gets(nome1);
    printf("Sexo [M/F]: ");
    fflush(stdin);
    scanf("%c", &sexo1);
    printf("Nota: ");
    fflush(stdin);
    scanf("%f", &nota1);
    printf("------------------------------\n");
    printf("Cadastrando a segunda Pessoa:\n");
    printf("------------------------------\n");
    printf("Nome: ");
    fflush(stdin);
    gets(nome2);
    printf("Sexo [M/F]: ");
    fflush(stdin);
    scanf("%c", &sexo2);
    printf("Nota: ");
    fflush(stdin);
    scanf("%f", &nota2);
    printf("------------------------------\n");
    printf("Cadastrando a terceira Pessoa:\n");
    printf("------------------------------\n");
    printf("Nome: ");
    fflush(stdin);
    gets(nome3);
    printf("Sexo [M/F]: ");
    fflush(stdin);
    scanf("%c", &sexo3);
    printf("Nota: ");
    fflush(stdin);
    scanf("%f", &nota3);
    printf("Listagem Completa");
    printf("-------------------------------");
    printf("\nNOME\t\t SEXO NOTA");
    printf("\n%-17s %c %6.2f", nome1, sexo1, nota1);
    printf("\n%-17s %c %6.2f", nome2, sexo2, nota2);
    printf("\n%-17s %c %6.2f", nome3, sexo3, nota3);
    printf("\n-------------------------------");
}