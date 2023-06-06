#include <stdio.h>

#define filas 5
#define columnas 5

int maze[filas][columnas] = {
    {0, 1, 0, 0, 0},
    {0, 1, 1, 1, 0},
    {0, 0, 0, 0, 0},
    {0, 1, 0, 1, 0},
    {1, 0, 0, 1, 0},
};

int playerRow = 0;
int playerCol = 0;

void printMaze() {
    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            if (i == playerRow && j == playerCol) {
                printf("P ");
            } else {
                printf("%d ", maze[i][j]);
            }
        }
        printf("\n");
    }
}

int isValidMove(int row, int col) {
    if (row < 0 || row >= filas || col < 0 || col >= columnas || maze[row][col] == 1) {
        return 0;  // Movimiento inválido
    }
    return 1;  // Movimiento válido
}

void movePlayer(int newRow, int newCol) {
    if (isValidMove(newRow, newCol)) {
        playerRow = newRow;
        playerCol = newCol;
        printf("Movimiento válido.\n");
    } else {
        printf("Movimiento inválido.\n");
    }
}

int main() {
    printMaze();

    printf("\nMovimiento inicial del jugador:\n");

    movePlayer(0, 1);  // Movimiento a la derecha
    printMaze();

    movePlayer(1, 1);  // Movimiento hacia abajo
    printMaze();

    movePlayer(2, 1);  // Movimiento hacia abajo
    printMaze();

    movePlayer(2, 0);  // Movimiento a la izquierda
    printMaze();

    movePlayer(3, 0);  // Movimiento hacia abajo
    printMaze();

    movePlayer(4, 0);  // Movimiento hacia abajo (última posición)
    printMaze();

    return 0;
}
