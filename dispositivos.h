//
// Created by ikery on 11/04/2021.
//

#ifndef PROYECTO_PROG_IV_DISPOSITIVOS_H
#define PROYECTO_PROG_IV_DISPOSITIVOS_H

typedef struct{
    char vendedor[20];
    char marca[20];
    char modelo[20];
    int pulgadas;
    int ram;
    int almacenamiento;
    int bateria;
    float precio;
}Movil;

typedef struct{
    char vendedor[20];
    char marca[20];
    char modelo[20];
    int pulgadas;
    char procesador[20];
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
};


#endif //PROYECTO_PROG_IV_DISPOSITIVOS_H
