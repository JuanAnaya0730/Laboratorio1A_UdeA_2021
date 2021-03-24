/*
                          INFORMATICA II
Grupo 04

Juan Sebastian Anaya Regino
CC: 1007545962

Ejercicio 8. Escriba un programa que pida un número N e imprima en pantalla su factorial.
Ej: si se ingresa 5: 5!=1*2*3*4*5=120, por lo que se debe imprimir:
5!=120

*/

#include <iostream>

using namespace std;

int main()
{
    int N; // N es la variable que almacenara el numero al que se le calculara el factorial.
    int resultado=1; // resultado es la Variable que almacenara el factorial del numero que se ingreso.

    /* Se imprime en pantalla la funcion del programa */
    cout << "Este programa recibe un numero N e imprime en pantalla su factorial.\n\n";

    /* Se le pide al usuario que ingrese un numero */
    cout << "Ingrese un numero: ";
    cin >> N;

    for(int i=1; i<=N; i++){
        resultado*=i;
    }

    /* Se imprime en pantalla el factorial de N */
    cout << endl << N << "!=" << resultado << endl;

    cout << endl;

    return 0;
}
