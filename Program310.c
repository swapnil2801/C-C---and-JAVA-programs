// * * * *

#include<stdio.h>

int Summation_of_FactorsR(int No)
{
    static int iCnt = 1;
    static int Sum = 0;
    if(iCnt <= (No/2))
    {
        if(No % iCnt == 0)
        {
            Sum += iCnt; 
        }
        iCnt++;
        Summation_of_FactorsR(No);
    }
    return Sum;
}

int main()
{
    int Value = 0 ,iRet = 0;
    printf("Enter the number\n");
    scanf("%d",&Value);

    iRet = Summation_of_FactorsR(Value);
    printf("Summation of factors is : %d\n",iRet);
    return 0;
}