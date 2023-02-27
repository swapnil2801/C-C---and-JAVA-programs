#include <stdio.h>

typedef unsigned int UINT;

UINT OffTheBit(UINT No,UINT Pos)
{
    UINT iMask = 0X00000001;

    iMask = iMask << (Pos - 1);

    iMask = ~iMask;

    return(No & iMask);
}

int main()
{
    UINT Value = 0;
    UINT Position = 0;
    UINT iRet = 0;

    printf("Enter any value : \n");
    scanf("%u",&Value);

    printf("Enter the position of bit : \n");
    scanf("%u",&Position);
    
    iRet = OffTheBit(Value,Position);

    printf("Updated number is : %d\n",iRet);

    return 0;
}
