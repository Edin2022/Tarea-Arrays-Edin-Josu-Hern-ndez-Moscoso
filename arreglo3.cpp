// Escribir un programa que invierta el orden de los elementos en un array de enteros de 8 posiciones.

#include <iostream>
using namespace std;

int main() {

    //Declarar un array de enteros de tamaño 8 y asignar valores a cada posición

    int numeros[8] = { 1, 2, 3, 4, 5, 6, 7, 8 };

    //Declarar dos variables auxiliares para almacenar temporalmente los valores de las posiciones que se van a intercambiar

    int temp;
    int inicio = 0;
    int fin = 7;


 /* bucle while para intercambiar los valores de cada posición en el array
  mientras se van acercando los índices inicio y fin hacia el centro del array

  En cada iteración del bucle, se intercambian los valores de numeros[inicio] y numeros fin
  y luego se incrementa inicio y se decrementa fin

  */

    while (inicio < fin) {
        temp = numeros[inicio];
        numeros[inicio] = numeros[fin];
        numeros[fin] = temp;
        inicio++;
        fin--;
    }

    // los valores del array invertido para mostrar el resultado

    cout << "El array invertido es: ";
    for (int i = 0; i < 8; i++) {
        cout << numeros[i] << " ";
    }
    cout << endl;

    return 0;
}