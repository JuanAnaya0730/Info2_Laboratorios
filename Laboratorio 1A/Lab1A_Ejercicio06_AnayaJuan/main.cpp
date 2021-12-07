/*
 * Laboratorio 1A - Ejercicio 06
 * Juan Sebastian Anaya Regino
*/

#include <iostream>

using namespace std;

int main()
{
    int base; // Esta variable almacenara la base para la operacion
    int exponent; // Esta variable almacenara el exponente para la operacion
    int result = 1; // Esta variable almacenara el resultado de base^exponent

    // Se imprime la funcion del programa
    cout << "Este programa recibe dos numeros enteros A y B e imprime el resuldado "
            "de elevar A^B.\n" << endl;

    // Se le pide al usuario que ingrese la base para la operacion
    cout << "Ingrese la base A: ";
    cin >> base;

    // Se le pide al usuario que ingrese el exponente para la operacion
    cout << "Ingrese el exponente B: ";
    cin >> exponent;

    // Se eleva 'base' a la 'exponent'
    for(int aux=0; aux<exponent; ++aux){
        result *= base;
    }

    // Se imprime el resultado de la operacion
    cout << base << "^" << exponent << "=" << result << endl;

    return 0;
}
