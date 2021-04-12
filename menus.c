//
// Created by ikery on 10/04/2021.
//
#include "menus.h"

int mostrarMenuUsuario(){
    int opcion;
    printf("Selecciona el tipo de dispositivo que quiere adquirir\n");
    printf("1. Moviles\n");
    printf("2. Portatiles\n");
    printf("3. Televisiones\n");
    fflush(stdin);
    scanf("%d",&opcion);
    return opcion;
}

int mostrarPrincipal(){
    char opcion;
    printf("Bienvenido a UDTechnologies\n");
    printf("1. Iniciar Sesion\n");
    printf("2. Registrarse\n");
    fflush(stdin);
    scanf("%c",&opcion);
}

Usuario mostrarInicioSesion(){
    Usuario u;
    printf("Introduzca su nombre de usuario");
    fflush(stdin);
    scanf("%s",&u.usuario);
    printf("Introduzca su contraseña:");
    fflush(stdin);
    scanf("%s",&u.con);
    return u;
}


