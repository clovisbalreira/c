#include <stdio.h>
#include <locale.h>
#include <time.h>

void main(){
    //setlocale(LC_ALL, "Portuguese");
    time_t t;
    time(&t);
    struct  tm * data;
    data = localtime(&t);
    int dia = data->tm_mday;
    int mes = data->tm_mon + 1;
    int ano = data->tm_year + 1900;
    printf("%d/%d/%d", dia, mes, ano);    
}

/*
    Datas Horas
    tm_mday = dia do mes
    tm_mon = mes + 1
    tm_year = ano + 1900
    tm_wday = dia da semanha
    tm_yday = dia do ano
    tm_hour = hora atual
    tm_min = minuto atual
    tm_sec = segundo atual
*/