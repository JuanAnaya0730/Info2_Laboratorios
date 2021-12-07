/*
 * Laboratorio 1A - Ejercicio 27
 * Juan Sebastian Anaya Regino
*/

#include <iostream>

using namespace std;

int main()
{
    float A; // A es la variable que almacenara el primer numero ingresado.
    char operador; // operador es la variables que decicidira cuan es la operacion a realizar.
    float B; // B es la variable que almacenara el segundo numero ingresado.

    /* Se imprime en pantalla la funcion del programa */
    cout << "Este programa actua como una calculadora con las operaciones de suma, resta "
            "multiplicacion y division.\nla sintaxis es la siguiente:\n"
            "Primer numero: A\n"
            "Operacion: +(suma) -(resta) x(multiplicion) /(division)\n"
            "Segundo numero: B\n\n";

    /* Se le pide al usuario que ingrese el primer numero a operar */
    cout << "Primer numero(A): ";
    cin >> A;

    /* Se le pide al usuario que ingrese la operacion que desea realizar */
    cout << "Operacion: ";
    cin >> operador;

    /* Se le pide al usuario que ingrese el segundo numero a operar */
    cout << "Segundo numero(B): ";
    cin >> B;

    /* Este codicional decidira que operacion efectuar */
    switch(operador){

    /* Si la variable operador es igual a + se efectuara la operacion suma */
    case '+':
        cout << endl << A << operador << B << "=" << A+B << endl;
        break;

    /* Si la variable operador es igual a - se efectuara la operacion resta */
    case '-':
        cout << endl << A << operador << B << "=" << A-B << endl;
        break;

    /* Si la variable operador es igual a x se efectuara la operacion producto */
    case 'x':
        cout << endl << A << operador << B << "=" << A*B << endl;
        break;

    /* Si la variable operador es igual a / se efectuara la operacion division */
    case '/':
        cout << endl << A << operador << B << "=" << A/B << endl;
        break;

    /* En caso de que no se ingrese una operacion valida se imprimira el mensaje
       respectivo */
    default:
        cout << "El operador ingresado no es valido." << endl;
    }

    return 0;
}
