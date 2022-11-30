#include<stdio.h>
#include<stdlib.h>

int Sumation(int Brr[],int iSize2)
{
    int iCnt = 0,iSum=0;

    for (iCnt = 0;iCnt<iSize2;iCnt++)
    {
        iSum = iSum+Brr[iCnt];
    }
    return iSum;
}

int main()
{
    int iSize = 0;
    int *Arr = NULL;
    int iCnt = 0;
    int iRet = 0;

    printf("Enter the number of elements that you want to store\n");
    scanf("%d",&iSize);
    Arr = (int*)malloc(sizeof(int)*iSize);

    printf("Enter the elements:\n");

    for(iCnt = 0;iCnt<iSize;iCnt++)
    {
        scanf("%d",&Arr[iCnt]);
    }

    printf("Elements of Array are:\n");

    for (iCnt = 0;iCnt<iSize;iCnt++)
    {
        printf("%d\n",Arr[iCnt]);    
    }

    iRet = Sumation(Arr,iSize);

    printf("Summation of elements of Array is %d\n",iRet);

    free (Arr);

    return 0;

}