#include <stdio.h>

int main() {
    int numeros[10];
    int i, num, indice = 0;

    printf("Digite 10 números:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &num);
        if (num % 2 == 0) { 
            numeros[indice] = num;
            indice++;
        } else {
            printf("Digite somente números pares!\n");
        }
    }

    printf("\nOs números pares digitados foram:\n");
    for (i = 0; i < indice; i++) {
        printf("%d ", numeros[i]);
    }
    printf("\n");

    return 0;
}