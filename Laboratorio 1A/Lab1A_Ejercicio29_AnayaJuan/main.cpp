/*
 * Laboratorio 1A - Ejercicio 29
 * Juan Sebastian Anaya Regino
*/

#include <iostream>

using namespace std;

int main()
{
    int A=rand()%101; // A es la variable que almacenara el numero generado aleatoreamente.
    char rango; // rango es la variable que almacenara el caracter que indicara si el numero es <, > o =.

    /* Se imprime en pantalla la funcion del programa */
    cout << "Este programa adivina un numero entre 0 y 100 seleccionado por el usuario, "
            "el programa imprimira en pantalla un posible numero igual al pensado por el "
            "usuario, este debera indicarle al programa si el numero mostrado es mayor, "
            "menor o igual al que penso por medio de los simbolos >, < y =.\n\n";

    /* Se crea un ciclo infinito */
    while(true){

        /* Se imprime en panatalla el numero generado aleatoreamente */
        cout << "El numero es " << A << "?" << endl;

        /* se le pide al usuario que ingres si el numero es >, < o = */
        cout << "No, es: ";
        cin >> rango;

        /* Se limpia la terminal */
        system("cls");

        /* Si el usuario ingresa > se generara otro numero aleatorio entre A y 100 */
        if(rango == '>'){
            A = A+rand()%(101-A);
        }

        /* Si el usuario ingresa < se generara otro numero aleatorio entre 0 y A */
        else if(rango == '<'){
            A = rand()%(A+1);
        }

        /* Si el usuario ingresa = se cocluye que el numero fue adivinado y se finaliza el programa */
        else{
            cout << "Numero adivinado." << endl;
            break;
        }
    }

    cout << endl;

    return 0;
}
