/*
                          INFORMATICA II
Grupo 04

Juan Sebastian Anaya Regino
CC: 1007545962

Ejercicio 30. Escriba un programa que genere un número aleatorio A (entre 0 y 100) y le pida al
usuario que lo adivine, el usuario ingresa un número B y el programa le dirá si B es mayor o menor
que A, esto se repetirá hasta que el usuario adivine el número, en ese momento el programa le dirá
el número de intentos que tardo el usuario en adivinar el número.
Nota: para generar el número aleatorio use la función rand() de la librería <cstdlib>, recuerde
convertirlo al rango (0,100).

Analisis de Variables.
a: Variable que almacenara el numero a adivinar.
n: Variable que tomara el valor del numero que vaya ingresando en usuario.
i: Variable que almacenara los intentos.

*/

#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int a, n, i;

    a=rand()%100;
    i=0;

    cout << "Este programa genera un numero al azar. Adivina cual es!.\n\n";

    while (true){
        cout << "Ingrese un numero: ";
        cin >> n;
        i++;
        if (n==a){
            cout << "\n\n\n     Felicidades!.\nSolo te tomo " << i << " intentos.\n\n\n";
            break;
        }
        else if (n>a){
            cout << "Un poco menos.\n\n";
        }
        else{
            cout << "Un poco mas.\n\n";
        }
    }

    return 0;
}
