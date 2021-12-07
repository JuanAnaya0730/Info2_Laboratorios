/*
 * Laboratorio 1A - Ejercicio 25
 * Juan Sebastian Anaya Regino
*/

#include <iostream>

using namespace std;

int main()
{
    long long int numN; // Esta variable almacenara el numero ingresado
    long long int copyNumN; // Esta variable sera una copia de la variable numN
    int count=0; // Esta variable almacenara el numero de digitos que tenga numN

    // Se imprime en pantalla la funcion del programa
    cout << "Este programa recibe un numero y imprime la cantidad de "
            "digitos con los que cuenta.\n" << endl;

    // Se pide al usuario que ingrese un numero
    cout << "Ingrese un numero: ";
    cin >> numN;

    // Se hace una copia de la variable numN
    copyNumN = numN;

    /* Se crea un ciclo do while que ira reduciendo la variable numN hasta llegar a 0,
       al mismo tiempo se va aumentando la variable count */
    do {
        count++;
        copyNumN = copyNumN/10;
    } while (copyNumN > 0);

    // Se imprime en pantalla el numero de digitos de numN
    cout << numN << " tiene " << count << " digitos." << endl;

    return 0;
}
