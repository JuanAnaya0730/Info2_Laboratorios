/*
 * Laboratorio 1A - Ejercicio 02
 * Juan Sebastian Anaya Regino
*/

#include <iostream>

using namespace std;

int main()
{
    int num; // Variable que almacena el numero a verificar

    // Se imprime la funcion del programa
    cout << "Este programa recibe un numero entero e imprime en panatalla si es un"
            "numer par o impar.\n" << endl;

    // Se le pide al usuario que ingrese un numero
    cout << "Ingrese un numero: ";
    cin >> num;

    // Si el residuo de dividir ese numero entre dos es cero, significa que es par.
    if(!(num%2)){
        cout << num << " es par." << endl;
    }else{
        cout << num << " es impar." << endl;
    }

    return 0;
}
