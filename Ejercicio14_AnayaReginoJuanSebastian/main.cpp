/*
                          INFORMATICA II
Grupo 04

Juan Sebastian Anaya Regino
CC: 1007545962

Ejercicio 14. Escriba un programa que imprima dos columnas paralelas, una con los números del
1 al 50 y otra con los números del 50 al 1.
Ej: las primeras lineas a imprimir serían:
1 50
2 49
3 48

*/

#include <iostream>

using namespace std;

int main()
{
    int i=1; // I es la variabale que ira aumentado hasta llegar a 50.
    int h=50; // H es la variable que ira decresiendo hasta llegar a 1.

    /* Se imprime en pantalla la funcion de programa */
    cout << "Este programa imprie en pantalla dos columnas paralelas, una con los numeros "
            "del 1 al 50 y otra con los numeros de 50 al 1.\n\n";

    /* Este ciclo se encargara de imprimir las dos columnas */
    while (i<=50) {
        if (i>=10){
            cout << i << "   " << h << endl;
        }
        else{
            cout << i << "    " << h << endl;
        }

        i++;
        h--;
    }

    cout << endl << endl;

    return 0;
}
