/*
 * Laboratorio 1A - Ejercicio 23
 * Juan Sebastian Anaya Regino
*/

#include <iostream>

using namespace std;

int main()
{
    int numA; // Esta variable almacenara el primer numero ingresado
    int numB; // Esta variable almacenara el segundo numero ingresado
    int MCM = 0; // Esta variable almacenara el minimo comun mitiplo entre numA y numB

    // Se imprime en pantalla la funcion del programa
    cout << "Este programa recibe dos numeros A y B e imprime en pantalla el "
            "M.C.M(minimo comun multiplo) entre A y B.\n" << endl;

    // Se le pide al usuario que ingrese el primer numero
    cout << "Ingrese un numero(A): ";
    cin >> numA;

    // Se le pide al usuario que ingrese el segundo numero
    cout << "Ingrese un numero(B): ";
    cin >> numB;

    // Se crea un for que se dentendra solo cuando se encuentre el M.C.M
    for(int i=1; MCM == 0 ; ++i){
        for(int j=1; ; ++j){
            // Si B*j es mayor que A*i se rompe el ciclo ya que A*i no va a ser el M.C.M
            if(numB*j > numA*i){
                break;
            }
            // Si B*j es igua a A*i se ha encontrado el M.C.M entre A y B y sera justamente A*i o B*j
            if(numB*j == numA*i){
                MCM=numA*i;
            }
        }
    }

    // Se imprime en pantalla en M.C.M entre A y B
    cout << "\nEl MCM de " << numA << " y " << numB << " es: " << MCM << endl;

    return 0;
}
