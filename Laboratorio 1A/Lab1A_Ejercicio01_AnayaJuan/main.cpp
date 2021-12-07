/*
 * Laboratorio 1A - Ejercicio 01
 * Juan Sebastian Anaya Regino
*/

#include <iostream>

using namespace std;

int main()
{
    int dividend; // Variable que almacena el dividendo
    int divisor; // Variable que almacena el divisor

    // Se imprime la funcion del programa
    cout << "Este programa recibe dos numeros enteros A y B "
            "e imprime el residuo de la division A/B.\n" << endl;

    // Se le pide al usuario que ingrese el valor para A (divisor)
    cout << "Ingrese un numero para A: ";
    cin >> dividend;

    // Se le pide al usuario que ingrese el valor para B (dividendo)
    cout << "Ingrese un numero para B: ";
    cin >> divisor;

    // Se imprime el residuo de A/B en pantalla
    cout << "\nEl residuo de la division " << dividend << "/" << divisor << " es: " << dividend % divisor << endl;

    return 0;
}
