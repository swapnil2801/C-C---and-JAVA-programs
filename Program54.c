#include <stdio.h>
#include <stdbool.h>

bool CheckPolidrome(int iNo)
{
    int iDigit = 0;
    bool iRev = false;
    int iTemp = iNo;
    
    while(iNo != 0)
    {
        iDigit = iNo %10;
        iRev = (iRev *10) + iDigit;
        iNo = iNo/10;
    }
    if (iRev == iTemp);
}

int main()
{
    int iValue = 0;
    int iRet = 0;
    
    printf("Enter any number:\n");
    scanf("%d",&iValue);

    iRet = CheckPolidrome(iValue);

    if (iRet == true)
    {
        printf("%d is Palidrome",iValue);
    }
    else
    {
        printf("%d is not Palidrome",iValue);
    }

    return 0;
}