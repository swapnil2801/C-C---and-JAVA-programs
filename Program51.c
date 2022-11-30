#include <stdio.h>

void DisplayEvenOddDigits(int iNo)
{
    int iEvenCnt = 0;
    int iOddCnt = 0;

    int iDigit = 0;

    if(iNo == 0)
    {
        iEvenCnt++;
    }

    while(iNo!=0)
    {
        iDigit = iNo % 10;
        if (iDigit%2 == 0)
        {
            iEvenCnt++;
        }
        else 
        {
            iOddCnt++;
        }
        iNo /= 10;
    }
    printf("Count of even digits is  :%d\n",iEvenCnt);
    printf("Count of odd digits is  :%d\n",iOddCnt);
}

int main()
{
    int iValue = 0;
    int iRet = 0;
    
    printf("Enter any number:\n");
    scanf("%d",&iValue);

    DisplayEvenOddDigits(iValue);


    return 0;
}