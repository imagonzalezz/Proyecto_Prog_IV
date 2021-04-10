//
// Created by ikery on 10/04/2021.
//
#include <stdio.h>
#include "menus.h"

void submenu(char opcion){

    printf("Mostrar todos\n");
    printf("Filtrar por SO\n");
    printf("Filtrar por pulgadas\n");
    printf("Filtrar por RAM\n");

    switch (opcion) {
        case '1':printf("Opcion extra smartphone 1\n");
            printf("Opcion extra smartphone 2\n");
            break;
        case '2':printf("Opcion extra tablet 1\n");
            printf("Opcion extra tablet 2\n");
            break;
        case '3':printf("Opcion extra portatil 1\n");
            printf("Opcion extra portatil 2\n");
            break;
    }

}

void mostrarMenu(){
    char opcion;

    printf("Bienvenido a UDTechnologies\n");
    printf("1.- Smartphones\n");
    printf("2.- Tablets\n");
    printf("3.- Ordenadores Portatiles\n");
    fflush(stdin);
    scanf("%c",&opcion);

    switch (opcion) {

        case '1':submenu(opcion);break;
        case '2':submenu(opcion);break;
        case '3':submenu(opcion);break;
        default:printf("No ha seleccionado un numero correcto\n");menu();

    }

}

