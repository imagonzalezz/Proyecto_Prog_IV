//
// Created by ikery on 10/04/2021.
//

#include "ficheros.h"

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

void guardarUsuariosEnFichero(Usuario *aUsuarios,int tam){
    FILE *pf;
    int i;
    Usuario u;
    pf = fopen("Usuarios.dat","wb");
    if (pf!=(FILE *)NULL){
        for (i = 0; i < tam; i++) {
            fwrite(&aUsuarios[i], sizeof(Usuario),1,pf);
        }
        fclose(pf);
    }else
        printf("Ha ocurrido un error al guardar los usuarios");
}

void guardarMovilesEnFichero(Movil *aMoviles,int tam){
    FILE *pf;
    int i;
    Movil m;
    pf = fopen("Moviles.dat","wb");
    if (pf!=(FILE *)NULL){
        for (i = 0; i < tam; i++) {
            fwrite(&aMoviles[i], sizeof(Movil),1,pf);
        }
        fclose(pf);
    }else
        printf("Ha ocurrido un error al guardar los moviles");
}

void guardarPortatilesEnFichero(Portatil *aPortatiles,int tam){
    FILE *pf;
    int i;
    Portatil p;
    pf = fopen("Portatiles.dat","wb");
    if (pf!=(FILE *)NULL){
        for (i = 0; i < tam; i++) {
            fwrite(&aPortatiles[i], sizeof(Portatil),1,pf);
        }
        fclose(pf);
    }else
        printf("Ha ocurrido un error al guardar los portatiles");
}

void guardarTelevisionesEnFichero(Television *aTeles,int tam){
    FILE *pf;
    int i;
    Television t;
    pf = fopen("Televisiones.dat","wb");
    if (pf!=(FILE *)NULL){
        for (i = 0; i < tam; i++) {
            fwrite(&aTeles[i], sizeof(Television),1,pf);
        }
        fclose(pf);
    }else
        printf("Ha ocurrido un error al guardar las televisiones");
}

void registrarVentaMovil(VentaMovil v){
    FILE *pf;
    pf = fopen("VentasMoviles.dat","ab");
    if (pf!=(FILE *)NULL){
        fwrite(&v, sizeof(VentaMovil),1,pf);
        fclose(pf);
    }else
        printf("Ha ocurrido un error al registrar la venta");
}

void registrarVentaPortatil(VentaPortatil v){
    FILE *pf;
    pf = fopen("VentasPortatiles.dat","ab");
    if (pf!=(FILE *)NULL){
        fwrite(&v, sizeof(VentaPortatil),1,pf);
        fclose(pf);
    }else
        printf("Ha ocurrido un error al registrar la venta");
}

void registrarVentaTelevision(VentaTelevision v){
    FILE *pf;
    pf = fopen("VentasTelevisiones.dat","ab");
    if (pf!=(FILE *)NULL){
        fwrite(&v, sizeof(VentaTelevision),1,pf);
        fclose(pf);
    }else
        printf("Ha ocurrido un error al registrar la venta");
}

