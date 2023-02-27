#include <stdio.h>
#include <stdbool.h>

typedef unsigned int UINT;

/*
    0000 0000 0000 0000 0000 0001 1100 0000
      0    0   0    0    0    1     c    0 
      000001C0  ->  Hexadecimal number

      0X000001C0   -> total 8 numbers because of 32 bit
*/

bool CheckBit(UINT No)
{
    UINT Mask = 0X000001C0;
    UINT Result = 0;

    Result = No & Mask;

    if(Result == Mask)
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
    UINT Value = 0;
    bool bRet = false;

    printf("Enter any value : \n");
    scanf("%u",&Value);
    
    bRet = CheckBit(Value);

    if(bRet == true)
    {
        printf("10th bit is on\n");
    }
    else 
    {
        printf("10th bit is off.\n");
    }

    return 0;
}
