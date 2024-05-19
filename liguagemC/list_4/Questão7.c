#include <stdio.h>

int main(){
    int vetor[5];
    int pares = 0, impares = 0;
    
    printf("Preencha os 5 vetores:");
        for (int i = 0; i < 5; i++){
            scanf("%d", &vetor[i]);
        
    
    if (vetor[i] % 2 == 0) {
            pares++;
        } else {
            impares++;
        }
    }

    printf("Foram digitados %d números pares e %d números ímpares.\n", pares, impares);

    return 0;
}