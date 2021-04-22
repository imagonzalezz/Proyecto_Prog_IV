#ifndef PROYECTO_PROG_IV_MENUS_H
#define PROYECTO_PROG_IV_MENUS_H

#include <stdio.h>
#include "dispositivos.h"
#include "ficheros.h"

int mostrarMenuUsuario();
int mostrarPrincipal();
Usuario mostrarInicioSesion();
int mostrarMenuVendedor();
Movil solicitarDatosMovil(Usuario vendedor);
Portatil solicitarDatosPortatil(Usuario vendedor);
Television solicitarDatosTelevision(Usuario vendedor);

#endif //PROYECTO_PROG_IV_MENUS_H
