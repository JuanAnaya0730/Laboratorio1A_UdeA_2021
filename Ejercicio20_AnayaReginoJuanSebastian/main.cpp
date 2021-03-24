/*
                          INFORMATICA II
Grupo 04

Juan Sebastian Anaya Regino
CC: 1007545962

Ejercicio 20. Escriba un programa que pida un número N e imprima si es o no un palíndromo
(igual de derecha a izquierda que de izquierda a derecha).
Ej: si se ingresa 121 se debe imprimir:
121 es un numero palindromo.
y si se ingresa 123 se debe imprimir:
123 NO es un numero palindromo.

Analisis de Variables.
n: Variable que almacenara el numero que se desea comprobar se es capicúa(palindromo).
i: Variable que almacenara cada uno  de los digitos de n.
h: Variable que almacenara el numero n al revés.
c: Variable que almacenara una copia de n.

*/

#include <iostream>

using namespace std;

int main()
{
    int n, i, h, c;

    cout << "Ingrese un numero: ";
    cin >> n;

    c=n;

    while(c>0){
        i=c%10;
        c=c/10;
        h=h*10+i;
    }
    if (h==n){
        cout << "\n" << n << " es un numero capicua.\n\n\n";
    }
    else{
        cout << "\n" << n << " NO es un numero capicua.\n\n\n";
    }

    return 0;
}
