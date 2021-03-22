/*
                          INFORMATICA II
Grupo 04

Juan Sebastian Anaya Regino
CC: 1007545962

Ejercicio 1. Escriba un programa que pida dos números A y B e imprima en pantalla el residuo
de la división A/B.
Ej: si se ingresan 8 y 3 se debe imprimir:
El residuo de la division 8/3 es: 2

*/

#include <iostream>

using namespace std;

int main()
{
    int A; // A es la variables que almacenara el primer numero.
    int B; // B es la variables que almacenara el segundo numero.

    /* Se imprime en pantalla la funcion del programa */
    cout << "Este programa recibe dos numeros A y B e imprime en pantalla el residuo "
            "de la division A/B.\n\n";

    /* Se le pide al usuario que ingrese el primer numero */
    cout << "Ingrese un numero(A): ";
    cin >> A;

    /* Se le pide al usuario que ingrese el segundo numero */
    cout << "Ingrese un numero(B): ";
    cin >> B;

    /* Se imprime en pantalla el residuo de la division */
    cout << "\nEl residuo de la division " << A << '/' << B << " es: " << A%B << "\n\n";

    return 0;
}
