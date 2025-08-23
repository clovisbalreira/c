#include <stdio.h>
#include <locale.h>

void main(){
    //setlocale(LC_ALL, "Portuguese");
    float v1, v2, r;
    char escolha;
    printf("Super Calculadora\n");
    printf("Valor 1 = ");
    fflush(stdin);
    scanf("%f", &v1);
    printf("Valor 2 = ");
    fflush(stdin);
    scanf("%f", &v2);
    printf("=======================\n");
    printf("+\tAdição\n");
    printf("-\tSubtracao\n");
    printf("*\tMultiplicacao\n");
    printf("/\tDivisao\n");
    printf("=======================\n");
    printf("Digite sua opcao => ");
    fflush(stdin);
    scanf("%c", &escolha);
    printf("-----------------------\n");
    switch (escolha){
        case '+':
            r = v1 + v2;
            printf("O resultado de %f %c %f e igual a %f\n", v1, escolha, v2, r);
            break;
        case '-':
            r = v1 - v2;
            printf("O resultado de %.2f %c %.2f e igual a %.2f\n", v1, escolha, v2, r);
            break;
        case '*':
            r = v1 * v2;
            printf("O resultado de %.2f %c %.2f e igual a %.2f\n", v1, escolha, v2, r);
            break;
        case '/':
            r = v1 / v2;
            printf("O resultado de %.2f %c %.2f e igual a %.2f\n", v1, escolha, v2, r);
            break;
        default:
            printf("Nao foi possivel fazer a operacao tente novamente\n");
            break;
    }
    printf("-----------------------\n");
    printf("Volte Sempre");
}