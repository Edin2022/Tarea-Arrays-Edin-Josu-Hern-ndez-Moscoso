/*Escribir un programa que cuente el número de veces que aparece cada fruta en el siguiente array:
string frutas[5]={"fresa", "sandia", "melon", "fresa", "naranja", "melon", "mango", "naranja", "fresa"};

 */


#include <iostream>
#include <map>
using namespace std;

int main() {

    //Declarar el array de frutas con los valores indicado
    string frutas[9] = {"fresa", "sandia", "melon", "fresa", "naranja", "melon", "mango", "naranja", "fresa"};

    //Declarar un map que almacene cada fruta como clave y su cantidad como valor
    map<string, int> conteo;
    
    //Utilizar un bucle for para recorrer cada fruta en el array y actualizar el valor del map correspondiente
    for (int i = 0; i < 9; i++) {
        conteo[frutas[i]]++;
    }
    // la cantidad de cada fruta utilizando un bucle for para recorrer el map y mostrar cada clave y valor
    for (auto& [fruta, cantidad] : conteo) {
        cout << "La fruta " << fruta << " aparece " << cantidad << " veces." << endl;
    }

    return 0;
}