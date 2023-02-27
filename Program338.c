#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>   //for linux and macOS

 
// O_RDONLY   -> open for reading
// O_WRONLY   -> open for writting
// O_RDWR     -> Open for reading and writting

int OpenFile(char Name[])
{
    int fd = 0;
    fd = open(Name,O_RDWR);
    return fd;
}
int main()
{
    char FName[20];
    int fd = 0;


    printf("Enter the file name that you want to open :\n");
    scanf("%s",&FName);

    fd = OpenFile(FName);

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