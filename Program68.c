
#include<stdio.h>
#include<stdlib.h>

// Step 5: Perform the operation on array
void DisplayEvenOddSum(int Arr[],int iSize)
{
    int iCnt = 0;
    int iEvenSum = 0;
    int iOddSum = 0;

    for(iCnt = 0;iCnt < iSize;iCnt++)
    {
        if((Arr[iCnt] % 2) == 0)
        {
            iEvenSum = iEvenSum+Arr[iCnt];
        }
        else
        {
            iOddSum = iOddSum+Arr[iCnt];
        }
    }
    printf("The Sumation of even Elements is: %d\n",iEvenSum);
    printf("The Sumation of odd Elements is: %d\n",iOddSum); // OR

}

int main()
{
    int *ptr = NULL;
    int iLength = 0;
    int i = 0;

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

    // step 4: Call the function
    DisplayEvenOddSum(ptr , iLength);

    // step 6 : Deallocate the memory
    free(ptr);

    return 0;
}