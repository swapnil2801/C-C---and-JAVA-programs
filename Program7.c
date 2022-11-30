#include <stdio.h>

int Multiplication(int iValue1, int iValue2)
{
    int iRet = 0;
    iRet = iValue1 * iValue2;
    return iRet;
}

int main()
{
    int iNo1 = 0 , iNo2 = 0, iAns = 0;

    printf("Enter first number : \n");
    scanf("%d",&iNo1);
    printf("Enter second number : \n");
    scanf("%d",&iNo2);

    iAns = Multiplication(iNo1,iNo2);

    printf("Multiplication of %d and %d is :%d",iNo1,iNo2,iAns);

    return 0;
}