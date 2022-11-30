// Accept N numbers from user and store it 
// into the array and find the count of even numbers:

#include<stdio.h>
#include<stdlib.h>

// Step 5: Perform the operation on array
int CountEven(int Arr[],int iSize)
{
    int iCnt = 0;
    int iEvenCnt = 0;

    for(iCnt = 0;iCnt < iSize;iCnt++)
    {
        if((Arr[iCnt] % 2) == 0)
        {
            iEvenCnt++;
        }
    }
    return iEvenCnt;
}

int main()
{
    int *ptr = NULL;
    int iLength = 0;
    int i = 0;
    int iRet  = 0;

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
    iRet = CountEven(ptr , iLength);
    printf("The number of even elements are : %d\n",iRet);

    // step 6 : Deallocate the memory
    free(ptr);

    return 0;
}