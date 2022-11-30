//    PATTERN PRINTING

// Input : 4
// Output : 4   
//          3
//          2
//          1

#include <stdio.h>

void Display(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)     // Updater
    {
        iNo = -iNo;
    }
    for(iCnt = iNo;iCnt>=1;iCnt--)
    {
        printf("%d\n",iCnt);
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