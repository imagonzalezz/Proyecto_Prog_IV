//
// Created by ikery on 10/04/2021.
//

#include <stdio.h>
#include <string.h>
#include "usuario.h"

Usuario pedirDatosUsuario(){
    Usuario u;
    printf("Introduzca un nombre de usuario:");
    fflush(stdin);
    scanf("%s",u.usuario);
    printf("Introduzca una contraseña:");
    fflush(stdin);
    scanf("%s",u.con);
    printf("Pulse 1 si desea que la cuenta sea de usuario normal\n");
    printf("Pulse 2 si desea que la cuenta sea de usuario vendedor\n");
    fflush(stdin);
    scanf("%d",&u.permiso);
    return u;
}

int comprobarUsuario(Usuario u,Usuario *aUsuarios, int tam){
    int enc = 0,i=0;
    while (enc==0 && i<tam){
        if (strcmp(aUsuarios[i].usuario,u.usuario)==0 && strcmp(aUsuarios[i].con,u.con)==0)
            enc=1;
        else
            i++;
    }
    return enc;
}
Usuario buscarUsuario(Usuario u,Usuario *aUsuarios, int tam){
    int enc = 0,i=0;
    while (enc==0 && i<tam){
        if (strcmp(aUsuarios[i].usuario,u.usuario)==0 && strcmp(aUsuarios[i].con,u.con)==0)
            enc=1;
        else
            i++;
    }
    return aUsuarios[i];
}