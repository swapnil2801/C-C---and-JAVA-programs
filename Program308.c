// * * * *

#include<stdio.h>

void FactorsI(int No)
{
    int iCnt = 0;
    printf("Factors of %d are : \n",No);
    iCnt = 1;
    while(iCnt <= No/2)
    {
        if(No % iCnt == 0)
        {
            printf("%d\n",iCnt);
        }
        iCnt++;
    }
    printf("\n");
}

int main()
{
    int Value = 0 ,iRet = 0;
    printf("Enter the number\n");
    scanf("%d",&Value);

    FactorsI(Value);

    return 0;
}