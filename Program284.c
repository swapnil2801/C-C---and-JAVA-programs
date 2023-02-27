#include <stdio.h>
#include <stdbool.h>
#include <math.h>

typedef unsigned int UINT;

bool Chk_Bit_On_Or_Not(UINT No,int iPos)
{
    UINT Mask = 0;

    Mask = pow(2,(iPos-1));

    UINT Result = Mask & No;

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
    int iPos = 0;
    bool bRet = false;

    printf("Enter any value : \n");
    scanf("%u",&Value);
    
    printf("Enter the position of bit that you want to check : \n");
    scanf("%d",&iPos);

    bRet = Chk_Bit_On_Or_Not(Value,iPos);

    if(bRet == true)
    {
        printf("%dth bit is on\n",iPos);
    }
    else 
    {
        printf("%dth bit is off.\n",iPos);
    }
    return 0;
}
