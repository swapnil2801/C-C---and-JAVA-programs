# include <stdio.h>

// O(N/2)
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
int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("Enter the value:\n");
    scanf("%d",&iValue);

    iRet = SumFactors(iValue);
    printf("Addition of factors is %d",iRet);
    return 0;
}
