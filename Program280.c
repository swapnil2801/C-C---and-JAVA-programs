#include <stdio.h>

int CountOnBits(unsigned int No)
{
    int iCount = 0;
    int iDigit = 0;

    while(No != 0)
    {
        iDigit = No % 2;
        if(iDigit == 1)
        {
            iCount++;
        }
        No = No / 2;
    }
    return iCount;
}

int main()
{
    unsigned int Value = 0;
    int iRet = 0;

    printf("Enter any value : \n");
    scanf("%u",&Value);
    
    iRet = CountOnBits(Value);

    printf("Number of bits which are on are : %d\n",iRet);

    return 0;
}
