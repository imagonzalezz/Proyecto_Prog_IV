#include "menus.h"
#include "usuario.h"
#include "dispositivos.h"
#include "ficheros.h"
#include "eedd.h"
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
                finalizarCompraMovil(aMoviles,opcion,u);
                main();
            }
            else if (opcion == 2){ //Portatiles
                do {
                    opcion = mostrarPortatiles(aPortatiles,tamPortatiles);
                } while (opcion<1 && opcion>tamPortatiles);
                finalizarCompraPortatil(aPortatiles,opcion,u);
                main();
            }
            else{ //Televisiones
                do {
                    opcion = mostrarTelevisiones(aTeles,tamTeles);
                } while (opcion<1 && opcion>tamTeles);
                finalizarCompraTelevision(aTeles,opcion,u);
                free(aUsuarios);
                free(aMoviles);
                free(aPortatiles);
                main();
            }
        }else if (u.permiso==2){ //usuario vendedor
            do {
                opcion = mostrarMenuVendedor();
            } while (opcion<1 && opcion>3);
            if (opcion==1){ //Añadir movil
                aniadirMovil(solicitarDatosMovil(u),aMoviles,tamMoviles);
                guardarMovilesEnFichero(aMoviles,tamMoviles);
            } else if (opcion==2){ //Añadir portatil

            }
        }
    }
    else{ //Registrar
        do {
            u = pedirDatosUsuario();
        } while (comprobarUsuario(u,aUsuarios,tamUsuarios));
        aniadirUsuario(u,aUsuarios,tamUsuarios);
        guardarUsuariosEnFichero(aUsuarios,tamUsuarios);
        main();
    }
}



