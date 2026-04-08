#include <stdio.h>
#include <locale.h>

void main(){
    //setlocale(LC_ALL, "Portuguese");
    int n1, n2;
    printf("-----Operacoes bitwise-----\n");
    printf("Digite o primeiro valor: ");
    scanf("%d", &n1);
    printf("Digite o segundo valor: ");
    scanf("%d", &n2);
    int conjuncao = n1 & n2;
    printf("Calculando %d & %d e igual a %d\n", n1, n2, conjuncao);
    int disjuncao = n1 | n2;
    printf("Calculando %d | %d e igual a %d\n", n1, n2, disjuncao);
    int exclusiva = n1 ^ n2;
    printf("Calculando %d ^ %d e igual a %d\n", n1, n2, exclusiva);
}

