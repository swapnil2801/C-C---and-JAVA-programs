#include <iostream>
using namespace std;

// call by address
void swap(int *x, int *y)
{
    int Temp;

    Temp = *x;
    *x = *y;
    *y = Temp;
}

int main()
{
    int a = 11, b = 10;

    cout<<"Value of a : "<<a<<"\n";
    cout<<"Value of b : "<<b<<"\n";

    swap(&a,&b);

    cout<<"Value of a : "<<a<<"\n";
    cout<<"Value of b : "<<b<<"\n";

    return 0;
}