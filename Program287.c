#include <stdio.h>
#include <stdbool.h>

typedef unsigned int UINT;

/*
    0000 0000 0000 0000 0000 0010 0000 0000
      0    0   0    0    0    2     0    0 
      00000200  ->  Hexadecimal number

      0X00000200   -> total 8 numbers because of 32 bit
*/

bool CheckBit(UINT No)
{
    UINT Mask = 0X00000200;
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
