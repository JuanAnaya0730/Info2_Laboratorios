/*
 * Laboratorio 1A - Ejercicio 11
 * Juan Sebastian Anaya Regino
*/

#include <iostream>

using namespace std;

int main()
{
    int numN; // Esta variable almacenara el numero ingresado

    // Se imprime en panatalla la funcion del programa
    cout << "Este programa recibe un numero entero N e imprime en pantalla su tabla de multiplicar "
            "hasta 10xN.\n" << endl;

    // Se le pide al usuario que ingrese un numero
    cout << "Ingrese un numero: ";
    cin >> numN;

    // Este ciclo se encarga de imprimir la tabla de numN
    for(int aux=1; aux<=10 ; ++aux){
        cout << aux << 'x' << numN << '=' << aux*numN << endl;
    }

    return 0;
}
