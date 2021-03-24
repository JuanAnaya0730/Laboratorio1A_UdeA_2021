/*
                          INFORMATICA II
Grupo 04

Juan Sebastian Anaya Regino
CC: 1007545962

Ejercicio 16. Escriba un programa que pida constantemente números hasta que se ingrese el nú-
mero cero e imprima en pantalla el promedio de los números ingresados (excluyendo el cero).
Ej: si se ingresan 1, 2, 3, 0 se debe imprimir:
El promedio es: 2

*/

#include <iostream>

using namespace std;

int main()
{
    int N; // N es la variable que almacenara un numero hasta que se ingrese otro.
    int sumatoria=0; // sumatoria es la variable que almacenara la suma de todos los numeros ingresados(N).
    int Ndatos=0; // Ndatos es la variable que contara el numero de datos ingresados.

    /* Se imprime en pantalla la funcion del programa */
    cout << "Este programa recibe constanremente numeros hasta que que se ingrese el cero(0), "
            "luego imprime en pantalla el promedio de todos los numeros ingresados.\n\n";

    while (true) {

        /* Se le pide al usuario que ingrese un numero */
        cout << "Ingrese un numero: ";
        cin >> N;

        /* Si el numero ingresado es 0 se rompe el ciclo */
        if (N==0)
            break;

        sumatoria+=N;
        Ndatos++;
    }

    /* Si se ingreso el cero como primer numero se imprime el correspondiente mensaje */
    if (Ndatos==0)
        cout << endl << "No hay datos para calcular un promedio." << endl;

    /* se imprime en pantalla el promedio de los numeros ingresados */
    else
        cout << endl << "El promedio es: " << sumatoria/Ndatos << endl;

    cout << endl;

    return 0;
}
