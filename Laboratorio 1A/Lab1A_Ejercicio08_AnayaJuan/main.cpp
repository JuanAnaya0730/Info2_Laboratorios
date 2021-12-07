/*
 * Laboratorio 1A - Ejercicio 08
 * Juan Sebastian Anaya Regino
*/

#include <iostream>

using namespace std;

int main()
{
    int numN; // Esta variable almacenara el numero al que se le calculara el factorial
    int result = 1; // esta variable almacenara el factorial del numero que se ingreso

    // Se imprime en pantalla la funcion del programa
    cout << "Este programa recibe un numero entero e imprime en pantalla su factorial.\n" << endl;

    // Se le pide al usuario que ingrese un numero
    cout << "Ingrese un numero: ";
    cin >> numN;

    // Aqui se multiplican todos los numeros entre 1 y el valor de numN
    for(int aux=1; aux<=numN; ++aux){
        result *= aux;
    }

    // Se imprime en pantalla el factorial de numN
    cout << numN << "!=" << result << endl;

    return 0;
}
