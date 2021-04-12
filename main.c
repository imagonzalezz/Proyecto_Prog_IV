#include "menus.h"
#include "usuario.h"
#include "dispositivos.h"
#include "ficheros.h"
#include "eedd.h"
#include "venta.h"
int main() {
    int tamUsuarios, tamMoviles, tamPortatiles, tamTeles, opcion, opcionprincipal;
    Usuario u, ue;
    Usuario *aUsuarios = NULL;
    Movil *aMoviles = NULL;
    Portatil *aPortatiles = NULL;
    Television *aTeles = NULL;
    tamUsuarios = cargarUsuariosDeFichero(&aUsuarios);
    tamMoviles = cargarMovilesDeFichero(&aMoviles);
    tamPortatiles = cargarPortatilesDeFichero(&aPortatiles);
    tamTeles = cargarTelevisionesDeFichero(&aTeles);
    do {
        do {
            opcionprincipal = mostrarPrincipal();
        } while (opcionprincipal < 1 || opcionprincipal > 3);
        switch (opcionprincipal) {
            case 1: do { //Iniciar Sesion
                    u = mostrarInicioSesion();
                    ue = buscarUsuario(u, aUsuarios, tamUsuarios);
                } while (comprobarUsuario(u, aUsuarios, tamUsuarios) == 0);
                if (ue.permiso == 1) { //Usuario normal
                    do {

                        do {
                            opcion = mostrarMenuUsuario();
                        } while (opcion > 4 || opcion < 1);
                        switch (opcion) {
                            case 1: if (tamMoviles > 0) {
                                    do {
                                        opcion = mostrarMoviles(aMoviles, tamMoviles);
                                    } while (opcion < 1 || opcion > tamMoviles);
                                    finalizarCompraMovil(aMoviles, opcion, ue);
                                } else printf("Lo sentimos, aún no disponemos de móviles.\n");
                                break;
                            case 2: if (tamPortatiles > 0) {
                                    do {
                                        opcion = mostrarPortatiles(aPortatiles, tamPortatiles);
                                    } while (opcion < 1 || opcion > tamPortatiles);
                                    finalizarCompraPortatil(aPortatiles, opcion, ue);
                                } else printf("Lo sentimos, aún no disponemos de portátiles.\n");
                                break;
                            case 3: if(tamTeles>0){
                                    do {
                                        opcion = mostrarTelevisiones(aTeles, tamTeles);
                                    } while (opcion < 1 || opcion > tamTeles);
                                    finalizarCompraTelevision(aTeles, opcion, ue);
                                }else printf("Lo sentimos, aún no disponemos de televisiones.\n");
                                break;
                            case 4: printf("Volviendo al menú principal\n");
                                break;
                            default: printf("ERROR! La opción no es correcta\n");
                        }

                    } while (opcion != 4);
                } else if (ue.permiso == 2) { //usuario vendedor
                    do {
                        do {
                            opcion = mostrarMenuVendedor();
                        } while (opcion < 1 || opcion > 4);
                        switch (opcion) {
                            case 1: aniadirMovil(solicitarDatosMovil(ue), &aMoviles, &tamMoviles);
                                break;
                            case 2: aniadirPortatil(solicitarDatosPortatil(ue), &aPortatiles, &tamPortatiles);
                                break;
                            case 3: aniadirTelevision(solicitarDatosTelevision(ue), &aTeles, &tamTeles);
                                break;
                            case 4: printf("Volviendo al menú principal\n");
                                break;
                            default: printf("ERROR! La opción no es correcta\n");
                        }
                    } while (opcion != 4);
                }
                break;
            case 2: do { //Registrar
                    u = pedirDatosUsuario();
                } while (comprobarUsuario(u, aUsuarios, tamUsuarios) == 1);
                aniadirUsuario(u, &aUsuarios, &tamUsuarios);
                break;
            case 3: printf("FIN DEL PROGRAMA\n"); //Salir
                break;
            default: printf("ERROR! La opción no es correcta\n");
        }
    } while (opcionprincipal != 3);
    guardarMovilesEnFichero(aMoviles, tamMoviles);
    guardarPortatilesEnFichero(aPortatiles, tamPortatiles);
    guardarTelevisionesEnFichero(aTeles, tamTeles);
    guardarUsuariosEnFichero(aUsuarios, tamUsuarios);
    free(aUsuarios);
    free(aMoviles);
    free(aPortatiles);
    free(aTeles);
    return 0;
}



