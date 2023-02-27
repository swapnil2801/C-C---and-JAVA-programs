// * * * *

#include<stdio.h>
#include<stdbool.h>

int AdditionR(int No)
{
    static int Sum = 0;

    if(No != 0)
    {
        Sum += No % 10;
        No = No / 10;
        AdditionR(No);
    }
    return Sum;
}
    

int main()
{
    int Value = 0;
    int iRet = 0;
    printf("Enter the number : \n");
    scanf("%d",&Value);

    iRet = AdditionR(Value);
    
    printf("Addition of digits of %d are : %d\n",iRet,Value);
    return 0;
}