#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (){
    int i, j, Ma[4][4], num;
    int maior = 0; 
    int menor = 200;

    srand(time(0));

    printf("Matriz de numeros aleatorios:\n");
    for ( i = 0; i < 4; i++){
        for ( j = 0; j < 4; j++){
            num = rand() % 201;
            Ma[i][j] = num;

            printf("%d ", num);

            if(num > maior){
                maior = num;
            }
            if(num < menor){
                menor = num;
            }
        }
        printf("\n");
    }
    printf("\nMaior numero dos aleatorios: %d", maior);
    printf("\nMenor numero dos aleatorios: %d", menor);

}