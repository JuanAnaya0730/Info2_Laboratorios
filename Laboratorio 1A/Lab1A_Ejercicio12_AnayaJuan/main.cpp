/*
 * Laboratorio 1A - Ejercicio 12
 * Juan Sebastian Anaya Regino
*/

#include <iostream>

using namespace std;

int main()
{
    int numN; // Esta variable almacenara el numero al que se le calcularan las potencias
    int power = 1; // Esta variable irá almacenando las potencias de numN

    // Se imprime en panatalla la funcion del programa
    cout << "Este progrma recibe un numero N e imprime en pantalla todas sus"
            "las potencias hasta N^5.\n" << endl;

    // Se le pide al usuario que ingrese un numero
    cout << "Ingrese un numero: ";
    cin >> numN;

    // Este ciclo se encargara de calcular y imprimir las potencias de numN hasta numN^5
    for(int aux=1; aux<=5; ++aux){
        power*=numN;
        cout << numN << "^" << aux << "=" << power << endl;
    }

    return 0;
}
