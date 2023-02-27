#include<iostream>
using namespace std;

template <class T>
T Maximum(T Arr[] ,int iSize)
{
    int iCnt = 0;
    T Max = Arr[0];
    for(iCnt = 0;iCnt < iSize;iCnt++)
    {
        if(Max < Arr[iCnt])
        {
            Max = Arr[iCnt];
        }
    }
    return Max;
}

int main()
{
    int Data1[] = {110,120,320,40};
    int iRet1 = Maximum(Data1,4);
    cout<<"Max number is : "<<iRet1<<"\n";

    float Data2[] = {10.566f,20.543f,3.0f,40.686f};
    float iRet2 = Maximum(Data2,4);
    cout<<"Max number is : "<<iRet2<<"\n";
    return 0;
}