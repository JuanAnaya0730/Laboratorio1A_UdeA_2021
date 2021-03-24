/*
                          INFORMATICA II
Grupo 04

Juan Sebastian Anaya Regino
CC: 1007545962

Ejercicio 12. Escriba un programa que pida un número N e imprima todas las potencias desde N^1
hasta N^5.
Ej: si se ingresa 3 se debe imprimir:
3∧1=3
3∧2=9
3∧3=27
3∧4=81
3∧5=243

*/

#include <iostream>

using namespace std;

int main()
{
    int N; // N es la variable que almacenara el numero al que se le calcularan las potencias.
    int potencia; // potencia es la variable que irá almacenando las potencias de n.

    /* Se imprime en panatalla la funcion del programa */
    cout << "Este progrma recibe un numero N e imprime en pantalla todas sus"
            "las potencias hasta N^5.\n\n";

    /* Se le pide al usuario que ingrese un numero */
    cout << "Ingrese un numero: ";
    cin >> N;

    /* Se le asigna N a potencia para la primera potencia de N */
    potencia = N;

    /* Este ciclo se encargara de calcular y imprimir las potencias de N hasta N^5 */
    for(int i=1; i<=5; i++){
        cout << endl << N << '^' << i << '=' << potencia;
        potencia*=N;
    }
    cout << endl << endl;

    return 0;
}
