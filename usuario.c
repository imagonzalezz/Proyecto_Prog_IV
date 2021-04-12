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

int comprobarUsuario(Usuario u,Usuario *aUsuarios, int tam){
    int enc = 0,i=0;
    while (enc==0 && i<tam){
        if (aUsuarios->usuario==u.usuario && aUsuarios->con==u.con)
            enc=1;
        i++;
    }
    return enc;
}