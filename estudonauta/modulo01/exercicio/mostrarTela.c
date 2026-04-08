#include <stdio.h>
// arrumar acentuação
//#include <locale.h>

void main(){
    //setlocale(LC_ALL, "Portuguese")
    printf("Olá Mundo!\n");
    printf("Oi,\nTudo\nBem?\n");
    printf("Oi,\tTudo\tBem?\n");
    printf("Oi,t\bTudo\tBem?\n");
    printf("Oi, Tudo \rBem?\n");
    printf("Oi, Tudo \\Bem?\n");
    printf("Oi, Tudo \"Bem?\n");
    printf("Oi, Tudo \?Bem?\n");
    printf("Oi, Tudo \aBem?\n");
    printf("Oi, Tudo %%Bem?\n");
    printf("C é\n\"SUPER\"\nFácil!");
    
}

// \n - nova linha
// \t - tabulação
// \b - backspace
// \r - retorno
// \\ - mostrar barra
// \" - mostrar aspas
// \? - mostrar interrogação
// \a - dar um beep
// %% - mostrar %