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

void aniadirMovil(Movil m, Movil *aMoviles, int *tam){

}

int tamanioFicheroUsuarios(){ //Devuelve el numero de usuarios en el fichero
    FILE *pf;
    int tamanio;
    pf = fopen("Usuarios.dat","rb");
    if (pf!=(FILE *)NULL){
        fseek(pf,0L,SEEK_END);
        tamanio = ftell(pf);
        fclose(pf);
        return tamanio/ sizeof(Usuario);
    }else
        return -1;
}

int tamanioFicheroMoviles(){ //Devuelve el numero de moviles en el fichero
    FILE *pf;
    int tamanio;
    pf = fopen("Moviles.dat","rb");
    if (pf!=(FILE *)NULL){
        fseek(pf,0L,SEEK_END);
        tamanio = ftell(pf);
        fclose(pf);
        return tamanio/ sizeof(Movil);
    }else
        return -1;
}

int tamanioFicheroPortatiles(){ //Devuelve el numero de portatiles en el fichero
    FILE *pf;
    int tamanio;
    pf = fopen("Portatiles.dat","rb");
    if (pf!=(FILE *)NULL){
        fseek(pf,0L,SEEK_END);
        tamanio = ftell(pf);
        fclose(pf);
        return tamanio/ sizeof(Portatil);
    }else
        return -1;
}

int tamanioFicheroTelevisiones(){ //Devuelve el numero de televisiones en el fichero
    FILE *pf;
    int tamanio;
    pf = fopen("Televisiones.dat","rb");
    if (pf!=(FILE *)NULL){
        fseek(pf,0L,SEEK_END);
        tamanio = ftell(pf);
        fclose(pf);
        return tamanio/ sizeof(Television);
    }else
        return -1;
}

int cargarUsuariosDeFichero(Usuario *aUsuarios){
    FILE *pf;
    Usuario u;
    int i = 0;
    pf = fopen("Usuarios.dat","rb");
    int tam = tamanioFicheroUsuarios();
    aUsuarios = (Usuario *) malloc(tam * sizeof(Usuario));
    if (pf!=(FILE *)NULL){
        while (fread(&u, sizeof(u),1,pf)!=0){
            aUsuarios[i] = u;
            i++;
        }
    }else
        printf("Ha ocurrido un error al cargar los usuarios");
    return tam;
}

int cargarMovilesDeFichero(Movil *aMoviles){
    FILE *pf;
    Movil m;
    int i = 0;
    pf = fopen("Moviles.dat","rb");
    int tam = tamanioFicheroMoviles();
    aMoviles = (Movil *) malloc(tam * sizeof(Movil));
    if (pf!=(FILE *)NULL){
        while (fread(&m, sizeof(m), 1, pf) != 0){
            aMoviles[i] = m;
            i++;
        }
    }else
        printf("Ha ocurrido un error al cargar los moviles");
    return tam;
}

int cargarPortatilesDeFichero(Portatil *aPortatiles){
    FILE *pf;
    Portatil p;
    int i = 0;
    pf = fopen("Portatiles.dat","rb");
    int tam = tamanioFicheroPortatiles();
    aPortatiles = (Portatil *) malloc(tam * sizeof(Portatil));
    if (pf!=(FILE *)NULL){
        while (fread(&p, sizeof(p), 1, pf) != 0){
            aPortatiles[i] = p;
            i++;
        }
    }else
        printf("Ha ocurrido un error al cargar los portatiles");
    return tam;
}

int cargarTelevisionesDeFichero(Television *aTeles){
    FILE *pf;
    Television t;
    int i = 0;
    pf = fopen("Televisiones.dat","rb");
    int tam = tamanioFicheroTelevisiones();
    aTeles = (Television *) malloc(tam * sizeof(Television));
    if (pf!=(FILE *)NULL){
        while (fread(&t, sizeof(t), 1, pf) != 0){
            aTeles[i] = t;
            i++;
        }
    }else
        printf("Ha ocurrido un error al cargar las televisiones");
    return tam;
}