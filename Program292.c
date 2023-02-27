#include <stdio.h>

typedef unsigned int UINT;

/*
    1111 1111 1111 1111 1111 1111 1111 0111
      F    F    F    F    F    F    F    7
      FFFFFFF7  ->  Hexadecimal number

      0XFFFFFFF7   -> total 8 numbers because of 32 bit
*/

UINT OffTheBit(UINT No)
{
    UINT iMask = 0XFFFFFFF7;

    return(No & iMask);
}

int main()
{
    UINT Value = 0;
    UINT iRet = 0;

    printf("Enter any value : \n");
    scanf("%u",&Value);
    
    iRet = OffTheBit(Value);

    printf("Updated number is : %d\n",iRet);

    return 0;
}
