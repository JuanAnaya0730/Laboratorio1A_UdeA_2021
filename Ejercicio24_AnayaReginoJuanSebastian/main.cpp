/*
                          INFORMATICA II
Grupo 04

Juan Sebastian Anaya Regino
CC: 1007545962

Ejercicio 24. Escriba un programa que pida una número entero e imprima un cuadrado de dicho
tamaño, los bordes del cuadrado deben estar hechos con el carácter `+' y el interior debe estar vacío.
Ej: si se ingresa 4 se debe imprimir:
++++
+  +
+  +
++++

Analisis de Variables.
n: Variable que contendra el tamaño de los bordes del cuadrado.
i: Variable auxiliar.
h: variable auxiliar.

*/

#include <iostream>

using namespace std;

int main()
{
    int n;

    /* Se imprime en panatalla la funcion del programa*/
    cout << "Este  programa pide un numero y imprime un cuadro del tamano del numero ingresado.\n\n";

    /* Se le pide al usuario que ingrese un numero */
    cout << "Ingrese un numero: ";
    cin >> n;
    cout << "\n";

    for (int i=1; i<=n; i++){
        cout << "+";
    }
    for (int i=1; i<=n-2; i++){
        cout << "\n+";
        for (int h=1; h<=n-2; h++){
            cout << " ";
        }
        cout << "+";
    }

    cout << endl;

    for (int i=1; i<=n; i++){
        cout << "+";
    }
    cout << "\n\n\n";

    return 0;
}
