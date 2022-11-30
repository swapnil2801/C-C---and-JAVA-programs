//////////////////////////////////////////////////////////
// Problem Statement : Accept number from user and check whether it is divisible by five or not:
// 
// Input : 23
// Output : 23 is not Divisible by 5
// 
// Input : 25
// Output : 25 is Divisible by 5
//
// Input : -20
// Output : -20 is Divisible by 5
//
//////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////
// Algorithm
//////////////////////////////////////////////////////////

/*
    START
        Accept number from user as iNo
        Divide that iNo by 5 and check the value of remender 
        If the value is 0
            Then display as iNo is divisible by 5
        Otherwise
            Display as iNo is not Divisible by 5
    END 
*/

//////////////////////////////////////////////////////////


#include <stdio.h>
#include<stdbool.h>

//////////////////////////////////////////////////////////
//
//  Function Name : DivisibleByFive
//  Description : To check input is divisible by 5 or not
//  Input : integer
//  Output : Boolean
//  Author : Swapnil Patil
//  Date :  12-10-2022
//
//////////////////////////////////////////////////////////

bool DivisibleByFive(int iValue1)
{

    if(iValue1%5 == 0)
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

    printf("Enter any number :\n");
    scanf("%d",&iNo);

    bAns = DivisibleByFive(iNo);

    if(bAns == true)
    {
        printf("%d is Divisible by 5\n",iNo);
    }
    else
    {
        printf("%d is not Divisible by 5\n",iNo);
    }

    return 0;
}

//////////////////////////////////////////////////////////
// Result :
// Input : 25
// Output : 25 is Divisible by 5
//////////////////////////////////////////////////////////
