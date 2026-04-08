#include <stdio.h>

void main(){
    char *nome = "Ana";
    char sexo[] = "F";
    unsigned int idade = 33;
    float peso = 85.9;
    printf("%s do sexo %s, tem %d anos e pesa %.2f Kg", nome, sexo, idade, peso);
}