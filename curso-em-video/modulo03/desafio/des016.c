#include <stdio.h>
#include <locale.h>

void main(){
    //setlocale(LC_ALL, "Portuguese");
    float preco;
    printf("Qual foi o valor total das compras: R$ ");
    scanf("%f", &preco);
    printf("------------------------------\n");
    printf("Voce comprou R$ %.2f na nossa loja.\n", preco);
    if(preco >= 500){
        float desconto = preco * 10 / 100;
        float precoFinal = preco - desconto;
        printf("==============Atencao==============\n");
        printf("Por fazer mais de R$ 500 em compras, voce vai receber R$ %.2f de desconto\nO valor a ser pago e R$ %.2f \n", desconto, precoFinal);
    }
    printf("------------------------------\n");
    printf("Volte sempre!");

}