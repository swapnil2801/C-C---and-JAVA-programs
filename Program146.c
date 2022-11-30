#include<stdio.h>

void StrCpySmallX(char *src,char *dest)
{
    while(*src != '\0')
    {
        if(*src >= 'A' && *src <= 'Z')
        {
            *dest = *src+32;
        }
        else
        {
            *dest = *src;
        }
        src++;
        dest++;
    }
    *dest = '\0';
}

int main()
{
    char Arr[20];
    char Brr[20];
    int iRet = 0;

    printf("Enter the string :\n");
    scanf("%[^'\n']s",Arr);

    StrCpySmallX(Arr,Brr);

    printf("Copied string is :%s\n",Brr);
    printf("Original sring is :%s\n",Arr);

    return 0;
}