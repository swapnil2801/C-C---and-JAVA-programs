# include <stdio.h>

int Factorial(int iNo)
{
    register int iCnt = 0;
    unsigned long int iFact = 1;
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
       iFact*=iCnt;
    }
    return iFact;
}
int main()
{
    int iValue = 0;
    unsigned long int iAns = 0;

    printf("Enter the value:\n");
    scanf("%d",&iValue);

    iAns = Factorial(iValue);
    printf("Factorial of %d is : %d",iValue,iAns);
    return 0;
}
