#include <stdio.h>
#include <locale.h>

void main(){
    //setlocale(LC_ALL, "Portuguese");
    float preco, taxa, precoFinal;
    int escolha;
    printf("Preco por epoca\n");
    printf("Digite o preco de um produto ");
    fflush(stdin);
    scanf("%f", &preco);
    printf("Escolha o periodo\n");
    printf("=======================\n");
    printf("1\tCarnaval [+10]\n");
    printf("2\tFerias escolares [+20]\n");
    printf("3\tDia das criancas [+5]\n");
    printf("4\tBlack friday [-30]\n");
    printf("5\tNatal [-5]\n");
    printf("=======================\n");
    printf("Digite sua opcao => ");
    fflush(stdin);
    scanf("%d", &escolha);
    printf("-----------------------\n");
    switch (escolha){
        case 1:
            taxa = preco * 10 / 100;
            precoFinal = preco + taxa;
            printf("Na epoca do carnaval, o preco do produto vai para R$ %f", precoFinal);
            break;
        case 2:
            taxa = preco * 20 / 100;
            precoFinal = preco + taxa;
            printf("Na epoca de ferias escolares, o preco do produto vai para R$ %f", precoFinal);
            break;
        case 3:
            taxa = preco * 5 / 100;
            precoFinal = preco + taxa;
            printf("Na epoca de dia das criancas, o preco do produto vai para R$ %f", precoFinal);
            break;
        case 4:
            taxa = preco * 30 / 100;
            precoFinal = preco - taxa;
            printf("Na epoca da black friday, o preco do produto vai para R$ %f", precoFinal);
            break;
        case 5:
            taxa = preco * 5 / 100;
            precoFinal = preco - taxa;
            printf("Na epoca do natal, o preco do produto vai para R$ %f", precoFinal);
            break;
        default:
            printf("Em epocas assim, mantenha o preco do produto em R$ %.2f.", preco);
            break;
    }
    printf("\n-----------------------\n");
    printf("Volte Sempre");
}