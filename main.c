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
    do {
        do {
            opcionprincipal = mostrarPrincipal();
        } while (opcionprincipal < 1 || opcionprincipal >3);
        switch (opcionprincipal) {
            case 1: do {
                        u = mostrarInicioSesion();
                        ue = buscarUsuario(u,aUsuarios,tamUsuarios);
                    } while (comprobarUsuario(u, aUsuarios, tamUsuarios) == 0);
                    printf("Se ha iniciado sesión con permiso %d\n",u.permiso);
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
                            aniadirMovil(solicitarDatosMovil(u), aMoviles, &tamMoviles);
                        } else if (opcion == 2) { //Añadir portatil

                        }
                    }break;
            case 2: do {
                        u = pedirDatosUsuario();
                    } while (comprobarUsuario(u, aUsuarios, tamUsuarios)==1);
                    aniadirUsuario(u, &aUsuarios, &tamUsuarios);break;
            case 3: printf("FIN");
        }
    }while(opcionprincipal!=3);
    guardarMovilesEnFichero(aMoviles,tamMoviles);
    guardarPortatilesEnFichero(aPortatiles,tamPortatiles);
    guardarTelevisionesEnFichero(aMoviles,tamPortatiles);
    guardarUsuariosEnFichero(aUsuarios,tamUsuarios);
    free(aUsuarios);
    free(aMoviles);
    free(aPortatiles);
}



