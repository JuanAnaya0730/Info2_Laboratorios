/*
 * Laboratorio 1A - Ejercicio 21
 * Juan Sebastian Anaya Regino
*/

#include <iostream>

using namespace std;

int main()
{
    char charC; // Esta variable almacenara el caracter ingresado

    // Se imprime en pantalla la funcion del programa
    cout << "Este programa recibe un caracter C, si es una letra minuscula se imprimira "
            "tramsformada en mayuscula y viceversa.\n" << endl;

    // Se le pide al usuario que ingrese un caracter
    cout << "Ingrese un caracter: ";
    cin >> charC;

    /* Se verifica si el caracter ingresado es una letra mayuscula, en ese caso
       se le sumara el numero 32 a la letra para transformarla en minuscula */
    if(charC>=65 && charC<=90){
        // Se imprime la letra transformada en minuscula
        cout << "\nLetra convertida: " << char(charC+32) << endl;
    }

    /* En caso de que no sea una letra mayuscula se verifica si es una letra minuscula,
       de ser asi se le restara el numero 32 a la letra para transformala en mayuscula */
    else if(charC>=97 && charC<=122) {
        /* Se imprime la letra transformada en mayuscula */
        cout << "\nLetra convertida: " << char(charC-32) << endl;
    }

    /* En caso de que el caracter ingresado no se a una letra se imprimira el
       respectivo mensaje en pantalla */
    else{
        cout << "\nEl caracter ingresado no es una letra." << endl;
    }

    return 0;
}
