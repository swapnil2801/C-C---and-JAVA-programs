#include<iostream>
using namespace std;

template <class T>
T Addition(T Arr[] ,int iSize)
{
    int iCnt = 0;
    T sum ;
    for(iCnt = 0;iCnt < iSize;iCnt++)
    {
        sum = sum + Arr[iCnt];
    }
    return sum;
}

int main()
{
    int Data1[] = {10,20,30,40};
    int iRet1 = Addition(Data1,4);
    cout<<"Addition is : "<<iRet1<<"\n";

    float Data2[] = {10.566f,20.543f,3.0f,40.686f};
    float iRet2 = Addition(Data2,4);
    cout<<"Addition is : "<<iRet2<<"\n";
    return 0;
}