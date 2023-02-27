// * * * *

#include<stdio.h>
#include<stdbool.h>

void Display_DigitsR(int No)
{
    static int Count = 0;

    if(No != 0)
    {
        printf("%d\t",No % 10);
        No = No / 10;
        Display_DigitsR(No);
    }
}
    

int main()
{
    int Value = 0;
    int iRet = 0;
    printf("Enter the number : \n");
    scanf("%d",&Value);

    printf("Digits are : \n");
    
    Display_DigitsR(Value);
    
    return 0;
}