
#include<stdio.h>
#include<stdlib.h>

// Step 5: Perform the operation on array
int ChkNumberInElements(int Arr[],int iSize,int iNo)
{
    int iCnt = 0;

    for(iCnt = 0;iCnt < iSize;iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            break;
        }
    }
    if(iCnt == iSize)
    {
        return -1;
    }
    else
    {
        return iCnt;
    }
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

    printf("Enter the element to findout the index of first occurence:\n");
    scanf("%d",&iValue);

    // step 4: Call the function
    iRet = ChkNumberInElements(ptr , iLength , iValue);

    if(iRet == -1)
    {
        printf("Number is not present in array\n");
    }
    else 
    {
        printf("The index of array in which number is present is :%d\n",iRet);
    }

    // step 6 : Deallocate the memory
    free(ptr);

    return 0;
}