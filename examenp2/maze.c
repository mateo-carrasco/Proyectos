#include <stdio.h>  

void printMatriz(int matriz[5][5]) {
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int maze[5][5] = {
        {0, 1, 0, 0, 0},
        {0, 1, 1, 1, 0},
        {0, 0, 0, 0, 0},
        {0, 1, 0, 1, 0},
        {1, 0, 0, 1, 0},
    };

    printMatriz(maze);

    return 0;
}

#define filas 5
#define columnas 5

int maze[filas][columnas] = {
    {0, 1, 0, 0, 0},
    {0, 1, 1, 1, 0},
    {0, 0, 0, 0, 0},
    {0, 1, 0, 1, 0},
    {1, 0, 0, 1, 0},
};

int isValidMove(int fil, int col) {
    if (fil < 0 || fil >= filas || col < 0 || col >= columnas || maze[fil][col] == 1) {
        return 0;  // Movimiento inválido
    }
    return 1;  // Movimiento válido
}

int main() {
    int fil = 0;
    int col = 0;

    printf("Movimiento en (%d, %d): ", fil, col);
    if (isValidMove(fil, col)) {
        printf("Válido.\n");
    } else {
        printf("Inválido.\n");
    }

    fil = 2;
    col = 3;

    printf("Movimiento en (%d, %d): ", fil, col);
    if (isValidMove(fil, col)) {
        printf("Válido.\n");
    } else {
        printf("Inválido.\n");
    }

    fil = -1;
    col = 0;

    printf("Movimiento en (%d, %d): ", fil, col);
    if (isValidMove(fil, col)) {
        printf("Válido.\n");
    } else {
        printf("Inválido.\n");
    }

    fil = 4;
    col = 4;

    printf("Movimiento en (%d, %d): ", fil, col);
    if (isValidMove(fil, col)) {
        printf("Válido.\n");
    } else {
        printf("Inválido.\n");
    }

    return 0;
}
