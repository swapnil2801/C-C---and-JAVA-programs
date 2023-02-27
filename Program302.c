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

void DisplayR()     // uncontroled recursion
{
    int iCnt = 1;    

    if(iCnt <= 4)
    {
        printf("*\n");
        iCnt++;
        DisplayR();     // Recursive call.
    }
}

int main()
{
    DisplayR();

    return 0;
}