#ifndef PROYECTO_PROG_IV_FICHEROS_H
#define PROYECTO_PROG_IV_FICHEROS_H

#include "usuario.h"
#include "dispositivos.h"
#include "venta.h"
int tamanioFicheroUsuarios();
int tamanioFicheroMoviles();
int tamanioFicheroPortatiles();
int tamanioFicheroTelevisiones();
int cargarUsuariosDeFichero(Usuario **aUsuarios);
int cargarMovilesDeFichero(Movil **aMoviles);
int cargarPortatilesDeFichero(Portatil **aPortatiles);
int cargarTelevisionesDeFichero(Television **aTeles);
void guardarUsuariosEnFichero(Usuario *aUsuarios,int tam);
void guardarMovilesEnFichero(Movil *aMoviles,int tam);
void guardarPortatilesEnFichero(Portatil *aPortatiles,int tam);
void guardarTelevisionesEnFichero(Television *aTeles,int tam);
void registrarVentaMovil(VentaMovil v);
void registrarVentaPortatil(VentaPortatil v);
void registrarVentaTelevision(VentaTelevision v);
#endif //PROYECTO_PROG_IV_FICHEROS_H
