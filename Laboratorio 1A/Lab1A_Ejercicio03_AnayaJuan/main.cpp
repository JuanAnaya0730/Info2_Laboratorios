/*
 * Laboratorio 1A - Ejercicio 03
 * Juan Sebastian Anaya Regino
*/

#include <iostream>

using namespace std;

int main()
{
    float numA; // Esta variable almacena el 1er numero
    float numB; // Esta variable almacena el 2do numero

    // Se imprime la funcion del programa
    cout << "Este programa recibe dos numeros diferentes e "
            "imprime en pantalla cual es el mayor.\n" << endl;

    // Se le pide al usuario que ingrese el el primer numero
    cout << "Ingrese el 1er numero: ";
    cin >> numA;

    // Se le pide al usuario que ingrese el segundo numero
    cout << "Ingrese el 2do numero: ";
    cin >> numB;

    // Se verfica que numero es mayor
    if(numA>numB){
        cout << "\nEl mayor es " << numA << endl;
    }else{
        cout << "\nEl mayor es " << numB << endl;
    }

    return 0;
}
