#include "menus.h"
#include "usuario.h"
#include "dispositivos.h"
#include "ficheros.h"
#include "eedd.h"
#include "venta.h"
int main() {
    int tamUsuarios,tamMoviles,tamPortatiles,tamTeles,opcion, opcionprincipal;
    Usuario u,ue;
    Usuario *aUsuarios=NULL;
    Movil *aMoviles=NULL;
    Portatil *aPortatiles=NULL;
    Television *aTeles=NULL;
    tamUsuarios = cargarUsuariosDeFichero(&aUsuarios);
    tamMoviles = cargarMovilesDeFichero(&aMoviles);
    tamPortatiles = cargarPortatilesDeFichero(&aPortatiles);
    tamTeles = cargarTelevisionesDeFichero(&aTeles);
    //Usuario us = {"iker","iker",2};
    //aniadirUsuario(us,&aUsuarios,&tamUsuarios);
    do {
        do {
            opcionprincipal = mostrarPrincipal();
        } while (opcionprincipal < 1 || opcionprincipal >3);
        switch (opcionprincipal) {
            case 1: do { //Iniciar Sesion
                        u = mostrarInicioSesion();
                        ue = buscarUsuario(u,aUsuarios,tamUsuarios);
                    } while (comprobarUsuario(u, aUsuarios, tamUsuarios) == 0);
                    if (ue.permiso == 1) { //Usuario normal
                        do {
                            opcion = mostrarMenuUsuario();
                        } while (opcion > 4 || opcion < 1);
                        if (opcion == 1) { //Moviles
                            do {
                                opcion = mostrarMoviles(aMoviles, tamMoviles);
                            } while (opcion < 1 || opcion > tamMoviles);
                            finalizarCompraMovil(aMoviles, opcion, ue);
                        } else if (opcion == 2) { //Portatiles
                            do {
                                opcion = mostrarPortatiles(aPortatiles, tamPortatiles);
                            } while (opcion < 1 || opcion > tamPortatiles);
                            finalizarCompraPortatil(aPortatiles, opcion, ue);
                        } else { //Televisiones
                            do {
                                opcion = mostrarTelevisiones(aTeles, tamTeles);
                            } while (opcion < 1 || opcion > tamTeles);
                            finalizarCompraTelevision(aTeles, opcion, ue);

                        }
                    } else if (ue.permiso == 2) { //usuario vendedor
                        do {
                            opcion = mostrarMenuVendedor();
                        } while (opcion < 1 || opcion > 3);
                        if (opcion == 1) { //Añadir movil
                            aniadirMovil(solicitarDatosMovil(ue), &aMoviles, &tamMoviles);
                        } else if (opcion == 2) { //Añadir portatil
                            aniadirPortatil(solicitarDatosPortatil(ue),&aPortatiles,&tamPortatiles);
                        }else
                            aniadirTelevision(solicitarDatosTelevision(ue),&aTeles,&tamTeles);
                    }break;
            case 2: do { //Registrar
                        u = pedirDatosUsuario();
                    } while (comprobarUsuario(u, aUsuarios, tamUsuarios)==1);
                    aniadirUsuario(u, &aUsuarios, &tamUsuarios);break;
            case 3: printf("FIN"); //Salir
        }
    }while(opcionprincipal!=3);
    guardarMovilesEnFichero(aMoviles,tamMoviles);
    guardarPortatilesEnFichero(aPortatiles,tamPortatiles);
    guardarTelevisionesEnFichero(aTeles,tamTeles);
    guardarUsuariosEnFichero(aUsuarios,tamUsuarios);
    free(aUsuarios);
    free(aMoviles);
    free(aPortatiles);
    free(aTeles);
}



