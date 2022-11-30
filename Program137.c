#include<stdio.h>

char ToLowerX(char ch)
{
    if(ch >= 'A' && ch <= 'Z')
    {
        ch = ch+32;
    }
    return ch;
}

int main()
{
    char cValue = '\0';
    char cRet = '\0';

    printf("Enter the character :\n");
    scanf("%c",&cValue);

    cRet = ToLowerX(cValue);

    printf("Character in the lower case is : %c",cRet);
    return 0;
}