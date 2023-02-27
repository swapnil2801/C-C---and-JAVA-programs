#include<iostream>
using namespace std;

template <class T>
void Display(T Arr[] ,int iSize)
{
    int iCnt = 0;
    for(iCnt = 0;iCnt < iSize;iCnt++)
    {
        cout<<Arr[iCnt]<<"\t";
    }
    cout<<"\n";
}

int main()
{
    int Data1[] = {10,20,30,40};

    Display(Data1,4);

    char Data2[] = {'a','b','c','d'};

    Display(Data2,4);

    return 0;
}