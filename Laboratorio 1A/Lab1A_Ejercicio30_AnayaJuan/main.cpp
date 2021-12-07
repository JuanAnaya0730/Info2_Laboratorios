/*
 * Laboratorio 1A - Ejercicio 30
 * Juan Sebastian Anaya Regino
*/

#include <iostream>

using namespace std;

int main()
{
    int a, n, i;

    a=rand()%100;
    i=0;

    cout << "Este programa genera un numero al azar. Adivina cual es!.\n\n";

    while (true){
        cout << "Ingrese un numero: ";
        cin >> n;
        i++;
        if (n==a){
            cout << "\n\n\n     Felicidades!.\nSolo te tomo " << i << " intentos.\n\n\n";
            break;
        }
        else if (n>a){
            cout << "Un poco menos.\n\n";
        }
        else{
            cout << "Un poco mas.\n\n";
        }
    }

    return 0;
}
