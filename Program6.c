#include <stdio.h>

int main()
{
    int iNo1 = 0 , iNo2 = 0, iAns = 0;

    printf("Enter first number : \n");
    scanf("%d",&iNo1);
    printf("Enter second number : \n");
    scanf("%d",&iNo2);

    iAns = iNo1 * iNo2;

    printf("Multiplication of %d and %d is :%d",iNo1,iNo2,iAns);

    return 0;
}