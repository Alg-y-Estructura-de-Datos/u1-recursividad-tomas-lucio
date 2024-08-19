#include <iostream>
using namespace std;

int invertir(int n,int invertido = 0);

int main()
{
    int numero;
    cin >> numero;
    cout << invertir(numero , 0);
}

int invertir(int n , int invertido)
{
    if(n == 0) 
    {
        return invertido;
    }
    else
    {
        return invertir(n/10 ,invertido*10 + n % 10);
    }
}