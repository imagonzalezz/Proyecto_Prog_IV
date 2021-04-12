//
// Created by ikery on 11/04/2021.
//

#ifndef PROYECTO_PROG_IV_DISPOSITIVOS_H
#define PROYECTO_PROG_IV_DISPOSITIVOS_H

#include <stdio.h>

typedef struct{
    char vendedor[20];
    char marca[10];
    char modelo[20];
    int pulgadas;
    int ram;
    int almacenamiento;
    float precio;
}Movil;

typedef struct{
    char vendedor[20];
    char marca[20];
    char modelo[20];
    char procesador[20];
    int pulgadas;
    int ram;
    int almacenamiento;
    float precio;
}Portatil;

typedef struct{
    char vendedor[20];
    char marca[20];
    char modelo[20];
    int pulgadas;
    char pantalla[20];
}Television;

void mostrarMoviles(Movil *aMoviles,int tam);
void mostrarPortatiles(Portatil *aPortatiles,int tam);

#endif //PROYECTO_PROG_IV_DISPOSITIVOS_H
