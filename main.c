#include "menus.h"
#include "usuario.h"
#include "dispositivos.h"
#include "ficheros.h"
#include <stdio.h>

int main() {
    int tamUsuarios,tamMoviles,tamPortatiles,tamTeles,opcion;
    Usuario u;
    Usuario *aUsuarios;
    Movil *aMoviles;
    Portatil *aPortatiles;
    Television *aTeles;
    tamUsuarios = cargarUsuariosDeFichero(aUsuarios);
    tamMoviles = cargarMovilesDeFichero(aMoviles);
    tamPortatiles = cargarPortatilesDeFichero(aPortatiles);
    tamTeles = cargarTelevisionesDeFichero(aTeles);
    do {
        opcion = mostrarPrincipal();
    } while (opcion!=1 && opcion!=2);
    if (opcion==1){ //Iniciar Sesion
        do {
            u = mostrarInicioSesion();
        } while (comprobarUsuario(u,aUsuarios,tamUsuarios)==0);
        if(u.permiso==1){ //Usuario normal
            do {
                opcion=mostrarMenuUsuario();
            } while (opcion>4 && opcion<1);
            if (opcion==1){ //Moviles
                do {
                    opcion = mostrarMoviles(aMoviles,tamMoviles);
                } while (opcion<1 && opcion>tamMoviles);

            }
        }
    }
}



