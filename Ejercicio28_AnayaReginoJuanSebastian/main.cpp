/*
                          INFORMATICA II
Grupo 04

Juan Sebastian Anaya Regino
CC: 1007545962

Ejercicio 28. Escriba un programa que encuentre el valor aproximado de pi en base a la siguiente
suma infinita:
                π=4(1-(1/3)+(1/5)-(1/7)+(1/9...)
El usuario debe ingresar el número de elementos usados en la aproximación.
Ej: si se ingresa 3 π=4(1-(1/3)+(1/5))=3,46667, por lo que se debe imprimir:
pi es aproximadamente: 3.46667

*/

#include <iostream>

using namespace std;

int main()
{
    float N; // N variable que decidira el numero de datos que se usaran para la aproximacion
    int signo=1; // signo es la variable que decidira el signo de la sumatoria
    float sumatoria=0; // sumatoria es la variable que almacenara la suma de los n datos de la suma infinita.

    cout << "Este programa calcula el valor aproximado de PI dependiendo del numero que sea ingresado.\n\n";

    cout << "Ingrese un numero: ";
    cin >> N;

    for(float i=1; i<N*2 ; i+=2){
        if(signo%2 == 0){
            sumatoria -= (1/i);
        }
        else{
            sumatoria += (1/i);
        }
        signo++;
    }

    cout << endl <<  4*sumatoria << endl;

    cout << endl;

    return 0;
}
