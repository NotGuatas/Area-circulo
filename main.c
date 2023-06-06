#include <stdio.h>
#include "funciones.h"

int main(int argc, char *argv[])
{

    float x1  = IngresePuntosX();
    float y1  = IngresePuntosY();
    float x2  = IngresePuntosX();
    float y2  = IngresePuntosY();
    float x3  = IngresePuntosX();
    float y3  = IngresePuntosY();

    float catetob = Distancia(x1 , x2 , y1, y2);
    printf("%f\n",catetob);
    float catetoc = Distancia(x1, x3, y1, y3);
    printf("%f\n",catetoc);
    float hipo = Distancia(x2, x3, y2 ,y3);
    printf("%f\n",hipo);

    Area( catetob ,  catetoc, hipo);


}