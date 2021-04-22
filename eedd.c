#include "eedd.h"
#include "usuario.h"
#include "dispositivos.h"

void aniadirUsuario(Usuario u, Usuario **aUsuarios, int *tam){
    if(*aUsuarios==NULL)
        *aUsuarios = (Usuario *) malloc(sizeof(Usuario));
    else
        *aUsuarios = (Usuario *) realloc(*aUsuarios,(*tam+1)* sizeof(Usuario));
    (*aUsuarios)[*tam] = u;
    (*tam)++;
}

void aniadirMovil(Movil m, Movil **aMoviles, int *tam){
    if (*aMoviles==NULL)
        *aMoviles = (Movil *) malloc(sizeof(Movil));
    else
        *aMoviles = (Movil *) realloc(*aMoviles,(*tam+1)* sizeof(Movil));
    (*aMoviles)[*tam] = m;
    (*tam)++;
}

void aniadirPortatil(Portatil p, Portatil **aPortatiles, int *tam){
    if (*aPortatiles==NULL)
        *aPortatiles = (Portatil *) malloc(sizeof(Portatil));
    else
        *aPortatiles = (Portatil *) realloc(*aPortatiles,(*tam+1)* sizeof(Portatil));
    (*aPortatiles)[*tam] = p;
    (*tam)++;
}

void aniadirTelevision(Television t, Television **aTeles, int *tam){
    if (*aTeles==NULL)
        *aTeles = (Television *) malloc(sizeof(Television));
    else
        *aTeles = (Television *) realloc(*aTeles,(*tam+1)* sizeof(Television));
    (*aTeles)[*tam] = t;
    (*tam)++;
}
