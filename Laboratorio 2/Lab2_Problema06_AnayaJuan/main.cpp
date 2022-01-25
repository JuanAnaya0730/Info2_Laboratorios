/*
 * Laboratorio 2 - Ejercicio 06
 * Juan Sebastian Anaya Regino
*/

#include <iostream>

using namespace std;

int main()
{
    char cadena[200]="", *P_posicion;

    //  Se imprime en pantalla la funcion del programa.
    cout << "Este programa recibe una cadena de caracteres y cambia las letras minusculas por mayusculas.\n"
            "Nota: Los caracteres diferentes a letras minusculas no seran modificados.\n\n";

    //  Se le pide al usuario que ingrese una cadena de caracteres.
    cout << "Escriba la cadena de caracteres: ";
    cin >> cadena;

    //  Aqui se imprime la cadena original.
    cout << "\nOriginal: " << cadena <<  endl;

    //  Este ciclo se encarga de ir cambiando una a una las letras minusculas por mayusculas.
    for(int i=0; cadena[i]!='\0'; i++){
        P_posicion=&cadena[i];
        if(*P_posicion>=97 && *P_posicion<=122){
            *P_posicion-=32;
        }
    }

    //  Aqui se imprime la cadena ingresada convertida a mayuscula.
    cout << "En mayuscula: " << cadena << endl;

    cout << endl;

    return 0;
}
