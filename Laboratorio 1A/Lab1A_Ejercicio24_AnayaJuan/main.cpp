/*
 * Laboratorio 1A - Ejercicio 24
 * Juan Sebastian Anaya Regino
*/

#include <iostream>

using namespace std;

int main()
{
    int numN;

    // Se imprime en panatalla la funcion del programa
    cout << "Este  programa pide un numero y imprime un cuadro del tamano del numero ingresado.\n" << endl;

    // Se le pide al usuario que ingrese un numero
    cout << "Ingrese un numero: ";
    cin >> numN;

    cout << endl;
    for (int i=1; i<=numN; i++){
        cout << "+";
    }
    for (int i=1; i<=numN-2; i++){
        cout << "\n+";
        for (int h=1; h<=numN-2; h++){
            cout << " ";
        }
        cout << "+";
    }
    cout << endl;
    for (int i=1; i<=numN; i++){
        cout << "+";
    }
    cout << endl;

    return 0;
}
