/*
                          INFORMATICA II
Grupo 04

Juan Sebastian Anaya Regino
CC: 1007545962

Ejercicio 10. Escriba un programa que pida un número N e imprima en pantalla todos los
múltiplos de dicho número entre 1 y 100.
Ej: si se ingresa 33 se debe imprimir:
Multiplos de 33 menores que 100:
33
66
99

*/

#include <iostream>

using namespace std;

int main()
{
    int N; // N es la variable que almacenara el numero al que se le calcularan sus multiplos menores que 100.

    /* Se imprime en pantalla la funcion del programa */
    cout << "Este programa recibe un numero N(entre 1 y 100) e imprime en pantalla todos sus multiplos "
            "entre 1 y 100.\n\n";

    /* Se le pide al usuario que ingrese un numero */
    cout << "Ingrese un numero: ";
    cin >> N;

    /* Se imprimen en pantalla los multiplos de N menores que 100 */
    cout << "\nMultiplos de " << N << " menores que 100 son:" << endl;

    /* Este for se encarga de calcular y imprimir cada uno de los multiplos de N
       menores que 100 */
    for(int i=1; i<100; i++){
        if(N*i>=100)
            break;
        else
            cout << N*i << endl;
    }

    cout << endl;

    return 0;
}
