#include <stdio.h>

int main()
{
    int i = 0;

    printf("______________________________________");
    printf("ASCII Table.\n");
    printf("______________________________________");

    for(i = 1;i <= 127;i++)
    {
        printf("%c \t %d \t %x \t %o \n",i,i,i,i);
    }

    printf("______________________________________");

    return 0;
}