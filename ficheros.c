//
// Created by ikery on 10/04/2021.
//

#include "ficheros.h"

void aniadirUsuario(Usuario u){
    FILE *pf;
    pf = fopen("Usuarios.dat","ab");
    if (pf!=(FILE *)NULL){
        fwrite(&u, sizeof(u),1,pf);
        fclose(pf);
    }else
        printf("Ha ocurrido un error");
}

int tamanioFichero(FILE *pf, char nomFichero[]){ //Devuelve en bytes el tamaño del fichero
    int tamanio;
    pf = fopen(nomFichero,"rb");
    if (pf!=(FILE *)NULL){
        fseek(pf,0L,SEEK_END);
        tamanio = ftell(pf);
        fclose(pf);
    }else
        return -1;
}