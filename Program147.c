#include<stdio.h>

void ReversePrint(char *str)
{
    char *start = NULL;
    char *end = NULL;
    char temp = '\0';

    start = str;
    end = str;

    while(*end != '\0')
    {
      end++;
    }
    end--;

    while(start < end)
    {
        temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }
}

int main()
{
    char Arr[20];
    int iRet = 0;

    printf("Enter the string :\n");
    scanf("%[^'\n']s",Arr);

    ReversePrint(Arr);

    printf("Reverse sring is :%s\n",Arr);

    return 0;
}