#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "hashmap.h"

{

  int opcion;

  do{
    mostrarMenu();

    if(scanf("%d", &opcion) != 1) {
        printf("\nOpción no válida. Intente de nuevo.\n");
        while (getchar() != '\n'); // Limpiar el búfer de entrada
        continue; // Ignorar la opción no válida y volver a mostrar el menú
    }
    getchar();

    switch(opcion) {

      case 1:
        int subOpcionAgregar;
        int salirSubmenu = 0; // Variable de control para salir del submenú

        do {
          printf("\n");
          printf("\033[1;36m╔═══════════════════════════════════╗\033[0m\n");
          printf("\033[1;36m║\033[0m"    "\033[1;34m      Submenú Agregar Producto\033[0m"   "\033[1;36m     ║ \033[0m\n");
          printf("\033[1;36m╚═══════════════════════════════════╝\033[0m\n\n");

          printf("\033[1;36m╔═══════════════════════════════════╗\033[0m\n");
          printf("\033[0;36m║  1. Ingresar Detalle de Producto  ║\033[0m\n");
          printf("\033[1;36m╚═══════════════════════════════════╝\033[0m\n\n");

          printf("\033[1;36m╔═══════════════════════════════════╗\033[0m\n");
          printf("\033[0;36m║  2. Agregar Productos desde CSV   ║\033[0m\n");
          printf("\033[1;36m╚═══════════════════════════════════╝\033[0m\n\n");

          printf("\033[1;36m╔═══════════════════════════════════╗\033[0m\n");
          printf("\033[0;36m║  3. Volver al Menú Principal      ║\033[0m\n");
          printf("\033[1;36m╚═══════════════════════════════════╝\033[0m\n\n");

          printf("Seleccione una opción: ");

          if (scanf("%d", &subOpcionAgregar) != 1) {
                printf("\nOpción no válida. Intente de nuevo.\n");
                while (getchar() != '\n'); // Limpiar el búfer de entrada
                continue; // Ignorar la opción no válida y volver a mostrar el menú
          }
          getchar();

          switch (subOpcionAgregar) {
            case 1:
              registrarProducto();
              break;
            case 2:
              agregarProductosDesdeCSV();
              break;
            case 3:
              salirSubmenu = 1; // Actualiza la variable para salir del submenú
              break;
            default:
              printf("\nOpción no válida. Intente de nuevo.\n");
          }
        } while (!salirSubmenu); // Usa la variable de control en la condición del bucle
        break;
      }
      case 2:
        eliminarProductoPorNombre();
        break;
      case 3:
        eliminarProducto();
        break;
      case 4: {
        int subOpcionActualizar;
        do {

          printf("\n");
          printf("\033[1;36m╔═══════════════════════════════════╗\033[0m\n");
          printf("\033[1;36m║\033[0m"    "\033[1;34m     Submenú Actualizar Stock\033[0m"   "\033[1;36m      ║ \033[0m\n");
          printf("\033[1;36m╚═══════════════════════════════════╝\033[0m\n\n");

          printf("\033[1;36m╔═══════════════════════════════════╗\033[0m\n");
          printf("\033[0;36m║  1. Añadir Cantidad al Stock      ║\033[0m\n");
          printf("\033[1;36m╚═══════════════════════════════════╝\033[0m\n\n");

          printf("\033[1;36m╔═══════════════════════════════════╗\033[0m\n");
          printf("\033[0;36m║  2. Restar Cantidad al Stock      ║\033[0m\n");
          printf("\033[1;36m╚═══════════════════════════════════╝\033[0m\n\n");

          printf("\033[1;36m╔═══════════════════════════════════╗\033[0m\n");
          printf("\033[0;36m║  3. Nueva Cantidad Total          ║\033[0m\n");
          printf("\033[1;36m╚═══════════════════════════════════╝\033[0m\n\n");

          printf("\033[1;36m╔═══════════════════════════════════╗\033[0m\n");
          printf("\033[0;36m║  4. Volver al Menú principal      ║\033[0m\n");
          printf("\033[1;36m╚═══════════════════════════════════╝\033[0m\n\n");

          if (scanf("%d", &subOpcionActualizar) != 1) {
                printf("\nOpción no válida. Intente de nuevo.\n");
                while (getchar() != '\n'); // Limpiar el búfer de entrada
                continue; // Ignorar la opción no válida y volver a mostrar el menú
          }
          getchar();

          printf("Seleccione una opción: ");

          switch (subOpcionActualizar) {
            case 1:
              anadirCantidadStock();
              break;
            case 2:
              restarCantidadStock();
              break;
            case 3:
              establecerNuevaCantidadStock();
              break;
            default:
              printf("\nOpción no válida. Intente de nuevo.\n");
          }
        } while (subOpcionActualizar != 4);
        break;
      }
      

  }while (opcion != 0);

  return 0;
}