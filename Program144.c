#include<stdio.h>

void StrCpyX(char *src,char *dest)
{
    while(*src != '\0')
    {
        *dest = *src;
        src++;
        dest++;
    }
    *dest = *src;
}

int main()
{
    char Arr[20];
    char Brr[20];
    int iRet = 0;

    printf("Enter the string :\n");
    scanf("%[^'\n']s",Arr);

    StrCpyX(Arr,Brr);

    printf("Copied string is :%s\n",Brr);

    return 0;
}