// * * * *

#include<stdio.h>

int Factorial(int No)
{
    static int Mul = 1;
    static int iCnt = 1;

    if(iCnt <= No)
    {
        Mul *= iCnt;
        iCnt++;
        Factorial(No);
    }
    return Mul;
}

int main()
{
    int Value = 0 ,iRet = 0;
    printf("Enter the number\n");
    scanf("%d",&Value);

    iRet = Factorial(Value);

    printf("Factorial is : %d\n",iRet);
    return 0;
}