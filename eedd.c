//
// Created by ikery on 11/04/2021.
//

#include "eedd.h"

void aniadirUsuario(Usuario u, Usuario *aUsuarios, int *tam){
    aUsuarios = (Usuario *) realloc(aUsuarios,(*tam+1)* sizeof(Usuario));
    aUsuarios[*tam] = u;
    (*tam)++;
}

void aniadirMovil(Movil m, Movil *aMoviles, int *tam){
    aMoviles = (Movil *) realloc(aMoviles,(*tam+1)* sizeof(Movil));
    aMoviles[*tam] = m;
    (*tam)++;
}

void aniadirPortatil(Portatil p, Portatil *aPortatiles, int *tam){
    aPortatiles = (Portatil *) realloc(aPortatiles,(*tam+1)* sizeof(Portatil));
    aPortatiles[*tam] = p;
    (*tam)++;
}

void aniadirTelevision(Television t, Television *aTeles, int *tam){
    aTeles = (Television *) realloc(aTeles,(*tam+1)* sizeof(Television));
    aTeles[*tam] = t;
    (*tam)++;
}
