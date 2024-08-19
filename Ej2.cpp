#include <iostream>
using namespace std;

int suma(int n);

int main() {
    int n;
    cout << "ingrese el numero de que desea sumar: ";
    cin >> n; 
    cout << suma(n) << endl;
    return 0;
}

int suma(int n)
{
    if (n == 1)
    {
        cout << n << " = ";
        return 1;
    }
    else
    {
        cout << n << " + ";
        return n + suma(n-1);
    }
}