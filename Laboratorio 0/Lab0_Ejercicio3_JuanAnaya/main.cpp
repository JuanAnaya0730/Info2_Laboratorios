/*
 * Laboratorio 0 - Ejercicio 3
 * Juan Sebastian Anaya Regino
*/

#include <iostream>

using namespace std;

int main()
{
    int num; // Variable que almacenara el numero ingresado.
    int result = 0; // Variable que almacenara el resultado de los calculos.

    // Se imprime la funcion del programa.
    cout << "Esta programa recibe un numero entero y muestra el resultado de "
            "todos sus digitos elevados a si mismos.\n" << endl;

    // Se pide al usuario que ingrese un numero.
    cout << "Ingrese un numero: ";
    cin >> num;

    // Este ciclo se encarga de separar los digitos de un numeros para elevevarlos a si mismos y sumarlos.
    for(int digit=num%10; num>0; digit=num%10){
        num /= 10; // Se quita el ultimo digito del numero en cada iteracion.
        // Este ciclo se encarga de elevar un numero a si mismo.
        for(int aux=0, expo=digit; aux<digit; ++aux){
            if(aux==digit-1){
                result += expo; // Se suma el valor calculado a la varible result.
                break;
            }
            // Se multiplica el numero por si mismo.
            expo*=digit;
        }
    }

    // Se muestra el resultado de los calculos en pantalla.
    cout << "El resultado es: " << result << endl;

    return 0;
}
