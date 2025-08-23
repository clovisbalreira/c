#include <stdio.h>
#include <string.h>

void main(){
    int a = 5, b = 4, c = 2;
    printf("%s", a > b || a < c && !c ? "Verdadeiro" : "Falso");
}
/*
    Comparações
    && - conjunção
    p | q | p && q
    v | v | v
    v | f | f
    f | v | f
    f | f | f
    || - Disjunção
    p | q | p && q
    v | v | v
    v | f | v
    f | v | v
    f | f | f
    !  - Negação
    p 
    v | f
    f | v

    Precedência
    !
    &&
    ||
*/