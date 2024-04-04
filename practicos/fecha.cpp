#include <stdio.h>

//---------------------------------------------MODULO PUNTO

typedef struct rep_punto * Punto {
    double coordX;
    double coordY;
};

Punto crearPunto(double x, double y) {
    Punto punto = new rep_punto;
    punto->coordX = x;
    punto->coordY = y;
    return punto;
};

void borrarPunto(Punto punto) {
    delete punto;
};

double coordX(Punto punto) {
    return punto->coordX;
};

double coordY(Punto punto) {
    return punto->coordY;
};

//---------------------------------------------PROGRAMA MAIN

int main () {
    int opcion, i, cant;
    double lectorX, lectorY;

    printf("Elige una opción \n");
    printf("1) Distancia entre dos puntos \n");
    printf("2) Distancia entre tres puntos \n");
    printf("Escribe una opción: ");
    scanf("%d", &cant);

    cant++; // opcion 1 es dos puntos, opcion 2 son tres, por eso aumento en uno
    Punto puntos[cant];


    if (opcion == 1) {

        for (i = 0; i < 2; i++) {
            printf("Ingrese coordenadas (x, y) del punto %d", i + 1);
            scanf("(%f, %f)", &lectorX, &lectorY);
            crearPunto(lectorX, lectorY)
        }

    } else if (opcion == 2) {

        for (i = 0; i < 2; i++) {
            printf("Ingrese coordenadas (x, y) del punto %d", i + 1);
            scanf("(%f, %f)", &lectorX, &lectorY);
            crearPunto(lectorX, lectorY)
        }

    } else {
        printf("Opcion inválida, saliendo...");
    }


    return 0;
}