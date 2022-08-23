#include <stdio.h>
#include <math.h>

int main(){
    float estatura = 1.8;
    int poblacion = 4000000;
    char estadocivil[] = "c";
    double masa = 7.37*pow(10,24);
    float precio = 34.80;
    int resta = 7-5;
    char tecla[] = "f";

    printf("La estatura es %.2f metros",estatura); // .2 para poner 2 decimales
    printf("\nLa poblacion de la ZMG es de %i de personas",poblacion);
    printf("\nEl tamaño de un entero es de %lu bytes",sizeof(int));
    printf("\nEl estado civil es %s",estadocivil);
    printf("\nLa masa planetaria es de %d",masa);
    printf("\nEl precio del producto es: %.2f",precio);
    printf("\nEl resultado de 7 - 5 es : %i",resta);
    printf("\nLa tecla precionada por el ususario es %s",tecla);

    return 0;
    
}