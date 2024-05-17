#include <stdio.h>

int main (){
  int numero[10], i;

    for ( i = 0; i < 10; i++){
        printf("\nDigite os 10 numeros:");
        scanf("%d", &numero[i]);   
    }
    for ( i = 0; i < 10; i++){
        printf("\nA posição do numero %d e %d°",numero[i], i + 1);        
    }
    
}