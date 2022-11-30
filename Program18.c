// Demontration of for loop

#include <stdio.h>

void Display()
{
    register int iCnt = 0;      // Initialisation
    
    iCnt = 1;   //1         // Reinitialitation
    while( iCnt<=5)     //2
    {
        printf("Jay Ganesh...\n");      //4
        iCnt++;     //3
    }
}
int main()
{
    Display();  // Function call 

    return 0;
}