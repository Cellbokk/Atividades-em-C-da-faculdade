void lerNumeros(int vetor[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        printf("Digite o número %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }
}

void imprimirNumeros(int vetor[], int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        printf("Posição %d: %d\n", i, vetor[i]);
    }
}

void imprimirNumerosInverso(int vetor[], int tamanho) {

    for (int i = tamanho - 1; i >= 0; i--) {
        printf("Posição %d: %d\n", i, vetor[i]);
    }
}

void lerNumerosPares(int vetor[], int tamanho) {
    int i = 0;
    int numero;
    while (i < tamanho) {
        printf("Digite um número par %d: ", i + 1);
        scanf("%d", &numero);
        if (numero % 2 == 0) {
            vetor[i] = numero;
            i++;
        } else {
            printf("Digitar somente números pares!\n");
        }
    }
}