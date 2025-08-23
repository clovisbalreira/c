#include <stdio.h>
#include <locale.h>
#include <string.h>

void main(){
    //setlocale(LC_ALL, "Portuguese");
    char estado[2];
    printf("Qual e seu estado?\n");
    printf("Em que estado do brasil voce nasceu? ");
    scanf("%s", estado);
    if(strcmp(estado, "AC") == 0 || strcmp(estado, "ac") == 0){
        printf("Nascendo em %s voce e Acriano", estado);
    }else if(strcmp(estado, "AL") == 0 || strcmp(estado, "al") == 0){
        printf("Nascendo em %s voce e Alagoano", estado);
    }else if(strcmp(estado, "AP") == 0 || strcmp(estado, "ap") == 0){
        printf("Nascendo em %s voce e Amapaense", estado);
    }else if(strcmp(estado, "AM") == 0 || strcmp(estado, "am") == 0){
        printf("Nascendo em %s voce e Amazonense", estado);
    }else if(strcmp(estado, "BA") == 0 || strcmp(estado, "ba") == 0){
        printf("Nascendo em %s voce e Baiano", estado);
    }else if(strcmp(estado, "CE") == 0 || strcmp(estado, "ce") == 0){
        printf("Nascendo em %s voce e Cearense", estado);
    }else if(strcmp(estado, "DF") == 0 || strcmp(estado, "df") == 0){
        printf("Nascendo em %s voce e Brasiliense", estado);
    }else if(strcmp(estado, "ES") == 0 || strcmp(estado, "es") == 0){
        printf("Nascendo em %s voce e Capixaba", estado);
    }else if(strcmp(estado, "GO") == 0 || strcmp(estado, "go") == 0){
        printf("Nascendo em %s voce e Goiano", estado);
    }else if(strcmp(estado, "MA") == 0 || strcmp(estado, "ma") == 0){
        printf("Nascendo em %s voce e Maranhense", estado);
    }else if(strcmp(estado, "MT") == 0 || strcmp(estado, "mt") == 0){
        printf("Nascendo em %s voce e Mato-grossense", estado);
    }else if(strcmp(estado, "MS") == 0 || strcmp(estado, "ms") == 0){
        printf("Nascendo em %s voce e Sul-mato-grossense", estado);
    }else if(strcmp(estado, "MG") == 0 || strcmp(estado, "mg") == 0){
        printf("Nascendo em %s voce e Mineiro", estado);
    }else if(strcmp(estado, "PA") == 0 || strcmp(estado, "pa") == 0){
        printf("Nascendo em %s voce e Paraense", estado);
    }else if(strcmp(estado, "PB") == 0 || strcmp(estado, "pb") == 0){
        printf("Nascendo em %s voce e Paraibano", estado);
    }else if(strcmp(estado, "PR") == 0 || strcmp(estado, "pr") == 0){
        printf("Nascendo em %s voce e Paranaense", estado);
    }else if(strcmp(estado, "PE") == 0 || strcmp(estado, "pe") == 0){
        printf("Nascendo em %s voce e Pernambucano", estado);
    }else if(strcmp(estado, "PI") == 0 || strcmp(estado, "pi") == 0){
        printf("Nascendo em %s voce e Piauiense", estado);
    }else if(strcmp(estado, "RJ") == 0 || strcmp(estado, "rj") == 0){
        printf("Nascendo em %s voce e Carioca", estado);
    }else if(strcmp(estado, "RN") == 0 || strcmp(estado, "rn") == 0){
        printf("Nascendo em %s voce e Potiguar", estado);
    }else if(strcmp(estado, "RS") == 0 || strcmp(estado, "rs") == 0){
        printf("Nascendo em %s voce e Gaucho", estado);
    }else if(strcmp(estado, "RO") == 0 || strcmp(estado, "ro") == 0){
        printf("Nascendo em %s voce e Roraimense", estado);
    }else if(strcmp(estado, "RR") == 0 || strcmp(estado, "rr") == 0){
        printf("Nascendo em %s voce e Rondoniense", estado);
    }else if(strcmp(estado, "SC") == 0 || strcmp(estado, "sc") == 0){
        printf("Nascendo em %s voce e Catarinense", estado);
    }else if(strcmp(estado, "SP") == 0 || strcmp(estado, "sp") == 0){
        printf("Nascendo em %s voce e Paulista", estado);
    }else if(strcmp(estado, "SE") == 0 || strcmp(estado, "se") == 0){
        printf("Nascendo em %s voce e Sergipano", estado);
    }else if(strcmp(estado, "TO") == 0 || strcmp(estado, "to") == 0){
        printf("Nascendo em %s voce e Tocantinense", estado);
    }else{
        printf("Nascendo em %s voce e natural da sua cidade, mas ainda nao sei com te chamer!", estado);
    }
}