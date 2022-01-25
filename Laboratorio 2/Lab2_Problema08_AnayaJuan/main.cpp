/*
 * Laboratorio 2 - Ejercicio 08
 * Juan Sebastian Anaya Regino
*/

#include <iostream>

using namespace std;

int main()
{
    char cadena[200]={}, cNumeros[200]={}, cTexto[200]={};
    char *P_cadena = NULL, *P_cNumeros = NULL, *P_cTexto = NULL;

    //  Se imprime en pantalla la funcion del programa.
    cout << "Este programa recibe una cadena de caracteres y separa los caracteres numericos de los no numericos.\n\n";

    //  Se apunta hacia las cadenas de caracteres cNumeros y cTexto respectivamente.
    P_cNumeros=&cNumeros[0];
    P_cTexto=&cTexto[0];

    //  Se le pide al usuario que ingrese una cadena de caracteres.
    cout << "Ecriba la cadena de caracteres: ";
    cin >> cadena;

    //  Este ciclo se encargará de separar los caracteres numericos de la cadena original.
    for(int i=0; cadena[i]!='\0'; i++){
        P_cadena=&cadena[i];
        if(*P_cadena>=48 && *P_cadena<=57){
            *P_cNumeros=*P_cadena;
            P_cNumeros++;
        }
        else{
            *P_cTexto=*P_cadena;
            P_cTexto++;
        }
    }

    //  Se imprime en pantalla la cadena original.
    cout << "\nOriginal: " << cadena << endl;

    //  Se imprime en pantala una cadena con todos los caracteres no numericos de la cadena original.
    cout << "Texto: " << cTexto << endl;

    //  Se imprime en pantalla una cadena con todos los caracteres numericos de la cadena original.
    cout << "Numero: " << cNumeros << endl;

    cout << endl;

    return 0;
}
