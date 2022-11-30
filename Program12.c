//////////////////////////////////////////////////////////
// Problem Statement : Accept number from user and check whether it is divisible with five and three or not:
//////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////
// Algorithm
//////////////////////////////////////////////////////////

/*
    START
        Accept number from user as iNo
        Divide that iNo by 5 and 3 and check the value of remender 
        If the value is 0
            Then display as iNo is divisible by 5 and 3
        Otherwise
            Display as iNo is not Divisible by 5 and 3
    END 
*/

//////////////////////////////////////////////////////////


#include <stdio.h>
#include <stdbool.h>

//////////////////////////////////////////////////////////
//
//  Function Name : DivisibleByFive
//  Description : To check input is divisible by 5 and 3 or not
//  Input : integer
//  Output : boolean
//  Author : Swapnil Patil
//  Date :  12-10-2022
//
//////////////////////////////////////////////////////////

bool DivisibleByFiveAndThree(int iValue)
{
    int iAns1 = 0, iAns2 = 0;

    iAns1 = iValue % 3;
    iAns2 = iValue % 5;


    if((iAns1 == 0) && (iAns2 == 0))
    {
        return true;
    }
    else
    {
        return false;
    }

}

//////////////////////////////////////////////////////////
//  Entry point of the application
//////////////////////////////////////////////////////////

int main()
{
    int iNo = 0;
    bool bAns = false;

    printf("Enter number :\n");
    scanf("%d",&iNo);

    bAns = DivisibleByFiveAndThree(iNo);

    if(bAns == true)
    {
        printf("%d is Divisible by 5 and 3\n",iNo);
    }
    else
    {
        printf("%d is not Divisible by 5 or 3\n",iNo);
    }

    return 0;
}

//////////////////////////////////////////////////////////
// Result :
// Input : 15
// Output : 15 is Divisible by 5 and 3
//////////////////////////////////////////////////////////
