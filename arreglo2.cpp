// Escribir un programa que encuentre el número mayor en un array de enteros de 6 posiciones

#include <iostream>
using namespace std;

int main() {

    // Declarar un array de enteros de tamaño 6 y asignar valores a cada posición

    int numeros[6] = { 10, 5, 20, 3, 15, 8 };
    int maximo = numeros[0];   // Declarar una variable auxiliar para almacenar el valor máximo encontrado hasta el momento

    //un bucle for para recorrer cada posición del array y comparar su valor con la variable auxiliar

    for (int i = 1; i < 6; i++) {
        if (numeros[i] > maximo) {
            maximo = numeros[i];
        }
    }

    cout << "El numero mayor del array es: " << maximo << endl;

    return 0;
}