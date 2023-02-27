// TOGGLE 4th bit

#include <stdio.h>

typedef unsigned int UINT;

/*
    0000 0000 0000 0000 0000 0000 0000 1000
      0    0   0     0    0    0   0    8
      00000008  ->  Hexadecimal number

      0X00000008   -> total 8 numbers because of 32 bit
*/

UINT Toggle_BIt(UINT No)
{
    UINT iMask = 0X00000008;

    return(No ^ iMask);
}

int main()
{
    UINT Value = 0;
    UINT iRet = 0;

    printf("Enter any value : \n");
    scanf("%u",&Value);
    
    iRet = Toggle_BIt(Value);

    printf("Updated number is : %d\n",iRet);

    return 0;
}


