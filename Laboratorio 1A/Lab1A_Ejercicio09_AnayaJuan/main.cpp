/*
 * Laboratorio 1A - Ejercicio 09
 * Juan Sebastian Anaya Regino
*/

#include <iostream>

using namespace std;

#define pi 3.1416 // Valor constante para π

int main()
{
    int radius; // Esta variable almacenara el radio del circulo

    /* Se imprime en pantalla la funcion del programa */
    cout << "Este programa recibe un numero N e imprime el perimetro y area de "
            "un circulo con radio N.\n" << endl;

    // Se le pide al usuario que ingrese el radio del circulo
    cout << "Ingrese el radio del circulo: ";
    cin >> radius;

    // Se imprime en pantalla el perimetro usando la formula P=2πr
    cout << "\nPerimetro: " << 2*pi*radius << endl;

    // Se imprime en pantalla el area usando la formula A=π(r^2)
    cout << "Area: " << pi*radius*radius << endl;

    return 0;
}
