// * * * *

#include<stdio.h>
#include<stdbool.h>

void Display(char *str)
{
    static int iCnt = 0;

    if(*str != '\0')
    {
        printf("%s\n",str);
        str++;
        Display(str);
    }
}  

int main()
{
    char Arr[20];

    printf("Enter the string.\n");
    scanf("%[^\n]s",Arr);

    Display(Arr);

    return 0;
}       