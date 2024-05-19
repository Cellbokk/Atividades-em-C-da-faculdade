#include <stdio.h>

int main() {
    int vetor[5];
    int numero, i;
    int encontrado = 0; 

   
    printf("Digite os 5 números do vetor:\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", &vetor[i]);
    }

    
    printf("Digite um número para verificar se existe no vetor: ");
    scanf("%d", &numero);

    
    for (i = 0; i < 5; i++) {
        if (vetor[i] == numero) {
            printf("O número %d existe no vetor na posição %d.\n", numero, i);
            encontrado = 1; 
            break; 
        }
    }

    
    if (!encontrado) {
        printf("O número %d não existe no vetor.\n", numero);
    }

    return 0;
}
