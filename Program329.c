// * * * *

#include<stdio.h>
#include<stdbool.h>

int Display(int Arr[],int iSize)
{
    static int iCnt = 0;
    static int Sum = 0;

    if(iCnt < iSize)
    {
        Sum += Arr[iCnt];
        iCnt++;
        Display(Arr,iSize);
    }
    return Sum;
}  

int main()
{
    int Brr[5] = {10,20,30,40,50};
    int iRet = 0;

    iRet = Display(Brr,5);
    printf("Addition is : %d\n",iRet);
    return 0;
}       