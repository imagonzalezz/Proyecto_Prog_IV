//
// Created by ikery on 10/04/2021.
//

#ifndef PROYECTO_PROG_IV_FICHEROS_H
#define PROYECTO_PROG_IV_FICHEROS_H

#include "usuario.h"
#include "dispositivos.h"
#include <stdio.h>
#include <stdlib.h>

int tamanioFicheroUsuarios();
int tamanioFicheroMoviles();
int tamanioFicheroPortatiles();
int tamanioFicheroTelevisiones();
int cargarUsuariosDeFichero(Usuario *aUsuarios);
int cargarMovilesDeFichero(Movil *aMoviles);
int cargarPortatilesDeFichero(Portatil *aPortatiles);
int cargarTelevisionesDeFichero(Television *aTeles);

#endif //PROYECTO_PROG_IV_FICHEROS_H
