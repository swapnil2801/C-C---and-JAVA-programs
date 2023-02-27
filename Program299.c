// Accept the number and range from user , and toggle the bits from that range


#include <stdio.h>

typedef unsigned int UINT;

UINT ToggleRange(UINT No ,int Start,int End)
{
    UINT Mask1 = 0XFFFFFFFF , Mask2 = 0XFFFFFFFF, Mask = 0 , Result = 0;


    Mask1 = Mask1 << (Start -1);
    Mask2 = Mask2 >> (32 - End);

    Mask = Mask1 & Mask2;

    Result = Mask ^ No;

    return Result;
}

int main()
{
    UINT Value = 0;
    UINT iRet = 0;
    int start = 0;
    int End = 0;

    printf("Enter any number : \n");
    scanf("%u",&Value);

    printf("Enter the range of bits :\n");
    printf("Enter starting bit position : \n");
    scanf("%d",&start);

    printf("Enter ending bit position : \n");
    scanf("%d",&End);

    iRet = ToggleRange(Value,start,End);

    printf("Updated number is : %u\n",iRet);

    return 0;
}