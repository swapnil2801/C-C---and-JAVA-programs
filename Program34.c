# include <stdio.h>
# include <stdbool.h>

int SumFactors(int iNo)
{
    int iSum = 0;
    int iCnt = 0;
    for(iCnt = 1; iCnt <= (iNo/2); iCnt++)
    {
       if(iNo % iCnt == 0)
       {
            iSum = iSum + iCnt;
       }
       
    }
    return iSum;
}

bool CheckPerfect(int iData)
{
    int iAns = 0;

    iAns = SumFactors(iData);

    if(iData == iAns)
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

    bRet = CheckPerfect(iValue);

    if (bRet == true)
    {
        printf("%d is an perfect number.",iValue);
    }
    else
    {
        printf("%d is not an perfect number. ",iValue);
    }

    return 0;
}
