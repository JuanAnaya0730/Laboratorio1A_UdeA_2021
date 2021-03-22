/*
                          INFORMATICA II
Grupo 04

Juan Sebastian Anaya Regino
CC: 1007545962

Ejercicio 15. Escriba un programa que pida constantemente números hasta que se ingrese el
número cero e imprima en pantalla la suma de todos los números ingresados.

Ej: si se ingresan 1, 2, 3, 0 se debe imprimir:
El resultado de la sumatoria es: 6

*/

#include <iostream>

using namespace std;

int main()
{
    int N; // N es la variable que almacenara temporalmente cada numero ingresado.
    int total=0; // total es la variable que almacenara la suma de los numeros ingresados.

    /* Se imprime en pantalla la funcion del programa */
    cout << "Este programa recibe constantemente numeros hasta que se ingrese el cero(0) "
            "e imprime en pantalla la suma de todos los numeros ingresados.\n\n";

    /* Se crea un ciclo infinito */
    while(true){

        /* Se le pide al usuario que ingrese un numero */
        cout << "Ingrese un numero: ";
        cin >> N;

        /* Si el numero ingresado anteriormente es cero(0) se rompe el ciclo */
        if(N == 0){
            break;
        }

        /* En caso de pasar el condicional anterior se suma el numero ingresado
           al valor de la variable total */
        total+=N;
    }

    /* Se imprime la sumatoria de los numeros ingresados */
    cout << "\nEl resultado de la sumatoria es: " << total << endl;

    cout << endl;

    return 0;
}
