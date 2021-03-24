/*
                          INFORMATICA II
Grupo 04

Juan Sebastian Anaya Regino
CC: 1007545962

Ejercicio 18. Escriba un programa que pida un número N e imprima si es o no un cuadrado perfecto.
Ej: si se ingresa 9 se debe imprimir:
9 es un cuadrado perfecto.
y si se ingresa 8 se debe imprimir:
8 NO es un cuadrado perfecto.

Analisis de Variables.
n: Variable que almacenara el numero que se quiere saber si es cuadrado perfecto.
r: Variable auxuliar.
i: Variable auxiliar.

*/

#include <iostream>

using namespace std;

int main()
{
    int n, r, i;

    cout << "Ingrese un numero: ";
    cin >> n;

    r=0;

    for (i=1; r<n; i++){
        r=i*i;
    }
    if (r==n){
        cout << "\n" << n << " es un cuadrado perfecto.\n\n\n";
    }
    else{
        cout << "\n" << n << " NO es un cuadrado perfecto.\n\n\n";
    }

    return 0;
}
