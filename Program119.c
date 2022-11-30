#include <stdio.h>
#include <stdbool.h>

bool IsCpitalX(char cValue)
{
    if(cValue >= 65 && cValue <= 90)
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

    iRet = IsCpitalX(ch);

    if(iRet == true)
    {
        printf("%c is a Capital case letter \n",ch);
    }
    else
    {
        printf("%c is a not a Capital case letter \n",ch);
    }

    return 0;
}