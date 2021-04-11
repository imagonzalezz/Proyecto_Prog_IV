//
// Created by ikery on 10/04/2021.
//

#ifndef PROYECTO_PROG_IV_USUARIO_H
#define PROYECTO_PROG_IV_USUARIO_H

typedef struct{
    char usuario[20];
    char con[20];
    int permiso; //1 usuario normal, 2 vendedor, 3 administrador del sistema
}Usuario;

Usuario pedirDatosUsuario();
Usuario inicioSesion();

#endif //PROYECTO_PROG_IV_USUARIO_H
