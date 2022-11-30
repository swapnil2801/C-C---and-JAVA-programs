// Demontration of for loop


// 1 : Write the common statement in the loop block
// 2 : Check whether the number of iterations are already known or not 
// 3 : If the iteration count is fixed then go for for loop
// 4 : If iteration count is not fixed then go for while

#include <stdio.h>

void Display(int iValue)
{
    register int iCnt = 0;

    for(iCnt = 1; iCnt<=iValue ; iCnt++)
    {
        printf("Jay Ganesh...\n");
    }
}

int main()
{
    int iNo = 0;
    printf("Enter the number of iterations :\n");
    scanf("%d",&iNo);

    Display(iNo);  // Function call 

    return 0;
}