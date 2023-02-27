#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>   //for linux and macOS

int CreateFile(char Name[])
{
    int iRet = 0;

    iRet = creat(Name,0777);

    return iRet;
}

int main()
{
    char Fname[20];
    int fd = 0;


    printf("Enter the file name that you want to create :");
    scanf("%s",&Fname);

    fd = CreateFile(Fname);

    if(fd == -1)
    {
        printf("Unable to create file.\n");
    }
    else
    {
        printf("File is successfully created with FC %d\n",fd);
    }

    return 0;
}