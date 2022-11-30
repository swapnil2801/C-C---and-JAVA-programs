#include<stdio.h>

char ToUpperX(char ch)
{
    if(ch >= 'a' && ch <= 'z')
    {
        ch = ch-32;
    }
    return ch;
}

int main()
{
    char cValue = '\0';
    char cRet = '\0';

    printf("Enter the character :\n");
    scanf("%c",&cValue);

    cRet = ToUpperX(cValue);

    printf("Character in the upper case is : %c",cRet);
    return 0;
}