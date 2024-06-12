#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "Teste.h"

#define SIZE 10

int main (){
    int vet[SIZE];

    lerNumeros(vet, SIZE);

    imprimirNumerosInverso(vet, SIZE);

    return 0;

}