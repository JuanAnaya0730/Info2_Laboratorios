/*
 * Laboratorio 1A - Ejercicio 20
 * Juan Sebastian Anaya Regino
*/

#include <iostream>

using namespace std;

int main()
{
    int n, i, h=0, c;

    cout << "Ingrese un numero: ";
    cin >> n;

    c=n;

    while(c>0){
        i=c%10;
        c=c/10;
        h = (h*10)+i;
    }
    if(h==n){
        cout << n << " es un numero capicua." << endl;
    }else{
        cout << n << " NO es un numero capicua." << endl;
    }

    return 0;
}
