# include <stdio.h>
# include <stdbool.h>

bool CheckPerfectNumber(int iNo)
{
    int iCnt = 0;
    int iSum = 0;
    for (iCnt =1 ; iCnt <= iNo/2 ; iCnt++)
    {
        if (iNo % iCnt == 0)
        {
            iSum = iSum + iCnt;
        }
    }
    if (iSum == iNo)
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
    int iValue = 0;
    bool bRet = false;
    printf("Enter the value:\n");
    scanf("%d",&iValue);

    bRet = CheckPerfectNumber(iValue);
    
    if (bRet == true)
    {
        printf("%d is an perfect number.",iValue);
    }
    else
    {
        printf("%d is not a perfect number.",iValue);
    }

    return 0;
}
