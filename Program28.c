# include <stdio.h>

int Summation(int iNo)
{
    register int iCnt = 0;
    int iSum = 0;
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
       iSum+=iCnt;
    }
    return iSum;
}
int main()
{
    int iValue = 0;
    int iAns = 0;

    printf("Enter the value:\n");
    scanf("%d",&iValue);

    iAns = Summation(iValue);
    printf("Addition of first five numbers is: %d",iAns);
    return 0;
}
