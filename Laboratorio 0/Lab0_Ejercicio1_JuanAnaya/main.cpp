/*
 * Laboratorio 0 - Ejercicio 1
 * Juan Sebastian Anaya Regino
*/

#include <iostream>

using namespace std;

int main()
{
    int size; // Variable que almacenara el numero de filas de la figura.
    char letter='A'; // Variable auxiliar para las letras del alfabeto.

    // Se imprime la funcion del programa.
    cout << "Este programa recibe un numero entero y imprime una figura como la siguiente:\n"
            "              A           A\n"
            "              AB         BA\n"
            "              ABC       CBA\n"
            "              ABCD     DCBA\n"
            "              ABCDE   EDCBA\n"
            "              ABCDEF FEDCBA\n"
            "              ABCDEFGFEDCBA\n"
            "La figura anterior se muestra al ingresar el numero 7.\n" << endl;

    //  Se recibe y asigna a size el tamaño que se desea para la figura.
    cout << "Ingrese el tamano para la figura: ";
    cin >> size;

    // Aqui se imprime fila por fila el patron correspondiente al numero ingresado.
    for(int row=size; row>0; --row){
        // Este ciclo se encarga de imprimir las primeras letras de una fila.
        for(int aux=size; aux>=row; --aux){
            cout << letter++;
        }
        // Este ciclo se encarga de imprimir los espacios de una fila.
        for(int aux=1; aux<(row*2)-2; ++aux){
            cout << " ";
        }
        // Este ciclo se encarga de imprimir el segundo conjunto de letras de una fila.
        for(int aux=size; aux>=row; --aux){
            // Se verifica si se esta en la ultima fila, de ser el caso se omite repetir la letra central.
            if(row==1 && aux==size){
                letter--;
                continue;
            }
            cout << --letter;
        }
        cout << endl;
    }

    return 0;
}
