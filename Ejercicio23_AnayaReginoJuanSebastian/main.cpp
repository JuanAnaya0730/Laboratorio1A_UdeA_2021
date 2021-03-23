/*
                          INFORMATICA II
Grupo 04

Juan Sebastian Anaya Regino
CC: 1007545962

Ejercicio 23. Escriba un programa que pida dos números A y B e imprima en pantalla el mínimo
común múltiplo entre los dos.
Ej: si se ingresan 4 y 6 se debe imprimir:
El MCM de 4 y 6 es: 12

*/

#include <iostream>

using namespace std;

int main()
{
    int A; // A es la variable que almacenara el primer numero ingresado.
    int B; // B es la variable que almacenara el segundo numero ingresado.
    int MCM=0; // MCM es la variable que almacenara el minimo comun mitiplo entre A y B.

    /* Se imprime en pantalla la funcion del programa */
    cout << "Este programa recibe dos numeros A y B e imprime en pantalla el "
            "M.C.M(minimo comun multiplo) entre A y B.\n\n";

    /* Se le pide al usuario que ingrese el primer numero */
    cout << "Ingrese un numero(A): ";
    cin >> A;

    /* Se le pide al usuario que ingrese el segundo numero */
    cout << "Ingrese un numero(B): ";
    cin >> B;

    /* Se crea un for que se dentendra solo cuando se encuentre el M.C.M */
    for(int i=1; MCM == 0 ; ++i){
        for(int j=1; ; ++j){
            /* Si B*j es mayor que A*i se rompe el ciclo ya que A*i no va a ser el M.C.M */
            if(B*j > A*i)
                break;
            /* Si B*j es igua a A*i se ha encontrado el M.C.M entre A y B y sera justamente
               A*i o B*j */
            if(B*j == A*i)
                MCM=A*i;
        }
    }

    /* Se imprime en pantalla en M.C.M entre A y B */
    cout << "\nEl MCM de " << A << " y " << B << " es: " << MCM << endl;

    cout << endl;

    return 0;
}
