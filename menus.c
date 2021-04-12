//
// Created by ikery on 10/04/2021.
//
#include "menus.h"

int mostrarMenuUsuario(){
    int opcion;
    printf("Selecciona el tipo de dispositivo que quiere adquirir\n");
    printf("1. Moviles\n");
    printf("2. Portatiles\n");
    printf("3. Televisiones\n");
    fflush(stdin);
    scanf("%d",&opcion);
    return opcion;
}

int mostrarPrincipal(){
    int opcion;
    printf("Bienvenido a UDTechnologies\n");
    printf("1. Iniciar Sesion\n");
    printf("2. Registrarse\n");
    printf("3. Salir\n");
    fflush(stdin);
    scanf("%d",&opcion);
    return opcion;
}

Usuario mostrarInicioSesion(){
    Usuario u;
    printf("Introduzca su nombre de usuario");
    fflush(stdin);
    scanf("%s",u.usuario);
    printf("Introduzca su contraseña:");
    fflush(stdin);
    scanf("%s",u.con);
    return u;
}

int mostrarMenuVendedor(){
    int opcion;
    printf("Selecciona la operacion a realizar");
    printf("1. Poner movil a la venta");
    printf("2. Poner portatil a la venta");
    printf("3. Poner television a la venta");
    fflush(stdin);
    scanf("%d",&opcion);
    return opcion;
}

Movil solicitarDatosMovil(Usuario vendedor){
    Movil m;
    m.vendedor=vendedor;
    printf("Introducir marca:");
    fflush(stdin);
    gets(m.marca);
    printf("Introducir modelo:");
    fflush(stdin);
    gets(m.modelo);
    printf("Introducir pulgadas:");
    fflush(stdin);
    scanf("%d",&m.pulgadas);
    printf("Introducir memoria ram en GB:");
    fflush(stdin);
    scanf("%d",&m.ram);
    printf("Introducir espacio de almacenamiento en GB:");
    fflush(stdin);
    scanf("%d",&m.almacenamiento);
    printf("Introducir precio en €:");
    fflush(stdin);
    scanf("%f",&m.precio);
    return m;
}

Portatil solicitarDatosPortatil(Usuario vendedor){
    Portatil p;
    p.vendedor=vendedor;
    printf("Introducir marca:");
    fflush(stdin);
    gets(p.marca);
    printf("Introducir modelo:");
    fflush(stdin);
    gets(p.modelo);
    printf("Introducir procesador:");
    fflush(stdin);
    gets(p.procesador);
    printf("Introducir pulgadas:");
    fflush(stdin);
    scanf("%d",&p.pulgadas);
    printf("Introducir memoria ram en GB:");
    fflush(stdin);
    scanf("%d",&p.ram);
    printf("Introducir espacio de almacenamiento en GB:");
    fflush(stdin);
    scanf("%d",&p.almacenamiento);
    printf("Introducir precio en €:");
    fflush(stdin);
    scanf("%f",&p.precio);
    return p;
}

Television solicitarDatosTelevision(Usuario vendedor){
    Television t;
    t.vendedor=vendedor;
    printf("Introducir marca:");
    fflush(stdin);
    gets(t.marca);
    printf("Introducir modelo:");
    fflush(stdin);
    gets(t.modelo);
    printf("Introducir pulgadas:");
    fflush(stdin);
    scanf("%d",&t.pulgadas);
    printf("Introducir precio en €:");
    fflush(stdin);
    scanf("%f",&t.precio);
    return t;
}

