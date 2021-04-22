#ifndef PROYECTO_PROG_IV_VENTA_H
#define PROYECTO_PROG_IV_VENTA_H

#include "usuario.h"
#include "dispositivos.h"
typedef struct{
    Usuario u;
    Movil m;
}VentaMovil;

typedef struct{
    Usuario u;
    Portatil p;
}VentaPortatil;

typedef struct{
    Usuario u;
    Television t;
}VentaTelevision;

void finalizarCompraMovil(Movil *aMoviles, int opcion, Usuario u);
void finalizarCompraPortatil(Portatil *aPortatiles, int opcion, Usuario u);
void finalizarCompraTelevision(Television *aTeles, int opcion, Usuario u);

#endif //PROYECTO_PROG_IV_VENTA_H
