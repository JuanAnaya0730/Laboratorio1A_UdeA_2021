/*
                          INFORMATICA II
Grupo 04

Juan Sebastian Anaya Regino
CC: 1007545962

Ejercicio 19. Escriba un programa que pida un número N e imprima si es o no un número primo.
Ej: si se ingresa 7 se debe imprimir:
7 es un numero primo.
y si se ingresa 8 se debe imprimir:
8 NO es un numero primo.

*/

#include <iostream>

using namespace std;

int main()
{
    int N; // N es la variable que almacenara el numero ingresado.
    bool primo = true; // primo es la variable que determinara si el numero ingresado es primo o no.

    /* Se imprime en pantalla la funcion del programa */
    cout << "Este programa recibe un numero N e imprime en pantalla si es o no un "
            "numero primo.\n\n";

    /* Se le pide al usuario que ingrese un numero */
    cout << "Ingrese un numero: ";
    cin >> N;

    /* Se determina si el numero tiene algun divisor diferente de el mismo, en ese caso
       el estado de la variable 'primo' cambiara de true a false */
    for(int i=2; i<N; ++i){
        if(N%i == 0){
            primo = false;
            break;
        }
    }

    /* Si el estado de la variable 'primo' es true se imprime en pantalla que N es primo,
       de lo contrario se imprimira que N no es primo */
    if(primo){
        cout << endl << N << " es un numero primo." << endl;
    }
    else{
        cout << endl << N << " NO es un numero primo." << endl;
    }

    cout << endl;

    return 0;
}
