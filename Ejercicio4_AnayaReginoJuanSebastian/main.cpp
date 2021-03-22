/*
                          INFORMATICA II
Grupo 04

Juan Sebastian Anaya Regino
CC: 1007545962

Ejercicio 4. Escriba un programa que pida dos números A y B e imprima en pantalla el menor.
Ej: si se ingresan 7 y 3 se debe imprimir:
El menor es 3

*/

#include <iostream>

using namespace std;

int main()
{
    int A; // A es la variable que almacenara el primer numero.
    int B; // B es la variable que almacenara el segundo numero.

    /* Se imprime en panatalla la funcion del programa */
    cout << "Este programa recibe dos numeros A y B e imprime en pantalla el menor.\n\n";

    /* Se pide al usuario que ingrese el primer numero */
    cout << "Ingrese un numero(A): ";
    cin >> A;

    /* Se pide al usuario que ingrese el segundo numero */
    cout << "Ingrese un numero(B): ";
    cin >> B;

    /* Se verifica cual de los numeros ingresados es menor */
    if(A<B)
        cout << "\nEl menor es " << A << endl;
    else
        cout << "\nEl menor es " << B << endl;

    cout << endl;

    return 0;
}
