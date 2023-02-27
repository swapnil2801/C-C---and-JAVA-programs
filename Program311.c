// * * * *

#include<stdio.h>
#include<stdbool.h>

bool Summation_of_FactorsR(int No)
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
    if(Sum == No)
    {
        return true;
    }
    else
        return false;
}

int main()
{
    int Value = 0;
    bool bRet = false;
    printf("Enter the number\n");
    scanf("%d",&Value);

    bRet = Summation_of_FactorsR(Value);
    
    if(bRet == true)
    {
        printf("%d is an perfect number.\n",Value);
    }
    else
    {
        printf("%d is not an perfect number.\n",Value);
    }
    return 0;
}