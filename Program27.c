# include <stdio.h>

int Summation()
{
    register int iCnt = 0;
    int iSum = 0;
    for(iCnt = 1; iCnt <= 5; iCnt++)
    {
       iSum+=iCnt;
    }
    return iSum;
}
int main()
{
    int iAns = 0;
    iAns = Summation();
    printf("Addition of first five numbers is: %d",iAns);
    return 0;
}
