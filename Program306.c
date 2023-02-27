// * * * *

#include<stdio.h>

int AdditionI(int No)
{
    static int Sum = 0;
    static int iCnt = 1;

    if(iCnt <= No)
    {
        Sum += iCnt;
        iCnt++;
        AdditionI(No);
    }
    return Sum;
}

int main()
{
    int Value = 0 ,iRet = 0;
    printf("Enter the number\n");
    scanf("%d",&Value);

    iRet = AdditionI(Value);

    printf("Summation is : %d\n",iRet);
    return 0;
}