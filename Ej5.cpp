/*
Ejercicio N°5
Crear un programa que pida al usuario un número entero positivo "n" y un dígito "d".
 Luego crear una función recursiva que determine si “d” está en “n”. Si está,
 la función debe retornar verdadero y si no está debe retornar falso.
Ej.: si n=1323 y d = 5, retorna Verdadero y si d= 1 retorna falso.
*/
#include <iostream>
using namespace std;

bool contieneDigito(int entero,int digito)
{
    if (entero == 0)
    {
        return false;
    }
    if (entero%10 == digito)
    {
        return true;
    }
    
    return contieneDigito(entero / 10,digito);
}

int main()
{
    int entero,digito;
    cin>>entero>>digito;
    bool resultado = contieneDigito(entero, digito);
    if (resultado) {
        cout << "El digito " << digito << " esta en el numero " << entero << "." << endl;
    } else {
        cout << "El digito " << digito << " no esta en el numero " << entero << "." << endl;
    }

    return 0;
} 

