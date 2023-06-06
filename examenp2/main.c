#include <stdio.h>

int main() {
int opcion = 0;

printf("Bienvenido al juego del laberinto!\n");
printf("1. Jugar\n");
printf("2. Crèditos\n");
printf("3. Salir\n");

scanf("%d", &opcion);

        switch (opcion) {
            
           
case 1:
    printf("Ha seleccionado la Opción 1\n");
    // Agregar aquí el código para la Opción 1
    break;
            
case 2:
    printf("Ha seleccionado la Opción 2\n");
    break;
            
case 3:
    printf("Ha seleccionado la Opción 3\n");        
    break;
            
default:printf("Opción inválida. Por favor, seleccione una opción válida.\n");
    break;

        }

    return 0;

}