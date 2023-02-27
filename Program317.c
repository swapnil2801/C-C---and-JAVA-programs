// * * * *

#include<stdio.h>
#include<stdbool.h>

int CountCapR(char *str)
{
    static int iCnt = 0;

    if(*str != '\0')
    {
        if(*str >= 'A' && *str <= 'Z')
        {
            iCnt++;
        }
        str++;
        CountCapR(str);
    }
    return iCnt;
}  

int main()
{
    char Arr[20];
    int iRet = 0;

    printf("Enter the string.\n");
    scanf("%[^\n]s",Arr);

    iRet = CountCapR(Arr);

    printf("Capital character in string are : %d\n",iRet);

    return 0;
}       