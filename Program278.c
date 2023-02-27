#include <stdio.h>

void DisplayBinary(unsigned int No)
{
    int Digit = 0;

    while(No != 0)
    {
        Digit = No % 2;
        printf("%d\t",Digit);
        No = No/2;
    }
    printf("\n");
}

int main()
{
    unsigned int Value = 0;

    printf("Enter any value : \n");
    scanf("%u",&Value);
    
    DisplayBinary(Value);

    return 0;
}
