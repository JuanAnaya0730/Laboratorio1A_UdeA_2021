/*
                          INFORMATICA II
Grupo 04

Juan Sebastian Anaya Regino
CC: 1007545962

Ejercicio 11. Escriba un programa que pida un número N e imprima en pantalla su tabla de mul-
tiplicar hasta 10xN.
Ej: si se ingresa 7 se debe imprimir:
1x7=7
2x7=14
3x7=21
4x7=28
5x7=35
6x7=42
7x7=49
8x7=56
9x7=63
10x7=70

*/

#include <iostream>

using namespace std;

int main()
{
    int N; // N es la variable que almacenara el numero ingresado.

    /* Se imprime en panatalla la funcion del programa */
    cout << "Este programa recibe un numero N e imprime en pantalla su tabla de multiplicar "
            "hasta 10xN.\n\n";

    /* Se le pide al usuario que ingrese un numero */
    cout << "Ingrese un numero: ";
    cin >> N;

    for(int i=1; i<=10 ; ++i){
        cout << i << 'x' << N << '=' << i*N << endl;
    }

    cout << endl;

    return 0;
}
