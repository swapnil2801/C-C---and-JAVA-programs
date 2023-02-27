// * * * *

#include<stdio.h>
#include<stdbool.h>

int CountSmallR(char *str)
{
    static int iCnt = 0;

    if(*str != '\0')
    {
        if(*str >= 'a' && *str <= 'z')
        {
            iCnt++;
        }
        str++;
        CountSmallR(str);
    }
    return iCnt;
}  

int main()
{
    char Arr[20];
    int iRet = 0;

    printf("Enter the string.\n");
    scanf("%[^\n]s",Arr);

    iRet = CountSmallR(Arr);

    printf("Small character in string are : %d\n",iRet);

    return 0;
}       