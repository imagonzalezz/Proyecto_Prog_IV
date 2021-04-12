//
// Created by ikery on 11/04/2021.
//

#include "dispositivos.h"

void mostrarMoviles(Movil *aMoviles,int tam){
    int opcion;
    printf("Si desea salir pulse el 0");
    printf("Si desea añadir un movil al carrito, pulse su numero correspondiente");
    printf("%13s %20s %10s %10s %12s %12s","MARCA", "MODELO", "PULGADAS", "GB RAM", "GB ESPACIO", "PRECIO(€)");
    int i ;
    Movil m;
    for (i = 0; i < tam; i++) {
        m = aMoviles[i];
        printf("%2d.%10s %20s %10s %10s %12s %12s",i+1,m.marca,m.modelo,m.pulgadas,m.ram,m.almacenamiento,m.precio);
    }
    fflush(stdin);
    scanf("%d",&opcion);
    if (opcion==0){
        //salir
    }else if (opcion>0 && opcion<tam+1){
        //añadir al carrito
    }else{
        printf("No se ha pulsado un numero correcto");
        mostrarMoviles(aMoviles,tam);
    }
}

void mostrarPortatiles(Portatil *aPortatiles,int tam){
    int opcion;
    printf("Si desea salir pulse el 0");
    printf("Si desea añadir un portatil al carrito, pulse su numero correspondiente");
    printf("%13s %20s %20s %10s %10s %12s %12s","MARCA", "MODELO", "PROCESADOR", "PULGADAS", "GB RAM", "GB ESPACIO", "PRECIO(€)");
    int i;
    Portatil p;
    for (i = 0; i < tam; i++) {
        p = aPortatiles[i];
        printf("%2d.%10s %20s %20s %10d %10d %12d %12d",i+1,p.marca,p.modelo,p.procesador,p.pulgadas,p.ram,p.almacenamiento,p.precio);
    }
    fflush(stdin);
    scanf("%d",&opcion);
    if (opcion==0){
        //salir
    }else if (opcion>0 && opcion<tam+1){
        //añadir al carrito
    }else{
        printf("No se ha pulsado un numero correcto");
        mostrarPortatiles(aPortatiles,tam);
    }
}

void mostrarTelevisiones()
