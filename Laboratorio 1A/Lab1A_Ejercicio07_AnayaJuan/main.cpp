/*
 * Laboratorio 1A - Ejercicio 07
 * Juan Sebastian Anaya Regino
*/

#include <iostream>

using namespace std;

int main()
{
    int numN; // Varible que almacenara el numero ingresado por el usuario
    int total = 0; // Variable que almacenara el resultado de la sumatoria

    // Se imprime la funcion del programa
    cout << "Este programa recibe un numero entero N e imprime la suma de todos los "
            "numeros entre 0 y N, incluyendo N.\n" << endl;

    // Se le pide al usuario que ingrese un numero
    cout << "Ingrese un numero: ";
    cin >> numN;

    // Se suman todos los numeros entre 0 y el valor de numN
    for(int aux=1; aux<=numN; ++aux){
        total += aux;
    }

    // Se imprime el resultado de la sumatoria
    cout << "\nLa sumatoria desde 0 hasta " << numN << " es: " << total << endl;

    return 0;
}
