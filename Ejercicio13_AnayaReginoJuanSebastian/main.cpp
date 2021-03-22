/*
                          INFORMATICA II
Grupo 04

Juan Sebastian Anaya Regino
CC: 1007545962

Ejercicio 13. Escriba un programa que pida un número N e imprima todos los divisores de N.
Ej: si se ingresa 4 se debe imprimir:
Los divisores de n son:
1
2
4

*/

#include <iostream>

using namespace std;

int main()
{
    int N; // N es la variable que almacenara el numero ingresado.

    /* Se imprime en pantalla la funcion del progrma */
    cout << "Este programa recibe un numero N e imprime todos sus divisores.\n\n";

    /* Se le pide ak usuario que ingrese un numero */
    cout << "Ingrese un numero: ";
    cin >> N;

    /* Se imprimen en pantalla los divisores de N */
    cout << "\nLos divisores de " << N << " son:\n";
    for(int i=1; i<=N; ++i){
        if(N%i == 0){
            cout << i << endl;
        }
    }

    cout << endl;

    return 0;
}
