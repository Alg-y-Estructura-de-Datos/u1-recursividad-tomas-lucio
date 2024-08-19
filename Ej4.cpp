/*
Ejercicio N°4

Crear un programa que emplee recursividad para calcular el mayor de los elementos
de un vector de “n” tamaño dado por pantalla por el usuario.
*/

#include <iostream>
using namespace std;

int encontrarMayorRecursivo(int array[],int n);

int main() {
    int n;
    cout << "Ingrese el tamaño del vector: ";
    cin >> n;

    int vec [n];

    cout << "Ingrese los elementos del vector:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> vec[i];
    }

    // Llamar a la función recursiva para encontrar el mayor elemento
    int mayor = encontrarMayorRecursivo(vec, n);
    cout << "El mayor elemento del vector es: " << mayor << endl;

    return 0;
}

int encontrarMayorRecursivo(int array[],int n)
{
    if(n == 1){
        return array[0];
    }

    int maxAnterior = encontrarMayorRecursivo(array,n-1);

    if (array[n-1]>maxAnterior)
    {
        return array[n-1];
    }else{
        return maxAnterior;
    }
}