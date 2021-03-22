/*
                          INFORMATICA II
Grupo 04

Juan Sebastian Anaya Regino
CC: 1007545962

Ejercicio 2. Escriba un programa que pida un número N e imprima en pantalla si es par o impar.
Ej: si se ingresa 5 se debe imprimir:
5 es impar

*/

#include <iostream>

using namespace std;

int main()
{
    int N; // N es la variable que almacenara el numero ingresado.

    /* Se imprime en pantalla la funcion del programa */
    cout << "Este programa pide un numero e imprime en pantalla si es par o impar.\n\n";

    /* Se le pide al usuario que ingrese el numero a verificar */
    cout << "Ingrese un numero: ";
    cin >> N;

    /* Si N/0 es 0 significa que N es par, de lo contrario se concluye que es impar */
    if(N%2 == 0)
        cout << endl << N << " es par" << endl;
    else
        cout << endl << N << " es impar" << endl;

    cout << endl;

    return 0;
}
