/*
                          INFORMATICA II
Grupo 04

Juan Sebastian Anaya Regino
CC: 1007545962

Ejercicio 3. Escriba un programa que pida dos números A y B e imprima en pantalla el mayor.
Ej: si se ingresan 7 y 3 se debe imprimir:
El mayor es 7

*/

#include <iostream>

using namespace std;

int main()
{
    int A; // A es la variable que almacenara el primer numero.
    int B; // B es la variable que almacenara el segundo numero.

    /* Se imprime en panatalla la funcion del programa */
    cout << "Este programa recibe dos numeros A y B e imprime en pantalla el mayor.\n\n";

    /* Se pide al usuario que ingrese el primer numero */
    cout << "Ingrese un numero(A): ";
    cin >> A;

    /* Se pide al usuario que ingrese el segundo numero */
    cout << "Ingrese un numero(B): ";
    cin >> B;

    /* Se verifica cual de los numeros ingresados es mayor */
    if(A>B)
        cout << "\nEl mayor es " << A << endl;
    else
        cout << "\nEl mayor es " << B << endl;

    cout << endl;

    return 0;
}
