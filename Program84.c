//    PATTERN PRINTING

// Input : 4
// Output : 1   *   2   *   3   *   4   *   


#include <stdio.h>

void Display(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)     // Updater
    {
        iNo = -iNo;
    }
    for(iCnt = 1;iCnt<=iNo;iCnt++)
    {
        printf("%d\t*\t",iCnt);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number:\n");
    scanf("%d",&iValue);

    printf("Pattern is :\n");

    Display(iValue);

    return 0;
}