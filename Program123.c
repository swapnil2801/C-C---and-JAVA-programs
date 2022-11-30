#include <stdio.h>



int main()
{
    char Arr[30];

    printf("Enter full name :\n");
    //scanf("%s",Arr);
    scanf("%[^'\n']s",Arr);
    printf("Your name is : %s",Arr);


    return 0;
}