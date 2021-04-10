//
// Created by ikery on 10/04/2021.
//

#include <stdio.h>
#include "usuario.h"

typedef struct{
    char usuario[20];
    char con[20];
    int permiso; //1 usuario normal, 2 vendedor, 3 administrador del sistema
}Usuario;

void registrar(){
    Usuario u;
    printf("Introduzca un nombre de usuario:");
    fflush(stdin);
    scanf("%s",u.usuario);
    printf("Introduzca una contraseña:");
    fflush(stdin);
    scanf("%s",u.con);
}

void inicioSesion(){
    char usuario[20];
    char con[20];
    printf("Nombre de usuario:");
    scanf("%s",usuario);
    printf("Contraseña:");
    scanf("%s",con);
}