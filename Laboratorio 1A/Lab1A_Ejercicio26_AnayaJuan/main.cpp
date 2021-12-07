/*
 * Laboratorio 1A - Ejercicio 26
 * Juan Sebastian Anaya Regino
*/

#include <iostream>

using namespace std;

int main()
{
    int a, b, c;

    cout << "Este programa pide tres numeros y dira que tipo de triangulo se forma con los numeros ingresados.\n\n";
    cout << "Ingrese el primer numero: ";
    cin >> a;
    cout << "Ingrese el segundo numero: ";
    cin >> b;
    cout << "Ingrese el tercer numero: ";
    cin >> c;

    //p==false;

    if (a+b>c){
        if (a+c>b){
            if (b+c>a){
                if (a==b and b==c){
                    cout << "\nSe forma un triangulo equilatero.\n\n\n";
                }
                else if(a!=b and b!=c){
                    cout << "\nSe forma un triangulo escaleno.\n\n\n";
                }
                else {
                    cout << "\nSe forma un triangulo isoceles.\n\n\n";
                }

            }
            else{
                cout << "\nLas longitudes ingresadas no forman un triangulo.\n\n\n";
            }
        }
        else{
            cout << "\nLas longitudes ingresadas no forman un triangulo.\n\n\n";
        }
    }
    else{
        cout << "\nLas longitudes ingresadas no forman un triangulo.\n\n\n";
    }
    return 0;
}
