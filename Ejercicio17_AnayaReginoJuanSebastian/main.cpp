/*
                          INFORMATICA II
Grupo 04

Juan Sebastian Anaya Regino
CC: 1007545962

Ejercicio 17. Escriba un programa que pida constantemente números hasta que se ingrese el
número cero e imprima en pantalla el mayor de todos los números ingresados.
Ej: si se ingresan 1, 2, 3, 0 se debe imprimir:
El numero mayor fue: 3

*/

#include <iostream>

using namespace std;

int main()
{
    int N; // N es la variable que almacenara temporalmente el numero ingresado.
    int mayor=0; // mayor es la variable que almacenara el numero mayor que fue ingresado.

    /* Se imprime en patalla la funcio  del programa */
    cout << "Este programa recibe constantemente numeros hasta que se ingrese el cero(0) "
            "e imprime en pantalla el mayor de todos los ingresados.\n\n";

    /* Se crea un ciclo infinito */
    while(true){

        /* Se le pide al usuario que ingrese un numero */
        cout << "Ingrese un numero: ";
        cin >> N;

        /* Si el numero ingresado anteriormente es cero(0) se rompe el ciclo */
        if(N == 0){
            break;
        }

        /* Se verifica si el numero ingresado es mayor que el valor de la variable 'mayor',
           si cumple con el codicional a mayor se lleva el valor de N */
        if(N>mayor){
            mayor = N;
        }
    }

    /* Se imprime en pantalla el mayor de los numeros ingresados */
    cout << "\nEl numero mayor fue: " << mayor << endl;

    cout << endl;

    return 0;
}
