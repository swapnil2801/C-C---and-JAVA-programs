
#include<stdio.h>
#include<stdlib.h>

// Step 5: Perform the operation on array
int CalculateFrequency(int Arr[],int iSize,int iNo)
{
    int iCnt = 0;
    int iEvenSum = 0;
    int iOddSum = 0;
    int iFreq = 0;

    for(iCnt = 0;iCnt < iSize;iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            iFreq++;
        }
    }
    return iFreq;

}

int main()
{
    int *ptr = NULL;
    int iLength = 0;
    int i = 0;
    int iValue = 0;
    int iRet = 0;

    // step 1: Accept size of array
    printf("Enter the number of elements :\n");
    scanf("%d",&iLength);

    // step 2: Allocate memory for array
    ptr = (int *)malloc(iLength*sizeof(int));

    // step 3: Accept yhe elements of array
    printf("Enter elements: \n");
    for(i = 0;i < iLength;i++)
    {
        scanf("%d",&ptr[i]);
    }

    printf("Enter the element to findout the frequency :\n");
    scanf("%d",&iValue);

    // step 4: Call the function
    iRet = CalculateFrequency(ptr , iLength , iValue);
    printf("Frequency of %d is :%d",iValue,iRet);

    // step 6 : Deallocate the memory
    free(ptr);

    return 0;
}