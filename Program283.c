#include <stdio.h>

typedef unsigned int UINT;

int CountOnBits(UINT No)
{
    int iCount = 0;
    int iDigit = 0;

    while(No != 0)
    {
        iDigit = No % 2;
        iCount = iCount + iDigit;       // Without if part..
        No = No / 2;
    }
    return iCount;
}

int main()
{
    UINT Value = 0;
    int iRet = 0;

    printf("Enter any value : \n");
    scanf("%u",&Value);
    
    iRet = CountOnBits(Value);

    printf("Number of bits which are on are : %d\n",iRet);

    return 0;
}
