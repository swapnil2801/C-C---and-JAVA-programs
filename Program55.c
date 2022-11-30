#include <stdio.h>
#include <stdbool.h>

int Reverse(int iNo)
{
    int iDigit = 0, iRev = 0;

    if (iNo<0)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo %10;
        iRev = (iRev *10) + iDigit;
        iNo = iNo/10;
    }
    return iRev;
}
bool Checkpalindrome(int iData)
{
    int iReverse = 0;
    iReverse = Reverse(iData);
    if (iReverse == iData)
    {
        return true;
    }
    else
    {
        return false;
    }

}

int main()
{
    int iValue = 0;
    bool iRet = false;
    
    printf("Enter any number:\n");
    scanf("%d",&iValue);

    iRet = Checkpalindrome(iValue);

    if (iRet == true)
    {
        printf("%d is an polidrome ",iValue);
    }
    else
    {
        printf("%d is not polidrome ",iValue);
    }
    return 0;
}