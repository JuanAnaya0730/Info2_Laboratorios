/*
 * Laboratorio 1A - Ejercicio 19
 * Juan Sebastian Anaya Regino
*/

#include <iostream>

using namespace std;

int main()
{
    int numN; // Esta variable almacenara el numero ingresado
    bool primo = true; // Esta variable determinara si el numero ingresado es primo o no

    // Se imprime en pantalla la funcion del programa
    cout << "Este programa recibe un numero entero e imprime en pantalla si es o no un "
            "numero primo.\n" << endl;

    // Se le pide al usuario que ingrese un numero
    cout << "Ingrese un numero: ";
    cin >> numN;

    /* Se determina si el numero tiene algun divisor diferente de el mismo, en ese caso
       el estado de la variable 'primo' cambiara de true a false */
    for(int aux=2; aux<numN; ++aux){
        if(!(numN%aux)){
            primo = false;
            break;
        }
    }

    /* Si el estado de la variable 'primo' es true se imprime en pantalla que numN es primo,
       de lo contrario se imprimira que numN no es primo */
    if(primo){
        cout << numN << " es un numero primo." << endl;
    }else{
        cout << numN << " NO es un numero primo." << endl;
    }

    return 0;
}
