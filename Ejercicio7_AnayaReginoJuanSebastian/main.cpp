/*
                          INFORMATICA II
Grupo 04

Juan Sebastian Anaya Regino
CC: 1007545962

Ejercicio 7. Escriba un programa que pida un número N e imprima en pantalla la suma de todos
los números entre 0 y N (incluyéndose el mismo).
Ej: si se ingresa 5: 1+2+3+4+5=15, por lo que se debe imprimir:
La sumatoria desde 0 hasta 5 es: 15

*/

#include <iostream>

using namespace std;

int main()
{
    int N; // N es la variable que almacenara el numero ingresado.
    int total=0; // total es la variable que almacenara la suma desde 0 hasta N.

    /* Se imprime en pantalla la funcion del programa */
    cout << "Este programa recibe un numero N e imprime en pantalla la suma de todos "
            "los enteros entre 0 y N(Incluyendo N).\n\n";

    /* Se le pide al usuario que ingrese un numero */
    cout << "Ingrese un numero: ";
    cin >> N;

    for(int i=1; i<=N; ++i){
        total += i;
    }

    cout << "\nLa sumatoria desde 0 hasta " << N << " es: " << total << endl;

    cout << endl;

    return 0;
}
