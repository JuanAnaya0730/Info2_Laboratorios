/*
 * Laboratorio 1A - Ejercicio 13
 * Juan Sebastian Anaya Regino
*/

#include <iostream>

using namespace std;

int main()
{
    int numN; // Esta variable almacenara el numero ingresado

    // Se imprime en pantalla la funcion del progrma
    cout << "Este programa recibe un numero entero e imprime todos sus divisores.\n" << endl;

    // Se le pide al usuario que ingrese un numero
    cout << "Ingrese un numero: ";
    cin >> numN;

    /* Se imprimen en pantalla los divisores de N */
    cout << "Los divisores de " << numN << " son:" << endl;
    for(int aux=1; aux<=numN; ++aux){
        if(!(numN%aux)){
            cout << aux << endl;
        }
    }

    return 0;
}
