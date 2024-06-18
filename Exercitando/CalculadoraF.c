#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "FunctionCal.h"

int main (void){
    int *p, *q, x, y, op;

    p = &x;
    q = &y;

    menu();
    op = escolha();
    system("clear");

    switch (op){
    case 1: 
        printf("\nDigite o primeiro numero:");
        scanf("%d", &x);
        printf("\nDigite o segundo numero:");
        scanf("%d", &y);
        printf("\nSoma de %d + %d = %d", x, y, soma(p, q));
        break;
    case 2:
        printf("\nDigite o primeiro numero:");
        scanf("%d", &x);
        printf("\nDigite o segundo numero:");
        scanf("%d", &y);
        printf("\nSoma de %d - %d = %d", x, y, subt(p, q));
        break;
    case 3: 
        printf("\nDigite o primeiro numero:");
        scanf("%d", &x);
        printf("\nDigite o segundo numero:");
        scanf("%d", &y);
        printf("\nSoma de %d * %d = %d", x, y, multi(p, q));
        break;
    case 4: 
        printf("\nDigite o primeiro numero:");
        scanf("%d", &x);
        printf("\nDigite o segundo numero:");
        scanf("%d", &y);
        printf("\nSoma de %d / %d = %d", x, y, divi(p, q));
        break;
    }
    return 0;
}