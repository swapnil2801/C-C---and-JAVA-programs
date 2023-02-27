#include<stdio.h>

int main(int argc, char *argv[])
{

    printf("Number of arguments are : %d\n",argc);
    printf("Name of executable is : %s\n",argv[0]);
    printf("2nd argument is : %s\n",argv[1]);
    printf("3rd argument is : %s\n",argv[2]);

    return 0;
}