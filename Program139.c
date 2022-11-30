#include<stdio.h>

// char* StrLwr(char str[])       call by value
// {
//     int i = 0;
//     while(str[i] != '\0')
//     {
//         if(str[i] >= 'A' && str[i] <= 'Z')
//         {
//             str[i] = str[i]+32;
//         }
//         i++;
//     }  
//     return str;
// }

void StrLwr(char *str)        // Call by adress
{
    while(*str != '\0')
    {
        if(*str >= 'A' && *str <= 'Z')
        {
            *str = *str+32;
        }
        str++;
    }
}

int main()
{
    char Arr[20];

    printf("Enter the string :\n");
    scanf("%[^'\n']s",Arr);

    StrLwr(Arr);
    printf("String in lower case is :%s\n",Arr);

    return 0;
}