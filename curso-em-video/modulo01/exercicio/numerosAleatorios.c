#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main(){
    srand(time(NULL));
    int n = rand() % 10; // gera entre 1 a 9
    printf("Eu gerei o numero (%d)", n);
}