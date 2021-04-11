//
// Created by ikery on 11/04/2021.
//

#ifndef PROYECTO_PROG_IV_EEDD_H
#define PROYECTO_PROG_IV_EEDD_H
#include "dispositivos.h"
#include "usuario.h"
#include <stdlib.h>

void aniadirUsuario(Usuario u, Usuario *aUsuarios, int *tam);
void aniadirMovil(Movil m, Movil *aMoviles, int *tam);
void aniadirPortatil(Portatil p, Portatil *aPortatiles, int *tam);
void aniadirTelevision(Television t, Television *aTeles, int *tam);

#endif //PROYECTO_PROG_IV_EEDD_H
