#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include "FunctionCal.h"

int main (void){
    int *p, *q, x, y, op, op2;

    p = &x;
    q = &y;
    do{
        do{
        menu();
        op = escolha();
        system("clear");
        if(op < 1 || op > 4){
        printf("Error: Digite umas das opcoes!!\n");
            }
        }while(op < 1 || op > 4);

        switch (op){
        case 1: 
            printf("\nDigite o primeiro numero:");
            scanf("%d", &x);
            printf("\nDigite o segundo numero:");
            scanf("%d", &y);
            printf("\nSoma de %d + %d = %d\n", x, y, soma(p, q));
            break;
        case 2:
            printf("\nDigite o primeiro numero:");
            scanf("%d", &x);
            printf("\nDigite o segundo numero:");
            scanf("%d", &y);
            printf("\nSoma de %d - %d = %d\n", x, y, subt(p, q));
            break;
        case 3: 
            printf("\nDigite o primeiro numero:");
            scanf("%d", &x);
            printf("\nDigite o segundo numero:");
            scanf("%d", &y);
            printf("\nSoma de %d * %d = %d\n", x, y, multi(p, q));
            break;
        case 4: 
            printf("\nDigite o primeiro numero:");
            scanf("%d", &x);
            printf("\nDigite o segundo numero:");
            scanf("%d", &y);
            printf("\nSoma de %d / %d = %d\n", x, y, divi(p, q));
            break;
        }
        op2 = continuar();
        system("clear");
    }while(op2 == 1);
    system("clear");
    return 0;
}