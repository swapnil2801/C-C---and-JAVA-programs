#include <stdio.h>
#include<stdlib.h>

int LastOccurence(int Arr[],int iSize,int iNo)
{
    int iCnt = 0;
    int iPose = -1;

    for(iCnt = 1;iCnt < iSize;iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            iPose = iCnt;
        }
    }
    return iPose;
}
int main()
{
    int *ptr = NULL;
    int iLength = 0;
    int i = 0;
    int iRet = 0;
    int iValue = 0;

    printf("Enter number of elements : \n");
    scanf("%d",&iLength);

    
    ptr = (int *)malloc(iLength*sizeof(int));

    printf("Enter the elements:\n");
    for(i = 0;i < iLength;i++)
    {
        scanf("%d",&ptr[i]);
    }

    printf("Enter the number that you want to check:\n");
    scanf("%d",&iValue);

    iRet = LastOccurence(ptr,iLength,iValue);

    if(iRet == -1)
    {
        printf("There is no %d in the array \n",iValue);
    }
    else
    {
        printf("The last occurense of %d in array is :%d",iValue,iRet);
    }
    free(ptr);

    return 0;
}