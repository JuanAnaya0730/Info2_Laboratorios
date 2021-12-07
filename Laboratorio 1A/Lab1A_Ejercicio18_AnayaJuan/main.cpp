/*
 * Laboratorio 1A - Ejercicio 18
 * Juan Sebastian Anaya Regino
*/

#include <iostream>

using namespace std;

int main()
{
    int numN; // Esta variable almacenara el numero ingresado por el usuario
    int numAux=0;

    // Se imprime la funcion del programa
    cout << "Este programa recibe un numero entero e imprime en pantalla si es o no "
            "un cuadrado perfecto.\n" << endl;

    // Se le pide al usuario que ingrese el numero
    cout << "Ingrese un numero: ";
    cin >> numN;

    // Se busca por fuerza bruta si existe un numero que al cuadrado sea numN
    for (int aux=1; numAux<numN; ++aux){
        numAux = aux*aux;
    }

    // Si existe un numero cuyo cuadrado sea numN, significa que numN es un cuadrado perfecto
    if (numAux==numN){
        cout << numN << " es un cuadrado perfecto." << endl;
    }else{
        cout << numN << " NO es un cuadrado perfecto." << endl;
    }

    return 0;
}
