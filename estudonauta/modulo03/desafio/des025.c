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
    if(idade > 18){
        int diferenca = idade - 18;
        int anoAlistamento = anoNascimento + diferenca;
        printf("Seu alistamento foi em %i. Ja se passaram %i anos.", anoAlistamento, diferenca);
    }else if(idade < 18){
        int diferenca = 18 - idade;
        int anoAlistamento = anoNascimento + diferenca;
        printf("Seu alistamento sera em %i. Ainda faltam %i anos.", anoAlistamento, diferenca);
    }else{
        printf("Voce completa %d anos exammente em %d. Va se alistar!", idade, anoAtual);
    }
}