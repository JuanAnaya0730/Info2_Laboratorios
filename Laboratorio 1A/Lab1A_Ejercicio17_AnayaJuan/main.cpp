/*
 * Laboratorio 1A - Ejercicio 17
 * Juan Sebastian Anaya Regino
*/

#include <iostream>

using namespace std;

int main()
{
    int numN; // Esta variable almacenara temporalmente el numero ingresado
    int big=0; // Esta variable almacenara el numero mayor que fue ingresado

    // Se imprime en patalla la funcio  del programa
    cout << "Este programa recibe constantemente numeros hasta que se ingrese el cero(0) "
            "e imprime en pantalla el mayor de todos los ingresados.\n" << endl;

    // Se crea un ciclo infinito
    while(true){

        // Se le pide al usuario que ingrese un numero
        cout << "Ingrese un numero: ";
        cin >> numN;

        // Si el numero ingresado anteriormente es cero(0) se rompe el ciclo
        if(!numN){
            break;
        }

        /* Se verifica si el numero ingresado es mayor que el valor de la variable 'mayor',
           si cumple con el codicional a mayor se lleva el valor de N */
        if(numN>big){
            big = numN;
        }
    }

    // Se imprime en pantalla el mayor de los numeros ingresados
    cout << "\nEl numero mayor fue: " << big << endl;

    return 0;
}
