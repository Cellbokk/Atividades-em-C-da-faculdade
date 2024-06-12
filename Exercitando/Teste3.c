#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "FunçõesDosTestes.h"

#define SIZE 10

int main() {
    int vet[SIZE];
    
    lerNumerosPares(vet, SIZE);
    
    imprimirNumeros(vet, SIZE);
    
    return 0;
}