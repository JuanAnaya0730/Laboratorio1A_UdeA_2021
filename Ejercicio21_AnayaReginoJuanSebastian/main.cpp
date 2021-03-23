/*
                          INFORMATICA II
Grupo 04

Juan Sebastian Anaya Regino
CC: 1007545962

Ejercicio 21. Escriba un programa que pida un carácter C, si es una letra la debe convertir de
mayúscula a minúscula y viceversa e imprimirla.
Ej: si se ingresa B se debe imprimir:
Letra convertida: b
y si se ingresa k se debe imprimir:
Letra convertida: K

*/

#include <iostream>

using namespace std;

int main()
{
    char C; // C es la variable que almacenara el caracter ingresado.

    /* Se imprime en pantalla la funcion del programa */
    cout << "Este programa recibe un caracter C, si es una letra minuscula se imprimira "
            "tramsformada en mayuscula y viceversa.\n\n";

    /* Se le pide al usuario que ingrese un caracter */
    cout << "Ingrese un caracter: ";
    cin >> C;

    /* Se verifica si el caracter ingresado es una letra mayuscula, en ese caso
       se le sumara el numero 32 a la letra para transformarla en minuscula */
    if(C>=65 && C<=90){
        /* Se imprime la letra transformada en minuscula */
        cout << "\nLetra convertida: " << char(C+32) << endl;
    }

    /* En caso de que no sea una letra mayuscula se verifica si es una letra minuscula,
       de ser asi se le restara el numero 32 a la letra para transformala en mayuscula */
    else if(C>=97 && C<=122) {
        /* Se imprime la letra transformada en mayuscula */
        cout << "\nLetra convertida: " << char(C-32) << endl;
    }

    /* En caso de que el caracter ingresado no se a una letra se imprimira el
       respectivo mensaje en pantalla */
    else{
        cout << "\nEl caracter ingresado no es una letra." << endl;
    }

    cout << endl;

    return 0;
}
