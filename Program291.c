// SOLVE PROBLEM

#include <stdio.h>

typedef unsigned int UINT;

/*
    0000 0000 0000 0000 0000 0000 0000 1000
      0    0   0    0    0    0     0    8 
      00000008  ->  Hexadecimal number

      0X00000008   -> total 8 numbers because of 32 bit
*/

int OffTheBit(UINT No)
{
    UINT Mask = 0X00000008;
    UINT Result = 0;

    Result = No & Mask;

    if(Result == Mask)
    {
        No = No - 8;
        return No;
    }
    else
    {
        return No;
    }
}

int main()
{
    UINT Value = 0;
    int bRet = 0;

    printf("Enter any value : \n");
    scanf("%u",&Value);
    
    bRet = OffTheBit(Value);

    printf("After off the 4th bit number is : %d\n",bRet);

    return 0;
}
