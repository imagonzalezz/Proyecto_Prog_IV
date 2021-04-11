#include "menus.h"
#include "usuario.h"
#include "dispositivos.h"
#include "ficheros.h"
#include <stdio.h>

int main() {
    int tamUsuarios,tamMoviles,tamPortatiles,tamTeles;
    Usuario *aUsuarios;
    Movil *aMoviles;
    Portatil *aPortatiles;
    Television *aTeles;
    tamUsuarios = cargarUsuariosDeFichero(aUsuarios);
    tamMoviles = cargarMovilesDeFichero(aMoviles);
    tamPortatiles = cargarPortatilesDeFichero(aPortatiles);
    tamTeles = cargarTelevisionesDeFichero(aTeles);
}



