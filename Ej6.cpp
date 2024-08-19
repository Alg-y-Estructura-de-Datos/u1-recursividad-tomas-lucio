#include <iostream>
using namespace std;

int paresEnImpares(int n);

int main()
{
    int n = 1234;
    cout << paresEnImpares(n);
}

int paresEnImpares(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else
    {
        if (n%2 == 0)
        {
            return 1 + paresEnImpares(n/100);
        }
        else{
            return paresEnImpares(n/100);
        }
    }
}
