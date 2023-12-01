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

        do{
         
        }while(!salirSubmenu);

    }


  }while (opcion != 0);

  return 0;
}