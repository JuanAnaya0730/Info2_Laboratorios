/*
 * Laboratorio 1A - Ejercicio 10
 * Juan Sebastian Anaya Regino
*/

#include <iostream>

using namespace std;

int main()
{
    int numN; // Esta variable almacenara el numero al que se le calcularan sus multiplos

    // Se imprime en pantalla la funcion del programa
    cout << "Este programa recibe un numero entero entre 1 y 100 e imprime en pantalla todos sus multiplos "
            "entre 1 y 100.\n\n";

    // Se le pide al usuario que ingrese un numero
    cout << "Ingrese un numero: ";
    cin >> numN;

    // Se imprimen en pantalla los multiplos de numN menores que 100
    cout << "\nMultiplos de " << numN << " menores que 100 son:" << endl;

    // Este ciclo se encarga de calcular y imprimir cada uno de los multiplos de numN menores que 100
    for(int aux=1; aux<100 && (numN*aux)<100; ++aux){
        cout << numN*aux << endl;
    }

    return 0;
}
