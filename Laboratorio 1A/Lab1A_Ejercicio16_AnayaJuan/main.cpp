/*
 * Laboratorio 1A - Ejercicio 16
 * Juan Sebastian Anaya Regino
*/

#include <iostream>

using namespace std;

int main()
{
    float numN; // Esta variable almacenara un numero hasta que se ingrese otro
    float summation = 0; // Esta variable almacenara la suma de todos los numeros ingresados
    float countData = 0; // Esta variable contara el numero de datos ingresados

    // Se imprime en pantalla la funcion del programa
    cout << "Este programa recibe constantemente numeros hasta que que se ingrese el cero(0), "
            "luego imprime en pantalla el promedio de todos los numeros ingresados.\n" << endl;

    while(true){

        // Se le pide al usuario que ingrese un numero
        cout << "Ingrese un numero: ";
        cin >> numN;

        // Si el numero ingresado es 0 se rompe el ciclo
        if (!numN){
            break;
        }

        summation += numN;
        countData++;
    }

    // Si se ingreso el cero como primer numero se imprime el correspondiente mensaje
    if (!countData){
        cout << "\nNo hay datos para calcular un promedio." << endl;
    } // Se imprime en pantalla el promedio de los numeros ingresados
    else{
        cout << "\nEl promedio es: " << summation/countData << endl;
    }

    return 0;
}
