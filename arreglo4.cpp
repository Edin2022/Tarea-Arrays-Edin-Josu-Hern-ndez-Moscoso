// Escribir un programa que muestre la suma de todos los números de un array de enteros de 10 posiciones

#include <iostream>
using namespace std;

int main() {

    // Declarar un array de enteros de tamaño 10 y asignar valores a cada posición

    int numeros[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

    int suma = 0;    // Declarar una variable acumuladora y asignarle un valor inicial de cero


    // un bucle for para recorrer cada posición en el array y sumar el valor de esa posición a la variable acumuladora suma

    for (int i = 0; i < 10; i++) {
        suma += numeros[i];
    }

    cout << "La suma de los numeros es: " << suma << endl;

    return 0;
}