// Input = 751
// Output = 3

// Input = 7515
// Output = 4

// Input = 75
// Output = 2

// Input = 7
// Output = 1

# include <stdio.h>

int CountDigits(int iNo)
{
    // int iDigit = 0;
    int iCount = 0;

    if(iNo == 0)        // filter 
    {
        return 1;
    }

    if (iNo<0)      // updator
    {
        iNo = -iNo;
    }
    
    while(iNo > 0)  // while (iNo>=0) is goes to infinite
    {       // its also not working for negative number.
        // iDigit = iNo % 10;
        iNo = iNo / 10;
        iCount++;
    }
    return iCount;

}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter any number :\n");
    scanf("%d",&iValue);

    iRet = CountDigits(iValue);

    printf("Number of digits are : %d\n",iRet);

    return 0;  
}
