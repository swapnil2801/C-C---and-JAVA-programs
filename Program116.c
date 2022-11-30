#include <stdio.h>
#include <stdbool.h>

bool ChkSmall(char cValue)
{
    if(cValue >= 'a' && cValue <= 'z')
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
    char ch = '\0';
    bool iRet = false;

    printf("Enter any character : \n");
    scanf("%c",&ch);

    iRet = ChkSmall(ch);

    if(iRet == true)
    {
        printf("%c is a small case letter \n",ch);
    }
    else
    {
        printf("%c is a not a small case letter \n",ch);
    }

    return 0;
}