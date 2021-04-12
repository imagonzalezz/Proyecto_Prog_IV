//
// Created by ikery on 11/04/2021.
//

#ifndef PROYECTO_PROG_IV_DISPOSITIVOS_H
#define PROYECTO_PROG_IV_DISPOSITIVOS_H

#include <stdio.h>
#include "usuario.h"
#include "venta.h"
#include "ficheros.h"

typedef struct{
    Usuario vendedor;
    char marca[10];
    char modelo[20];
    int pulgadas;
    int ram;
    int almacenamiento;
    float precio;
}Movil;

typedef struct{
    Usuario vendedor;
    char marca[20];
    char modelo[20];
    char procesador[20];
    int pulgadas;
    int ram;
    int almacenamiento;
    float precio;
}Portatil;

typedef struct{
    Usuario vendedor;
    char marca[20];
    char modelo[20];
    int pulgadas;
    float precio;
}Television;

int mostrarMoviles(Movil *aMoviles,int tam);
int mostrarPortatiles(Portatil *aPortatiles,int tam);
int mostrarTelevisiones(Television *aTeles, int tam);

#endif //PROYECTO_PROG_IV_DISPOSITIVOS_H
