#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<fcntl.h>   

int main()
{
    char FName[20];
    int fd = 0;
    char Data[100];
    int Length = 0;
    int iSize = 0;

    printf("Enter the file name that you want to open :\n");
    scanf("%s",&FName);

    fd = open(FName,O_RDONLY);

    if(fd == -1)
    {
        printf("Unable to open the file.\n");
        return -1;
    }
    
    while((Length = read(fd,Data,sizeof(Data))) != 0)
    {
        iSize = iSize + Length;
    }

    printf("Size of file is : %d bytes.\n",iSize);

    close(fd);
}

