
#include <stdio.h>

void Display()
{
    register int iCnt = 0;

    for(iCnt = 1; iCnt <= 5; iCnt++)
    {
        printf("%d\n",iCnt);
    }
}

int main()
{
    Display();  // Function call 

    return 0;
}