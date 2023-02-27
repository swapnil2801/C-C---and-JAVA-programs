// * * * *

#include<stdio.h>
#include<stdbool.h>

int strlen(char *str)
{
    int iCnt = 0;

    while(*str != '\0')
    {
        iCnt++;
        str++;
    }
    return iCnt;
}  

int main()
{
    char Arr[20];
    int iRet = 0;

    printf("Enter the string.\n");
    scanf("%[^\n]s",Arr);

    iRet = strlen(Arr);

    printf("String length is : %d\n",iRet);

    return 0;
}       