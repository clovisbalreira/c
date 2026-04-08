#include <stdio.h>
#include <locale.h>

void main(){
    //setlocale(LC_ALL, "Portuguese");
    char produto[20];
    float preco, desconto, precoFinal;
    printf("Preco do produto\n");
    printf("Produto: ");
    fflush(stdin);
    gets(produto);
    printf("Preco: R$ ");
    fflush(stdin);
    scanf("%f", &preco);
    printf("Desconto: (%%) ");
    fflush(stdin);
    scanf("%f", &desconto);
    precoFinal = preco - ( preco * desconto / 100);
    printf("O produto %s custava R$ %.2f mas com %.2f%% de desconto, passa a custar R$ %.2f.", produto, preco, desconto, precoFinal);
}