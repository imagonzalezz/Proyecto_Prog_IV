#include "venta.h"
#include <stdio.h>
void finalizarCompraMovil(Movil *aMoviles, int opcion, Usuario u){
    Movil m = aMoviles[opcion-1];
    VentaMovil v;
    v.u=u;
    v.m=m;
    registrarVentaMovil(v);
    printf("Ha finalizado su compra del movil %s %s por %f €",m.marca,m.modelo,m.precio);
}

void finalizarCompraPortatil(Portatil *aPortatiles, int opcion, Usuario u){
    Portatil p = aPortatiles[opcion-1];
    VentaPortatil v;
    v.u=u;
    v.p=p;
    registrarVentaPortatil(v);
    printf("Ha finalizado su compra del portatil %s %s por %f €",p.marca,p.modelo,p.precio);
}

void finalizarCompraTelevision(Television *aTeles, int opcion, Usuario u){
    Television t = aTeles[opcion-1];
    VentaTelevision v;
    v.u=u;
    v.t=t;
    registrarVentaTelevision(v);
    printf("Ha finalizado su compra de la television %s %s por %f €",t.marca,t.modelo,t.precio);
}