#ifndef PROYECTO_PROG_IV_USUARIO_H
#define PROYECTO_PROG_IV_USUARIO_H

typedef struct{
    char usuario[20];
    char con[20];
    int permiso; //1 usuario normal, 2 vendedor
}Usuario;

Usuario pedirDatosUsuario();
int comprobarUsuario(Usuario u,Usuario *aUsuarios, int tam);
Usuario buscarUsuario(Usuario u,Usuario *aUsuarios, int tam);
#endif //PROYECTO_PROG_IV_USUARIO_H
