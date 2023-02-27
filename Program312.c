// * * * *

#include<stdio.h>
#include<stdbool.h>

int Digit_CountR(int No)
{
    static int Count = 0;

    if(No != 0)
    {
        Count++;
        No = No / 10;
        Digit_CountR(No);
    }
    return Count;
}
    

int main()
{
    int Value = 0;
    int iRet = 0;
    printf("Enter the number : \n");
    scanf("%d",&Value);

    iRet = Digit_CountR(Value);
    
    printf("Number of digits of %d are : %d\n",iRet,Value);
    return 0;
}