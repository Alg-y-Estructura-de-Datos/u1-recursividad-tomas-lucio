#include <iostream>
using namespace std;

int potencia(int n,int base);

int main() {
    int base, exponente;
    
    cout << "Ingrese la base: ";
    cin >> base;
    cout << "Ingrese el exponente: ";
    cin >> exponente;

    int resultado = potencia(exponente, base);
    cout << base << " elevado a " << exponente << " es: " << resultado << endl;
}

int potencia(int n,int base)
{
    int result;
    if(n==0)
    {
        return 1;
    }
    else
    {
        return base * potencia(n-1,base);
    }
}