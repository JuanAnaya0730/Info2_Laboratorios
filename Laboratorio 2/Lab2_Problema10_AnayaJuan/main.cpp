/*
 * Laboratorio 2 - Ejercicio 10
 * Juan Sebastian Anaya Regino
*/

#include <iostream>

using namespace std;

int main()
{
    int arabigos[7]={1000,500,100,50,10,5,1}, numero=0, b=0, s=0;
    char romanos[7]={'M','D','C','L','X','V','I'}, a[200]="", *ptr=NULL, *ptr2=NULL;

    // Se imprime en pantalla la funcion del programa
    cout << "Este programa convierte numeros romanos a su equivalente en decimal.\n"
            "NOTA: Ingrese el numero romano en letras mayusculas.\n\n";

    // Se le pide al usuario que ingrese el numero romano a convertir
    cout << "Ingrese el numero romano: ";
    cin >> a;

    // Este ciclo se encargara de convertor el numero ingresado a decimal
    for(int i=0; a[i]!='\0'; i+=2){
        for(int h=0; h<7; h++){
            if(a[i]==romanos[h]){
                ptr=&romanos[h];
                b=arabigos[h];
                break;
            }
        }

        for(int h=0; h<7; h++){
            if(a[i+1]==romanos[h]){
                ptr2=&romanos[h];
                s=arabigos[h];
                break;
            }
        }

        if(ptr<=ptr2)
            numero+=(b+s);
        else
            numero+=(s-b);
        b=0;
        s=0;
    }

    // Se imprime en pantalla el numero ingresado
    cout << "\nIngresado fue: " << a << endl;

    // Se imprime el numero romano convertido a decimal
    cout << "Que corresponde a: " << numero << endl;

    cout << endl;

    return 0;
}
