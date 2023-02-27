#include <stdio.h>
#include <stdbool.h>

typedef unsigned int UINT;

bool CheckBit(UINT No)
{
    UINT Mask = 8;
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
        printf("4th bit is on\n");
    }
    else 
    {
        printf("4th bit is off.\n");
    }

    return 0;
}