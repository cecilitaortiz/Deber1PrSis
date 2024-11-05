#include <stdio.h>
#include <math.h>
#include "calculos.h"

double calcularAreaTriangulo() {
    double base, altura;
    printf("Ingrese la base y la altura del triángulo: ");
    scanf("%lf %lf", &base, &altura);
    return 0.5 * base * altura;
}

double calcularPerimetroTriangulo() {
    double lado1, lado2, lado3;
    printf("Ingrese los tres lados del triángulo: ");
    scanf("%lf %lf %lf", &lado1, &lado2, &lado3);
    return lado1 + lado2 + lado3;
}

double calcularAreaParalelogramo() {
    double base, altura;
    printf("Ingrese la base y la altura del paralelogramo: ");
    scanf("%lf %lf", &base, &altura);
    return base * altura;
}

double calcularPerimetroParalelogramo() {
    double base, lado;
    printf("Ingrese la base y el lado del paralelogramo: ");
    scanf("%lf %lf", &base, &lado);
    return 2 * (base + lado);
}

double calcularAreaCuadrado() {
    double lado;
    printf("Ingrese el lado del cuadrado: ");
    scanf("%lf", &lado);
    return lado * lado;
}

double calcularPerimetroCuadrado() {
    double lado;
    printf("Ingrese el lado del cuadrado: ");
    scanf("%lf", &lado);
    return 4 * lado;
}

double calcularAreaRectangulo(){
    double largo, ancho;
    printf("Ingrese el largo del rectángulo: ");
    scanf("%f",&largo);
    printf("Ingrese el ancho del rectángulo: ");
    scanf("%f",&ancho);

    return largo * ancho;
}

double calcularPerimetroRectangulo(){
    double largo, ancho;
    printf("Ingrese el largo del rectángulo: ");
    scanf("%f",&largo);
    printf("Ingrese el ancho del rectángulo: ");
    scanf("%f",&ancho);

    return 2 * (largo + ancho);
}

double calcularAreaRombo(){
    double diagonal1, diagonal2;
    printf("Ingrese la diagonal mayor del rombo: ");
    scanf("%f", &diagonal1);
    printf("Ingrese la diagonal menor del rombo: ");
    scanf("%f", &diagonal2);

    return (diagonal1 * diagonal2) / 2;
}

double calcularPerimetroRombo(){
    double diagonal1, diagonal2;
    printf("Ingrese la diagonal mayor del rombo: ");
    scanf("%f", &diagonal1);
    printf("Ingrese la diagonal menor del rombo: ");
    scanf("%f", &diagonal2);

    return 2 * sqrt((diagonal1*diagonal1)+(diagonal2*diagonal2));
}

double calcularAreaTrapecio(){
    double base1, base2, altura, lado1, lado2;
    printf("Ingrese la base mayor del trapecio: ");
    scanf("%f", &base1);
    printf("Ingrese la base menor del trapecio: ");
    scanf("%f", &base2);
    printf("Ingrese la altura del trapecio: ");
    scanf("%f", &altura);

    return ((base1 + base2) * altura) / 2;
}

double calcularPerimetroTrapecio(){
    double base1, base2, altura, lado1, lado2;
    printf("Ingrese la base mayor del trapecio: ");
    scanf("%f", &base1);
    printf("Ingrese la base menor del trapecio: ");
    scanf("%f", &base2);
    printf("Ingrese la altura del trapecio: ");
    scanf("%f", &altura);
    
    double lado1_cateto = (base1 - base2) / 2;
    lado1 = sqrt((altura*altura)+(lado1_cateto*lado1_cateto));
    lado2 = lado1;

    return base1 + base2 + lado1 + lado2;
}

double calcularAreaCirculo(){
    double radio;
    float pi = 3.14159;
    printf("Ingrese el radio del círculo: ");
    scanf("%f", &radio);

    return pi * radio * radio;
}

double calcularPerimetroCirculo(){
    double radio;
    float pi = 3.14159;
    printf("Ingrese el radio del círculo: ");
    scanf("%f", &radio);

    return 2 * pi * radio;
}

double calcularAreaPoligonoRegular(){
    double lado, num_lados;
    float pi = 3.14159;
    printf("Ingrese el número de lados del polígono regular: ");
    scanf("%f", &num_lados);
    printf("Ingrese la longitud de un lado del polígono: ");
    scanf("%f", &lado);

    double perimetro = num_lados * lado;
    double apotema = lado / (2 * tan(pi / num_lados));
    return (perimetro * apotema) / 2;
}

double calcularPerimetroPoligonoRegular(){
    double lado, num_lados;
    printf("Ingrese el número de lados del polígono regular: ");
    scanf("%f", &num_lados);
    printf("Ingrese la longitud de un lado del polígono: ");
    scanf("%f", &lado);

    return num_lados * lado;
}

double calcularSuperficieCubo() {
    double lado;
    printf("Ingrese el lado del cubo: ");
    scanf("%lf", &lado);
    return 6 * lado * lado;
}

double calcularVolumenCubo() {
    double lado;
    printf("Ingrese el lado del cubo: ");
    scanf("%lf", &lado);
    return lado * lado * lado;
}

double calcularSuperficieCuboide(){
    double longitud, ancho, altura;
    printf("Ingrese la longitud del cuboide: ");
    scanf("%f", &longitud);
    printf("Ingrese el ancho del cuboide: ");
    scanf("%f", &ancho);
    printf("Ingrese la altura del cuboide: ");
    scanf("%f", &altura);

    return 2 * (longitud * ancho + longitud * altura + ancho * altura);
}
double calcularVolumenCuboide(){
    double longitud, ancho, altura;
    printf("Ingrese la longitud del cuboide: ");
    scanf("%f", &longitud);
    printf("Ingrese el ancho del cuboide: ");
    scanf("%f", &ancho);
    printf("Ingrese la altura del cuboide: ");
    scanf("%f", &altura);

    return longitud * ancho * altura;
}

double calcularSuperficieCilindro(){
    double radio, altura;
    printf("Ingrese el radio de la base del cilindro recto: ");
    scanf("%f", &radio);
    printf("Ingrese la altura del cilindro recto: ");
    scanf("%f", &altura);

    return 2 * 3.14159 * radio * (radio + altura);
}

double calcularVolumenCilindro(){
    double radio, altura;
    printf("Ingrese el radio de la base del cilindro recto: ");
    scanf("%f", &radio);
    printf("Ingrese la altura del cilindro recto: ");
    scanf("%f", &altura);

    return 3.14159 * radio * radio * altura;
}
double calcularSuperficieEsfera(){
    double radio;
    printf("Ingrese el radio de la esfera: ");
    scanf("%f", &radio);

    return  4 * 3.14159 * radio * radio; 
}
double calcularVolumenEsfera(){
    double radio;
    printf("Ingrese el radio de la esfera: ");
    scanf("%f", &radio);

    return (4.0 / 3.0) * 3.14159 * radio * radio * radio;
}
double calcularSuperficieCono(){
    double radio, altura, generatriz;
    printf("Ingrese el radio de la base del cono: ");
    scanf("%f", &radio); 
    printf("Ingrese la altura del cono: ");
    scanf("%f", &altura);

    generatriz = sqrt(radio * radio + altura * altura);
    return 3.14159  * radio * (radio + generatriz);
}
double calcularVolumenCono(){
    double radio, altura;
    printf("Ingrese el radio de la base del cono: ");
    scanf("%f", &radio); 
    printf("Ingrese la altura del cono: ");
    scanf("%f", &altura);

    return (1.0 / 3.0) * 3.14159 * radio * radio * altura;
}
