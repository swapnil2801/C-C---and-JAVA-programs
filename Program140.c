#include<stdio.h>

void StrUpr(char *str)        // Call by adress
{
    while(*str != '\0')
    {
        if(*str >= 'a' && *str <= 'z')
        {
            *str = *str-32;
        }
        str++;
    }
}

int main()
{
    char Arr[20];

    printf("Enter the string :\n");
    scanf("%[^'\n']s",Arr);

    StrUpr(Arr);
    printf("String in upper case is :%s\n",Arr);

    return 0;
}