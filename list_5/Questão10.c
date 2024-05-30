#include <stdio.h>

int main() {
    const int linhas = 3;
    const int colunas = 4;
    int poltronas[3][4] = {0};
    int totalVendas = 0;
    int opcao;
    int linha, coluna;

    do {
        printf("\nMenu:\n");
        printf("1. Vender passagem\n");
        printf("2. Visualizar poltronas\n");
        printf("3. Ver total de vendas\n");
        printf("4. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Digite a linha (0 a %d): ", linhas - 1);
                scanf("%d", &linha);
                printf("Digite a coluna (0 a %d): ", colunas - 1);
                scanf("%d", &coluna);

                if (linha >= 0 && linha < linhas && coluna >= 0 && coluna < colunas) {
                    if (poltronas[linha][coluna] == 0) {
                        poltronas[linha][coluna] = 1;
                        if (coluna == 0 || coluna == colunas - 1) {
                            totalVendas += 20; 
                        } else {
                            totalVendas += 10; 
                        }
                        printf("Passagem vendida com sucesso!\n");
                    } else {
                        printf("Poltrona já vendida!\n");
                    }
                } else {
                    printf("Posição inválida!\n");
                }
                break;

            case 2:
                printf("Mapa de poltronas:\n");
                for (int i = 0; i < linhas; i++) {
                    for (int j = 0; j < colunas; j++) {
                        printf("%d ", poltronas[i][j]);
                    }
                    printf("\n");
                }
                break;

            case 3:
                printf("Total de vendas: R$ %d\n", totalVendas);
                break;

            case 4:
                printf("Saindo...\n");
                break;

            default:
                printf("Opção inválida!\n");
        }
    } while (opcao != 4);

    return 0;
}
