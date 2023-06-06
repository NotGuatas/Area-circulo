#include <stdio.h>
#include <math.h>
#include "funciones.h"
#define pi 3.14

float IngresePuntosX()
{
    printf("Ingresa los puntos de x \n");
    float x;
    scanf("%f",&x);
    return x;
}

float IngresePuntosY()
{
    printf("Ingresa los puntos de y \n");
    float y;
    scanf("%f",&y);
    return y;
}

float Distancia(float x1 , float x2, float y1 , float y2)
{
    float dis1 = sqrt(pow((x2 - x1),2)+ pow((y2-y1),2));
    return dis1;
}

void Area(float catetob , float catetoc, float hipo)
{
    float radio = (catetob + catetoc - hipo)/2;
    float area = ( pi * radio * radio );
    printf("El radio es de: %f \n", radio);
    printf("El area es de: %f \n", area);
}




