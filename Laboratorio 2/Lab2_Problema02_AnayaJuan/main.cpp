/*
 * Laboratorio 2 - Ejercicio 02
 * Juan Sebastian Anaya Regino
*/

#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main()
{
    char abecedario[26]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
    char arraygenerado[200];
    int nrandycontador;

    srand(time(NULL));

    /* Se imprime en pantalla la funcion del programa */
    cout << "Este programa genera un arreglo de letras aleatoreamente y lo imprime, ademas "
            "imprime cuantas veces se repite cada letra del arreglo.\n\n";

    // Aqui es generado un arreglo que contendrá 200 letras aleatorias entre A y Z.
    for(int i=0; i<200; i++){
        nrandycontador= rand()%26;
        arraygenerado[i]=abecedario[nrandycontador];
    }

    // Aqui es imprimido el arreglo generado anteriormente.
    cout << "Array: " << arraygenerado << "\n\n";

    // Aqui se buscara cuantas veces se repite cada letra del arreglo abecedario en el arreglo arraygenerado.
    for(int h=0; h<26; h++){
        nrandycontador=0;
        for(int i=0; i<200; i++){
            if(arraygenerado[i]==abecedario[h]){
                nrandycontador+=1;
            }
        }
        cout << abecedario[h] << ": " << nrandycontador << endl;
    }

    cout << endl;

    return 0;
}
