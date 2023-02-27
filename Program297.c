// Toggle the ulternate nibble of number .

#include <stdio.h>

typedef unsigned int UINT;

/*
    0000 1111 0000 1111 0000 1111 0000 1111
      0    F   0     F    0    F   0    F
      0F0F0F0F  ->  Hexadecimal number

      0X0F0F0F0F   -> total 8 numbers because of 32 bit
*/

UINT Toggle_Nibble(UINT No)
{
    UINT iMask = 0X0F0F0F0F;

    return(No ^ iMask);
}

int main()
{
    UINT Value = 0;
    UINT iRet = 0;

    printf("Enter any value : \n");
    scanf("%u",&Value);
    
    iRet = Toggle_Nibble(Value);

    printf("Updated number is : %d\n",iRet);

    return 0;
}


