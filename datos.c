#include <stdio.h>
#include "datos.h"

void mostrarMenu() {
    printf("Para ingresar mas de un numero, estos deben ir separados por un espacio simple\n");
    printf("Seleccione una figura geométrica:\n");
    printf("1. Triángulo\n2. Paralelogramo\n3. Cuadrado\n4. Rectángulo\n");
    printf("5. Rombo\n6. Trapecio\n7. Círculo\n8. Polígono Regular\n");
    printf("9. Cubo\n10. Cuboide\n11. Cilindro\n12. Esfera\n13. Cono\n");
    printf("Ingrese su opción: ");
}

int leerOpcion() {
    int opcion;
    scanf("%d", &opcion);
    return opcion;
}

void mostrarResultados(const char *figura, double resultado1, double resultado2) {
    printf("Resultados para %s:\n", figura);
    printf("Área/Perímetro o Superficie/Volumen: %.2f, %.2f\n", resultado1, resultado2);
}
