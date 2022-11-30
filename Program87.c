//    PATTERN PRINTING

// Input : 4
// Output : A   B   C   D


#include <stdio.h>

void Display(int iNo)   // 2N
{
    int iCnt = 0;
    char ch = 'A';

    // ASCII
    // American standard code for Information Interchange

    if(iNo < 0)     // Updater
    {
        iNo = -iNo;
    }
    for(iCnt = 1;iCnt<=iNo;iCnt++)  // N (Time complexity)
    {
        printf("%c\t",ch);
        ch++;
    }

    // for(iCnt = 1;iCnt<=iNo;iCnt++)
    // {
    //     printf("%c\t",64+iCnt);
    // }
   
    printf("\n");
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