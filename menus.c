//
// Created by ikery on 10/04/2021.
//
#include <stdio.h>
#include "menus.h"

char mostrarMenu(){
    char opcion;
    printf("Selecciona el tipo de dispositivo\n");
    printf("1. Smartphones\n");
    printf("2. Tablets\n");
    printf("3. Portatiles\n");
    fflush(stdin);
    scanf("%c",&opcion);
}

void principal(){
    char opcion;
    printf("Bienvenido a UDTechnologies\n");
    printf("1. Iniciar Sesion\n");
    printf("2. Registrarse\n");
    fflush(stdin);
    scanf("%c",&opcion);
    if (opcion==1){

    }
}


