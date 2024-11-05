#include <stdio.h>
#include <stdlib.h>
#include "datos.h"
#include "calculos.h"
#include "auth.h"

#define ARCHIVO_USUARIOS "usuarios.txt"
#define ARCHIVO_REGISTRO "bitacora.txt"

int main()
{
    char usuario[50], clave[50];

    printf("Ingrese usuario: ");
    scanf("%s", usuario);
    printf("Ingrese clave: ");
    scanf("%s", clave);

    if (!autenticarUsuario(ARCHIVO_USUARIOS, usuario, clave))
    {
        printf("Usuario o clave incorrecta\n");
        registrarAccion(ARCHIVO_REGISTRO, usuario, "Ingreso fallido usuario/clave incorrecta");
        return 1;
    }
    else
    {

        registrarAccion(ARCHIVO_REGISTRO, usuario, "Ingreso exitoso al sistema");
        int opcion;
        char continuar;

        do
        {
            mostrarMenu();
            opcion = leerOpcion();

            double resultado1, resultado2;
            switch (opcion)
            {
            case 1:
                registrarAccion(ARCHIVO_REGISTRO, usuario, "Triangulo");
                resultado1 = calcularAreaTriangulo();
                resultado2 = calcularPerimetroTriangulo();
                mostrarResultados("Triángulo", resultado1, resultado2);
                break;
            case 2:
                registrarAccion(ARCHIVO_REGISTRO, usuario, "Paralelogramo");
                resultado1 = calcularAreaParalelogramo();
                resultado2 = calcularPerimetroParalelogramo();
                mostrarResultados("Paralelogramo", resultado1, resultado2);
                break;
            case 3:
                registrarAccion(ARCHIVO_REGISTRO, usuario, "Cuadrado");
                resultado1 = calcularAreaCuadrado();
                resultado2 = calcularPerimetroCuadrado();
                mostrarResultados("Cuadrado", resultado1, resultado2);
                break;
            case 4:
                registrarAccion(ARCHIVO_REGISTRO, usuario, "Rectangulo");
                resultado1 = calcularAreaRectangulo();
                resultado2 = calcularPerimetroRectangulo();
                mostrarResultados("Rectángulo", resultado1, resultado2);
                break;
            case 5:
                registrarAccion(ARCHIVO_REGISTRO, usuario, "Rombo");
                resultado1 = calcularAreaRombo();
                resultado2 = calcularPerimetroRombo();
                mostrarResultados("Rombo", resultado1, resultado2);
                break;
            case 6:
                registrarAccion(ARCHIVO_REGISTRO, usuario, "Trapecio");
                resultado1 = calcularAreaTrapecio();
                resultado2 = calcularPerimetroTrapecio();
                mostrarResultados("Trapecio", resultado1, resultado2);
                break;
            case 7:
                registrarAccion(ARCHIVO_REGISTRO, usuario, "Circulo");
                resultado1 = calcularAreaCirculo();
                resultado2 = calcularPerimetroCirculo();
                mostrarResultados("Círculo", resultado1, resultado2);
                break;
            case 8:
                registrarAccion(ARCHIVO_REGISTRO, usuario, "PoligonoRegular");
                resultado1 = calcularAreaPoligonoRegular();
                resultado2 = calcularPerimetroPoligonoRegular();
                mostrarResultados("Polígono Regular", resultado1, resultado2);
                break;
            case 9:
                registrarAccion(ARCHIVO_REGISTRO, usuario, "Cubo");
                resultado1 = calcularSuperficieCubo();
                resultado2 = calcularVolumenCubo();
                mostrarResultados("Cubo", resultado1, resultado2);
                break;
            case 10:
                registrarAccion(ARCHIVO_REGISTRO, usuario, "Cuboide");
                resultado1 = calcularSuperficieCuboide();
                resultado2 = calcularVolumenCuboide();
                mostrarResultados("Cuboide", resultado1, resultado2);
                break;
            case 11:
                registrarAccion(ARCHIVO_REGISTRO, usuario, "Cilindro");
                resultado1 = calcularSuperficieCilindro();
                resultado2 = calcularVolumenCilindro();
                mostrarResultados("Cilindro", resultado1, resultado2);
                break;
            case 12:
                registrarAccion(ARCHIVO_REGISTRO, usuario, "Esfera");
                resultado1 = calcularSuperficieEsfera();
                resultado2 = calcularVolumenEsfera();
                mostrarResultados("Esfera", resultado1, resultado2);
                break;
            case 13:
                registrarAccion(ARCHIVO_REGISTRO, usuario, "Cono");
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
    }
    registrarAccion(ARCHIVO_REGISTRO, usuario, "Salida del sistema");
    return 0;
}
