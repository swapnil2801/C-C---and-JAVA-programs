#include <iostream>
using namespace std;

// call by reference
void swapi(int &x, int &y)
{
    int Temp;

    Temp = x;
    x = y;
    y = Temp;
}

void swapd(double &x, double &y)
{
    double Temp;

    Temp = x;
    x = y;
    y = Temp;
}

int main()
{
    int a = 11, b = 10;
    cout<<"Value of a : "<<a<<"\n";
    cout<<"Value of b : "<<b<<"\n";
    swapi(a,b);
    cout<<"Value of a : "<<a<<"\n";
    cout<<"Value of b : "<<b<<"\n";

    double p = 11.456, q = 10.765;
    cout<<"\nValue of a : "<<p<<"\n";
    cout<<"Value of b : "<<q<<"\n";
    swapd(p,q);
    cout<<"Value of a : "<<p<<"\n";
    cout<<"Value of b : "<<q<<"\n";

    return 0;
}