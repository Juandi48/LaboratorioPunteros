/**************************************************************************
        Fecha: 27/02/2025
        Autor: Juan Diego Rojas
        Pontificia Universidad Javeriana
        Meteria: Sistemas Operativos
        Tema: Punteros
                Funciones.c
*******************************+******************************************/

#include <stdio.h>
#include "funciones.h"

// Función para calcular la suma
double calcular_suma(double *nums, int size) {
    double suma = 0;
    for (int i = 0; i < size; i++) {
        suma += *(nums + i);
    }
    return suma;
}


// Función para calcular el promedio
double calcular_promedio(double *nums, int size) {
    return calcular_suma(nums, size) / size;
}


// Función para calcular el producto total
double calcular_producto(double *nums, int size) {
    double producto = 1;
    for (int i = 0; i < size; i++) {
        producto *= *(nums + i);
    }
    return producto;
}


// Función para calcular la diferencia entre el mayor y el menor
double calcular_diferencia_mayor_menor(double *nums, int size) {
    double mayor = *nums, menor = *nums;
    for (int i = 1; i < size; i++) {
        if (*(nums + i) > mayor) mayor = *(nums + i);
        if (*(nums + i) < menor) menor = *(nums + i);
    }
    return mayor - menor;
}


// Función para calcular el promedio de los valores elevados al cuadrado
double calcular_promedio_cuadrados(double *nums, int size) {
    double suma_cuadrados = 0;
    for (int i = 0; i < size; i++) {
        suma_cuadrados += (*(nums + i)) * (*(nums + i));
    }
    return suma_cuadrados / size;
}
