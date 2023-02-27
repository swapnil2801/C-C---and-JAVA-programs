// * * * *

#include<stdio.h>

void DisplayI() 
{
    int iCnt = 1;   // auto storage class

    while(iCnt <= 4)
    {
        printf("*\t");
        iCnt++;
    }
    printf("\n");
}

void DisplayR() 
{
    static int iCnt = 1;    //static storage class

    if(iCnt <= 4)
    {
        printf("*\t");
        iCnt++;
        DisplayR();     // Recursive call.
    }
}

int main()
{
    DisplayR();

    return 0;
}