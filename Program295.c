#include<stdio.h>

typedef unsigned int UINT;
typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL Check_Bit(UINT No ,UINT Pos)
{
    UINT iMask = 0X00000001;   // UINT iMask = 1;
    UINT iResult = 0;
    if(Pos < 1 || Pos > 32)
    {
        printf("Invalid position ,it should between 1 to 32.\n");
        return FALSE;
    }
    iMask = iMask << (Pos -1);  // Dynamic Mask Formation.

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
    UINT iPos = 0;
    BOOL bRet = FALSE;

    printf("Enter number : \n");
    scanf("%u",&Value);

    printf("Enter the position of bit : \n");
    scanf("%u",&iPos);

    bRet = Check_Bit(Value,iPos);

    if(bRet == TRUE)
    {
        printf("Bit at the position %d is ON.\n",iPos);
    }
    else
    {
        printf("Bit at the position %d is OFF.\n",iPos);
    }
    return 0;
}