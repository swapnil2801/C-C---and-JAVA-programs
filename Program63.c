#include<stdio.h>
#include<stdlib.h>

void DisplayArray(int Brr[],int iSize2)
{
    int iCnt = 0;

    for (iCnt = 0;iCnt<iSize2;iCnt++)
    {
        printf("%d\n",Brr[iCnt]);    
    }
}

int main()
{
    int iSize = 0;
    int *Arr = NULL;
    int iCnt = 0;

    printf("Enter the number of elements that you want to store\n");
    scanf("%d",&iSize);
    Arr = (int*)malloc(sizeof(int)*iSize);

    printf("Enter the elements:\n");

    for(iCnt = 0;iCnt<iSize;iCnt++)
    {
        scanf("%d",&Arr[iCnt]);
    }

    printf("Elements of Array are:\n");

    DisplayArray(Arr,iSize);

    free (Arr);

    return 0;

}