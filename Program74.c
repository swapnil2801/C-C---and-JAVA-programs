#include <stdio.h>
#include<stdlib.h>

int Minimum(int Arr[],int iSize)
{
    int iCnt = 0;
    int iMin = Arr[0];

    for(iCnt = 0;iCnt < iSize;iCnt++)
    {
        if(iMin>Arr[iCnt])
        {
            iMin = Arr[iCnt];
        }
    }
    return iMin;
}
int main()
{
    int *ptr = NULL;
    int iLength = 0;
    int i = 0;
    int iRet = 0;

    printf("Enter number of elements : \n");
    scanf("%d",&iLength);

    ptr = (int *)malloc(iLength*sizeof(int));

    printf("Enter the elements:\n");
    for(i = 0;i < iLength;i++)
    {
        scanf("%d",&ptr[i]);
    }

    iRet = Minimum(ptr,iLength);

    printf("Minimum number is :%d\n",iRet);

    free(ptr);

    return 0;
}