/*
                          INFORMATICA II
Grupo 04

Juan Sebastian Anaya Regino
CC: 1007545962

Ejercicio 6. Escriba un programa que pida dos números A y B e imprima en pantalla la potencia
A^B, sin hacer uso de librerías matemáticas.
Ej: si se ingresan 5 y 3 se debe imprimir:
5^3=125

*/

#include <iostream>

using namespace std;

int main()
{
    int A; // A es la variable que almacenara el numero que sera la base.
    int B; // Variable que almacenara el numero que sera el exponente.
    int resultado=1; // Variable que almacena el resultado de a^b.

    /* Se imprime en pantalla la funcion del programa */
    cout << "Este programa recibe dos numeros A y B e imprime en pantalla la "
            "potencia de A^B.\n\n";

    /* Se le pide al usuario que ingrese el valor de la base */
    cout << "Ingrese el la base(A): ";
    cin >> A;

    /* Se le pide al usuario que ingrese el valor del exponente */
    cout << "ingrese el exponente(B): ";
    cin >> B;

    /* Se multiplia B veces A por si misma */
    for(int i=0; i<B; i++){
        resultado*=A;
    }

    /* Se imprime el resultado de A^B */
    cout << endl << A << '^' << B << '=' << resultado << endl;

    cout << endl;

    return 0;
}
