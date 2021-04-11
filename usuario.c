//
// Created by ikery on 10/04/2021.
//

#include <stdio.h>
#include "usuario.h"

Usuario pedirDatosUsuario(){
    Usuario u;
    printf("Introduzca un nombre de usuario:");
    fflush(stdin);
    scanf("%s",u.usuario);
    printf("Introduzca una contraseña:");
    fflush(stdin);
    scanf("%s",u.con);
    return u;
}

Usuario inicioSesion(){
    Usuario u;
    printf("Nombre de usuario:");
    scanf("%s",u.usuario);
    printf("Contraseña:");
    scanf("%s",u.con);
    return u;
}