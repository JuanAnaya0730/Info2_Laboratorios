/*
 * Laboratorio 1A - Ejercicio 28
 * Juan Sebastian Anaya Regino
*/

#include <iostream>

using namespace std;

int main()
{
    float N; // N variable que decidira el numero de datos que se usaran para la aproximacion
    int signo=1; // signo es la variable que decidira el signo de la sumatoria
    float sumatoria=0; // sumatoria es la variable que almacenara la suma de los n datos de la suma infinita.

    cout << "Este programa calcula el valor aproximado de PI dependiendo del numero que sea ingresado.\n\n";

    cout << "Ingrese un numero: ";
    cin >> N;

    for(float i=1; i<N*2 ; i+=2){
        if(signo%2 == 0){
            sumatoria -= (1/i);
        }
        else{
            sumatoria += (1/i);
        }
        signo++;
    }

    cout << endl <<  4*sumatoria << endl;

    cout << endl;

    return 0;
}
