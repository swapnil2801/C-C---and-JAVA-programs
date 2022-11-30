
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

// Step 5: Perform the operation on array
bool ChkNumberInElements(int Arr[],int iSize,int iNo)
{
    int iCnt = 0;
    int iFrequency = 0;

    for(iCnt = 0;iCnt < iSize;iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            iFrequency++;
        }
    }
    if(iFrequency == 0)
    {
        return false;
    }
    else
    {
        return true;
    }
}

int main()
{
    int *ptr = NULL;
    int iLength = 0;
    int i = 0;
    int iValue = 0;
    bool bRet = false;

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

    printf("Which number do you want to check :\n");
    scanf("%d",&iValue);

    // step 4: Call the function
    bRet = ChkNumberInElements(ptr , iLength , iValue);

    if(bRet == true)
    {
        printf("%d is present in elements",iValue);
    }
    else
    {
        printf("%d is not present in elements",iValue);
    }

    // step 6 : Deallocate the memory
    free(ptr);

    return 0;
}