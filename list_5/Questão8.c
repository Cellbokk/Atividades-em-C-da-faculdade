#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int ma[3][3], i, j, num, SZ;
    srand(time(0));


    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            num = rand() % 1001;
            ma[i][j] = num;
        }
    }


    printf("Tente acertar um número entre 0 e 1000 dentro da matriz: ");
    scanf("%d", &SZ);
    

    int encontrado = 0;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            if (ma[i][j] == SZ) {
                encontrado = 1;
                break;
            }
        }
        if (encontrado) {
            break;
        }
    }

    if (encontrado) {
        printf("Pessoa de Sorte!!\n");
    } else {
        printf("Tu és azarado demais!\n");
    }

    printf("Matriz 3x3:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%3d ", ma[i][j]);
        }
        printf("\n");
    }

    return 0;
}