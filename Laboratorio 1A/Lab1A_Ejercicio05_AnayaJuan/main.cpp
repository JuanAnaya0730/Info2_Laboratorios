/*
 * Laboratorio 1A - Ejercicio 05
 * Juan Sebastian Anaya Regino
*/

#include <iostream>

using namespace std;

int main()
{
    float dividend; // Esta variable almacena el dividendo.
    float divisor; // Esta variable almacena el divisor.

    // Se imprime en pantalla la funcion del programa */
    cout << "Este programa recibe dos numeros enteros A y B e imprime en pantalla la division "
            "A/B con redondeo.\n" << endl;

    //Se le pide al usuario que ingrese el primer numero
    cout << "Ingrese un numero para A: ";
    cin >> dividend;

    // Se le pide al usuario que ingrese el segundo numero
    cout << "Ingrese un numero para B: ";
    cin >> divisor;

    /* Se divide A/B y se multiplica el resultado por 10, luego se toma la parte entera
       de esa operacion y se le aplica la operacion % con 10. Si el resultado es mayor
       igual a 5 indica que se debera tomar el mayor entero mas uno(1) de A/B, de lo
       contrario solo se tomara el mayor entero de A/B. */
    if(int(dividend/divisor*10)%10 >= 5){
        cout << dividend << '/' << divisor << '=' << int(dividend/divisor)+1 << endl;
    }else{
        cout << dividend << '/' << divisor << '=' << int(dividend/divisor) << endl;
    }

    return 0;
}
