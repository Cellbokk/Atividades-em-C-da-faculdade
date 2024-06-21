#include <stdio.h>
#include <stdlib.h>
#include "FunçãoFacu.h"

int main() {
    int num, primo;

    // Chama a função para obter o número
    numero(&num);

    // Verifica se o número é primo
    primo = eh_primo(num);

    // Exibe o resultado
    if (primo) {
        printf("%d é um número primo.\n", num);
    } else {
        printf("%d não é um número primo.\n", num);
    }

    return 0;
}