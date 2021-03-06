#include "dispositivos.h"
#include <stdio.h>
int mostrarMoviles(Movil *aMoviles,int tam){
    int opcion;
    printf("Pulse el numero correspondiente para comprar un dispositivo\n");
    printf("%13s %20s %10s %10s %12s %12s\n","MARCA", "MODELO", "PULGADAS", "GB RAM", "GB ESPACIO", "PRECIO(€)");
    int i ;
    Movil m;
    for (i = 0; i < tam; i++) {
        m = aMoviles[i];
        printf("%2d.%10s %20s %10d %10d %12d %12f\n",i+1,m.marca,m.modelo,m.pulgadas,m.ram,m.almacenamiento,m.precio);
    }
    fflush(stdin);
    scanf("%d",&opcion);
    return opcion;
}

int mostrarPortatiles(Portatil *aPortatiles,int tam){
    int opcion;
    printf("Pulse el numero correspondiente para comprar un dispositivo\n");
    printf("%13s %20s %20s %10s %10s %12s %12s\n","MARCA", "MODELO", "PROCESADOR", "PULGADAS", "GB RAM", "GB ESPACIO", "PRECIO(€)");
    int i;
    Portatil p;
    for (i = 0; i < tam; i++) {
        p = aPortatiles[i];
        printf("%2d.%10s %20s %20s %10d %10d %12d %12f\n",i+1,p.marca,p.modelo,p.procesador,p.pulgadas,p.ram,p.almacenamiento,p.precio);
    }
    fflush(stdin);
    scanf("%d",&opcion);
    return opcion;
}


int mostrarTelevisiones(Television *aTeles, int tam){
    int opcion;
    printf("Pulse el numero correspondiente para comprar un dispositivo\n");
    printf("%13s %20s %10s %12s\n","MARCA","MODELO","PULGADAS","PRECIO(€)");
    int i;
    Television t;
    for (i = 0; i < tam; i++) {
        t = aTeles[i];
        printf("%2d.%10s %20s %10d %12f\n",i+1,t.marca,t.modelo,t.pulgadas,t.precio);
    }
    fflush(stdin);
    scanf("%d",&opcion);
    return opcion;
}
