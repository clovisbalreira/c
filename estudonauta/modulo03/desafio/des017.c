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
    int nascimento;
    printf("Fila banco\n");
    printf("Em que ano voce nasceu? ");
    scanf("%d", &nascimento);
    int idade = anoAtual - nascimento;
    printf("-------------------------------\n");
    printf("Voce tem %d anos, certo?\nSeja bem vindo(a) ao banco estudonauta!\n", idade);
    if(idade >= 65){
        printf("=== Atencao! dirija-se para a fila preferencial ===\n");
    }
    printf("-------------------------------");
}