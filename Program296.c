#include<stdio.h>
typedef unsigned int UINT;
typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL Check_Bit(UINT No ,UINT Pos1,UINT Pos2)
{
    UINT iMask1 = 0X00000001;   // UINT iMask = 1;
    UINT iMask2 = 0X00000001;
    UINT iMask = 0;
    UINT iResult = 0;
    if((Pos1 < 1 || Pos1 > 32) || (Pos1 < 1 || Pos1 > 32))
    {
        printf("Invalid position ,it should between 1 to 32.\n");
        return FALSE;
    }
    iMask1 = iMask1 << (Pos1 -1);  // Dynamic Mask Formation.
    iMask2 = iMask2 << (Pos2 -1);

    iMask = iMask1 | iMask2;

    iResult = No & iMask;

    if(iResult == iMask)
    {
        return TRUE;
    }
    else 
    {
        return FALSE;
    }
}
int main()
{
    UINT Value = 0;
    UINT iPos1 = 0;
    UINT iPos2 = 0;
    BOOL bRet = FALSE;

    printf("Enter number : \n");
    scanf("%u",&Value);

    printf("Enter the 1st position of bit : \n");
    scanf("%u",&iPos1);

    printf("Enter the 2nd position of bit : \n");
    scanf("%u",&iPos2);

    bRet = Check_Bit(Value,iPos1,iPos2);

    if(bRet == TRUE)
    {
        printf("Bit at the position %d and %d is ON.\n",iPos1,iPos2);
    }
    else
    {
        printf("Bit at the position %d and %d is OFF.\n",iPos1,iPos2);
    }
    return 0;
}