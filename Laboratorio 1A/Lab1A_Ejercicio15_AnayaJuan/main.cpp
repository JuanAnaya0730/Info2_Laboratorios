/*
 * Laboratorio 1A - Ejercicio 15
 * Juan Sebastian Anaya Regino
*/

#include <iostream>

using namespace std;

int main()
{
    int numN; // Esta variable almacenara temporalmente cada numero ingresado
    int total = 0; // Esta variable almacenara la suma de los numeros ingresados

    // Se imprime en pantalla la funcion del programa
    cout << "Este programa recibe constantemente numeros hasta que se ingrese el cero(0) "
            "e imprime en pantalla la suma de todos los numeros ingresados.\n" << endl;

    // Se crea un ciclo infinito
    while(true){

        // Se le pide al usuario que ingrese un numero
        cout << "Ingrese un numero: ";
        cin >> numN;

        // Si el numero ingresado anteriormente es cero(0) se rompe el ciclo
        if(!numN){
            break;
        }

        // En caso de pasar el condicional anterior se suma el numero ingresado al valor de la variable total
        total+=numN;
    }

    // Se imprime la sumatoria de los numeros ingresados
    cout << "\nEl resultado de la sumatoria es: " << total << endl;

    return 0;
}
