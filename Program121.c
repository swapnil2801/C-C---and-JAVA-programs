#include <stdio.h>
#include <stdbool.h>

bool IsDigitX(char cValue)
{
    if(cValue >= 48 && cValue <= 57)
    {
        return true;
    }
    else 
    {
        return false;
    }
}

int main()
{
    int ch = '\0';
    bool iRet = false;

    printf("Enter any character : \n");
    scanf("%c",&ch);

    iRet = IsDigitX(ch);

    if(iRet == true)
    {
        printf("%c is a digit\n",ch);
    }
    else
    {
        printf("%c is a not a digit \n",ch);
    }

    return 0;
}