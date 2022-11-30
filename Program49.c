#include <stdio.h>

int CountEvenDigits(int iNo)
{
    int iCnt= 0;
    int iDigit = 0;


    if (iNo == 0)       // Filter
    {
        return 1;       // Consider 0 as even number
    }

    if (iNo < 0)        // Updator
    {
        iNo = -iNo;
    }
    while(iNo>0)
    {
        iDigit = iNo % 10;
        if (iDigit%2 == 0)
        {
            iCnt++;
        }
        iNo /= 10;
    }
    return iCnt;
}

int main()
{
    int iValue = 0;
    int iRet = 0;
    
    printf("Enter any number:\n");
    scanf("%d",&iValue);

    iRet = CountEvenDigits(iValue);

    printf("Count of even digits is  :%d\n",iRet);

    return 0;
}