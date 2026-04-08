#include <stdio.h>
#include <locale.h>
#include <time.h>

void main(){
    //setlocale(LC_ALL, "Portuguese");
    time_t t;
    time(&t);
    struct  tm * data;
    data = localtime(&t);
    int anoAtual = data->tm_year + 1900;
    int anoNascimento, idade;
    printf("Servico militar\n");
    printf("Atualmente estamos no ano de %d\n", anoAtual);
    printf("Em que ano voce nasceu? ");
    scanf("%d", &anoNascimento);
    idade = anoAtual - anoNascimento;
    printf("Sua idade atual e %d anos.\n", idade);
    if(idade >= 18){
        int diferenca = idade - 18;
        printf("Ja faz %d anos. Espero sinceramente que voce tenha se alistado.", diferenca);
    }else{
        printf("Voce ainda nao tem 18 anos. nao pode se alistar.");
    }
}