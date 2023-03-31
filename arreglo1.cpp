// Escribir un programa que calcule la suma de los elementos de un array de enteros de 10 posiciones.

// Que es una array es una dimension, es un tipo de dato que se almacen en una secuencia de dastos del mismo tipo

#include <iostream>
using namespace std;

int main() {

    //Declarar un array o una variable de enteros de tamaño 10 y asignar valores a cada posición

    int arreglo[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int suma = 0; //Declarar una variable auxiliar para almacenar la suma de los elementos del array

    // un bucle for para recorrer cada posición del array y sumar su valor a la variable auxiliar

    for (int i = 0; i < 10; i++) {  // siempre inicia desce cero, porque si pongo 1 estaria omitiendo un vector
        suma += arreglo[i];
    }

    cout << "La suma de los elementos de array son: " << suma << endl; //el valor de la variable suma para mostrar el resultado

    return 0;
}