//
// Created by ikery on 10/04/2021.
//

#ifndef PROYECTO_PROG_IV_MENUS_H
#define PROYECTO_PROG_IV_MENUS_H

#include <stdio.h>
#include "dispositivos.h"
#include "ficheros.h"

int mostrarMenuUsuario();
int mostrarPrincipal();
Usuario mostrarInicioSesion();
int comprobarUsuario(Usuario u,Usuario *aUsuarios, int tam);

#endif //PROYECTO_PROG_IV_MENUS_H
