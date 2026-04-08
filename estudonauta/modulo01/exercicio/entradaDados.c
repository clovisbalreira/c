#include <stdio.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL, "Portuguese");
    int num;
    float med;
    printf("Digite um numero inteiro: ");
    scanf("%d", &num);
    printf("Digite um numero real: ");
    scanf("%f", &med);
    printf("Voce acabou de digitar os valores %d e %2.2f. Obrigado!", num, med);
    char r;
    char s;
    printf("\nDigite so uma letra: ");
    fflush(stdin);
    //r = getchar();
    scanf("%c", &r);
    printf("Digite outra letra: ");
    fflush(stdin);
    //s = getchar();
    scanf("%c", &s);
    printf("Voce digitou as letras  \"%c\" e \"%c\".", r, s );

   char nome[30];
   printf("\nDigite seu nome: ");
   //scanf("%s", nome);
   fflush(stdin);
   gets(nome);
   char endereco[30];
   printf("Digite seu endereco: ");
   //scanf("%s", nome);
   fflush(stdin);
   gets(endereco);
   printf("Voce digitou \"%s\" que mora em \"%s\".", nome, endereco );

}

/*
    Entrada de dados
    scanf( string formatação, variavel)
*/