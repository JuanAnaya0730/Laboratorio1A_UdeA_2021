/*
                          INFORMATICA II
Grupo 04

Juan Sebastian Anaya Regino
CC: 1007545962

Ejercicio 9. Escriba un programa que pida un número N e imprima el perímetro y área de un
círculo con radio N. Nota: use 3.1416 como una aproximación de pi.
Ej: si se ingresa 1 se debe imprimir:
Perimetro: 6.28352
Area: 3.1416

*/

#include <iostream>

using namespace std;

#define pi 3.1416 // Valor constante para π

int main()
{
    int N; // N es la variable que almacenara el radio del circulo.

    /* Se imprime en pantalla la funcion del programa */
    cout << "Este programa recibe un numero N e imprime el perimetro y area de "
            "un circulo con radio N.\n\n";

    /* Se le pide al usuario que ingrese el radio del circulo */
    cout << "Ingrese el radio del circulo: ";
    cin >> N;

    /* Se imprime en pantalla el perimetro usando la formula P=2πr */
    cout << "\nPerimetro: " << 2*pi*N << endl;

    /* Se imprime en pantalla el area usando la formula A=π(r^2) */
    cout << "Area: " << pi*N*N << endl;

    cout << endl;

    return 0;
}
