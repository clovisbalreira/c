#include <stdio.h>
#include <locale.h>

void main(){
    //setlocale(LC_ALL, "Portuguese");
    float peso, pesoPlaneta;
    int escolha;
    printf("Seu peso em outro planeta\n");
    printf("Seu peso em outro planeta (Kg) ");
    fflush(stdin);
    scanf("%f", &peso);
    printf("Escolha o planeta\n");
    printf("=======================\n");
    printf("1\tMercurio\n");
    printf("2\tVenus\n");
    printf("3\tMarte\n");
    printf("4\tJupiter\n");
    printf("5\tSaturno\n");
    printf("6\tUrano\n");
    printf("=======================\n");
    printf("Digite sua opcao => ");
    fflush(stdin);
    scanf("%d", &escolha);
    printf("-----------------------\n");
    switch (escolha){
        case 1:
            pesoPlaneta = peso * 0.37;
            printf("No planeta mercurio, seu peso seria %.2f Kg", pesoPlaneta);
            break;
        case 2:
            pesoPlaneta = peso * 0.88;
            printf("No planeta venus, seu peso seria %.2f Kg", pesoPlaneta);
            break;
        case 3:
            pesoPlaneta = peso * 0.38;
            printf("No planeta marte, seu peso seria %.2f Kg", pesoPlaneta);
            break;
        case 4:
            pesoPlaneta = peso * 2.64;
            printf("No planeta jupiter, seu peso seria %.2f Kg", pesoPlaneta);
            break;
        case 5:
            pesoPlaneta = peso * 1.15;
            printf("No planeta saturno, seu peso seria %.2f Kg", pesoPlaneta);
            break;
        case 6:
            pesoPlaneta = peso * 1.17;
            printf("No planeta urano, seu peso seria %.2f Kg", pesoPlaneta);
            break;
        default:
            printf("Seu peso nao pode ser calculado para outros planetas.Tente novamente.\n");
            break;
    }
    printf("\n-----------------------\n");
    printf("Volte Sempre");
}