//Criar um programa que receba 10 números em um vetor. Caso o número digitadoseja PAR, guarde no vetor. Se ÍMPAR, imprima a mensagem para o usuário: “Digitar somente números pares!”. Imprima-os ao final.
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