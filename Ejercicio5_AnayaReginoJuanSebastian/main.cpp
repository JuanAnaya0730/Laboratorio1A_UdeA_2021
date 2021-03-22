/*
                          INFORMATICA II
Grupo 04

Juan Sebastian Anaya Regino
CC: 1007545962

Ejercicio 5. Escriba un programa que pida dos números A y B e imprima en pantalla la división
A/B con redondeo.
Ej: si se ingresan 8 y 3 se debe imprimir:
8/3=3
Si se ingresan 7 y 3 se debe imprimir:
7/3=2

*/

#include <iostream>

using namespace std;

int main()
{
    float A; // A es la variable que almacenara el primer numero.
    float B; // B es la variable que almacenara el segundo numero.

    /* Se imprime en pantalla la funcion del programa */
    cout << "Este programa recibe dos numeros A y B e imprime en pantalla la division "
            "A/B con redondeo.\n\n";

    /* Se le pide al usuario que ingrese el primer numero */
    cout << "Ingrese un numero(A): ";
    cin >> A;

    /* Se le pide al usuario que ingrese el segundo numero */
    cout << "Ingrese un numero(B): ";
    cin >> B;

    /* Se divide A/B y se multiplica el resultado por 10, luego se toma la parte entera
       de esa operacion y se le aplica la operacion % con 10. Si el resultado es mayor
       igual a 5 indica que se debera tomar el mayor entero mas uno(1) de A/B, de lo
       contrario solo se tomara el mayor entero de A/B. */
    if(int(A/B*10)%10 >= 5)
        cout << endl << A << '/' << B << '=' << int(A/B)+1 << endl;
    else
        cout << endl << A << '/' << B << '=' << int(A/B) << endl;

    cout << endl;

    return 0;
}
