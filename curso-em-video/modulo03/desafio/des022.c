#include <stdio.h>
#include <locale.h>
#include <time.h>

void main(){
    //setlocale(LC_ALL, "Portuguese");
    time_t t;
    time(&t);
    struct  tm * data;
    data = localtime(&t);
    int hora = data->tm_hour;
    float dinheiro;
    int inicio = 19;
    float preco = 20;
    printf("================Cinema estudonauta=================\n");
    printf("Horario do filme: %dh - preco do ingresso: R$ %.2f\n", inicio, preco);
    printf("---------------------------------------------------\n");
    printf("Hora Atual  %dh\n", hora);
    printf("Quanto dinheiro tem? R$ ");
    scanf("%f", &dinheiro);
    if(hora < inicio && dinheiro >= preco){
        printf("Voce conseque comprar o ingresso. seja bem-vindo(a)!!");
    }else{
        printf("Agora sao %d horas.\nVoce nao consegue comprar ingresso! Volte outro dia", hora);
    }
}