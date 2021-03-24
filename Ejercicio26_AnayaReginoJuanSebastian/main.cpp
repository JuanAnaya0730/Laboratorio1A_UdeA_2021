/*
                          INFORMATICA II
Grupo 04

Juan Sebastian Anaya Regino
CC: 1007545962

Ejercicio 26. Escriba un programa que pida tres números e imprima el tipo de triangulo (isósceles, equilátero, escaleno) que se formaría, si sus lados tienen la longitud denida por los números
ingresados. Tenga en cuenta el caso en que los números ingresados no forman un triángulo.
Ej: si se ingresan 3, 3 y 5 se debe imprimir:
Se forma un triangulo isosceles.
y si se ingresan 3, 3 y 6 se debe imprimir:
Las longitudes ingresadas no forman un triangulo

Analisis de Variables.
a: Variable que almacenara una longitud del triangulo.
b: Variable que almacenara una longitud del triangulo.
c: Variable que almacenara una longitud del triangulo.

*/

#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int a, b, c;

    cout << "Este programa pide tres numeros y dira que tipo de triangulo se forma con los numeros ingresados.\n\n";
    cout << "Ingrese el primer numero: ";
    cin >> a;
    cout << "Ingrese el segundo numero: ";
    cin >> b;
    cout << "Ingrese el tercer numero: ";
    cin >> c;

    //p==false;

    if (a+b>c){
        if (a+c>b){
            if (b+c>a){
                if (a==b and b==c){
                    cout << "\nSe forma un triangulo equilatero.\n\n\n";
                }
                else if(a!=b and b!=c){
                    cout << "\nSe forma un triangulo escaleno.\n\n\n";
                }
                else {
                    cout << "\nSe forma un triangulo isoceles.\n\n\n";
                }

            }
            else{
                cout << "\nLas longitudes ingresadas no forman un triangulo.\n\n\n";
            }
        }
        else{
            cout << "\nLas longitudes ingresadas no forman un triangulo.\n\n\n";
        }
    }
    else{
        cout << "\nLas longitudes ingresadas no forman un triangulo.\n\n\n";
    }
    return 0;
}
