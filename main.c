#include <stdio.h>
#include <stdlib.h>
#include "datos.h"
#include "calculos.h"

int main() {
    int opcion;
    char continuar;

    do {
        mostrarMenu();
        opcion = leerOpcion();

        double resultado1, resultado2;
        switch (opcion) {
            case 1:
                resultado1 = calcularAreaTriangulo();
                resultado2 = calcularPerimetroTriangulo();
                mostrarResultados("Triángulo", resultado1, resultado2);
                break;
            case 2:
                resultado1 = calcularAreaParalelogramo();
                resultado2 = calcularPerimetroParalelogramo();
                mostrarResultados("Paralelogramo", resultado1, resultado2);
                break;
            case 3:
                resultado1 = calcularAreaCuadrado();
                resultado2 = calcularPerimetroCuadrado();
                mostrarResultados("Cuadrado", resultado1, resultado2);
                break;
            case 4:
                resultado1 = calcularAreaRectangulo();
                resultado2 = calcularPerimetroRectangulo();
                mostrarResultados("Rectángulo", resultado1, resultado2);
                break;
            case 5:
                resultado1 = calcularAreaRombo();
                resultado2 = calcularPerimetroRombo();
                mostrarResultados("Rombo", resultado1, resultado2);
                break;
            case 6:
                resultado1 = calcularAreaTrapecio();
                resultado2 = calcularPerimetroTrapecio();
                mostrarResultados("Trapecio", resultado1, resultado2);
                break;
            case 7:
                resultado1 = calcularAreaCirculo();
                resultado2 = calcularPerimetroCirculo();
                mostrarResultados("Círculo", resultado1, resultado2);
                break;
            case 8:
                resultado1 = calcularAreaPoligonoRegular();
                resultado2 = calcularPerimetroPoligonoRegular();
                mostrarResultados("Polígono Regular", resultado1, resultado2);
                break;
            case 9:
                resultado1 = calcularSuperficieCubo();
                resultado2 = calcularVolumenCubo();
                mostrarResultados("Cubo", resultado1, resultado2);
                break;
            case 10:
                resultado1 = calcularSuperficieCuboide();
                resultado2 = calcularVolumenCuboide();
                mostrarResultados("Cuboide", resultado1, resultado2);
                break;
            case 11:
                resultado1 = calcularSuperficieCilindro();
                resultado2 = calcularVolumenCilindro();
                mostrarResultados("Cilindro", resultado1, resultado2);
                break;
            case 12:
                resultado1 = calcularSuperficieEsfera();
                resultado2 = calcularVolumenEsfera();
                mostrarResultados("Esfera", resultado1, resultado2);
                break;
            case 13:
                resultado1 = calcularSuperficieCono();
                resultado2 = calcularVolumenCono();
                mostrarResultados("Cono", resultado1, resultado2);
                break;
            default:
                printf("Opción no válida\n");
        }

        printf("¿Desea analizar otra figura? (s/n): ");
        scanf(" %c", &continuar);
    } while (continuar == 's' || continuar == 'S');

    return 0;
}
