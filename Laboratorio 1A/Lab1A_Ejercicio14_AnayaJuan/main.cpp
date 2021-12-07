/*
 * Laboratorio 1A - Ejercicio 14
 * Juan Sebastian Anaya Regino
*/

#include <iostream>

using namespace std;

int main()
{
    // Se imprime en pantalla la funcion de programa
    cout << "Este programa imprime en pantalla dos columnas paralelas, una con los numeros "
            "del 1 al 50 y otra con los numeros de 50 al 1.\n" << endl;

    // Este ciclo se encargara de imprimir las dos columnas
    for(int columnA=1, columnB=50; columnA<=50; ++columnA, --columnB){
        if(columnA<10){
            cout << columnA << "     " << columnB << endl; // Un espacio demas
        }else{
            cout << columnA << "    " << columnB << endl;
        }
    }

    return 0;
}
