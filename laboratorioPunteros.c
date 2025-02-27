/**************************************************************************
        Fecha: 27/02/2025
        Autor: Juan Diego Rojas
        Pontificia Universidad Javeriana
        Meteria: Sistemas Operativos
        Tema: Punteros
                Programa principal
*******************************+******************************************/


#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"



int main(int argc, char *argv[]) {

    // Validar que se ingresen exactamente 5 argumentos
    if (argc != 6) {
        printf("Uso: %s num1 num2 num3 num4 num5\n", argv[0]);
        return 1;
    }


    // Asignar memoria para los números
    double *num = (double *)malloc(5 * sizeof(double));
    if (num == NULL) {
        printf("Error: No se pudo asignar memoria.\n");
        return 1;
    }


    // Convertir argumentos a números y almacenarlos en el puntero
    for (int i = 0; i < 5; i++) {
        *(num + i) = atof(argv[i + 1]);
    }


    // Mostrar los cálculos usando punteros
    printf("Operaciones matemáticas con los valores ingresados:\n");
    printf("1. Suma total: %.2f\n", calcular_suma(num, 5));
    printf("2. Promedio de los números: %.2f\n", calcular_promedio(num, 5));
    printf("3. Producto total: %.2f\n", calcular_producto(num, 5));
    printf("4. Diferencia entre el mayor y el menor: %.2f\n", calcular_diferencia_mayor_menor(num, 5));
    printf("5. Promedio de los valores elevados al cuadrado: %.2f\n", calcular_promedio_cuadrados(num, 5));

    // Liberar memoria
    free(num);

    return 0;
}
