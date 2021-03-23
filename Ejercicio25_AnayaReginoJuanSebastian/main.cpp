/*
                          INFORMATICA II
Grupo 04

Juan Sebastian Anaya Regino
CC: 1007545962

Ejercicio 25. Escriba un programa que pida un número N e imprima en pantalla la cantidad de
dígitos de N.
Ej: si se ingresa 1234 se debe imprimir:
1234 tiene 4 digitos.

*/

#include <iostream>

using namespace std;

int main()
{
    long long int N; // N es la variable que almacenara el numero ingresado.
    long long int cN; // cN sera una copia de la variable N.
    int C=0; // C es la variable que almacenara el numero de digitos que tenga N.

    /* Se imprime en pantalla la funcion del programa */
    cout << "Este programa recibe un numero y imprime la cantidad de "
            "digitos con los que cuenta.\n\n";

    /* Se pide al usuario que ingrese un numero */
    cout << "Ingrese un numero: ";
    cin >> N;

    /* Se hace una copia de la variable N */
    cN = N;

    /* Se crea un ciclo do while que ira reduciendo la variable N hasta llegar a 0,
       al mismo tiempo se va aumentando la variable C */
    do {
        C++;
        cN = cN/10;
    } while (cN > 0);

    /* Se imprime en pantalla el numero de digitos de N */
    cout << endl << N << " tiene " << C << " digitos." << endl;

    cout << endl;

    return 0;
}
