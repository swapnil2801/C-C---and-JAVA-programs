// * * * *

#include<stdio.h>

int AdditionI(int No)
{
    int Sum = 0;
    int iCnt = 1;

    while(iCnt <= No)
    {
        Sum += iCnt;
        iCnt++;
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