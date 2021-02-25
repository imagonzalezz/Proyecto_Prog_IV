#include <stdio.h>
#include "funciones.h"

int main() {
    printf("Proyecto Prog IV\n");
    menu();
}

void menu(){
    char opcion;
    printf("Bienvenido a UDTechnologies\n");
    printf("1.- Smartphones\n");
    printf("2.- Tablets\n");
    printf("3.- Ordenadores Portatiles\n");
    fflush(stdin);
    scanf("%c",&opcion);
    switch (opcion) {
        case '1':menuSmartphones();break;
        case '2':menuTablets();break;
        case '3':menuPortatiles();break;
        default:printf("No ha seleccionado un numero correcto\n");menu();
    }
}

void menuPortatiles(){
    char opcion;
    printf("1.- Mostrar todos los portatiles\n");
    printf("2.- Filtrar por SO\n");
    printf("3.- Filtrar por pulgadas\n");
    printf("4.- Filtrar por memoria RAM\n");
    printf("5.- Volver\n");
    fflush(stdin);
    scanf("%c",&opcion);
    switch (opcion) {
        case '1'://TODO
        case '2':subMenuPortatilesSO();break;
      // case '3':submenuPortatilesPulgadas();break;
        case '4':submenuRam();break;
        case '5':menu();break;
        default:printf("No ha seleccionado un numero correcto");menuPortatiles();
    }
}

void subMenuPortatilesSO(){
    //TODO
}





void menuTablets(){
    printf("");
}

void menuSmartphones(){
    printf("");
}
void submenuRam(){
    //TODO
}

