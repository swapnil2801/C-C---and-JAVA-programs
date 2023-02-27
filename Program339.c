#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>   //for linux and macOS
//#include<unistd.h>  // Universel standerd header file
 
// O_RDONLY   -> open for reading
// O_WRONLY   -> open for writting
// O_RDWR     -> Open for reading and writting

int main()
{
    char FName[20];
    int fd = 0;
    char Data[] = "Marvellous";
    int iRet = 0;

    printf("Enter the file name that you want to open :\n");
    scanf("%s",&FName);

    fd = open(FName,O_RDWR);

    if(fd == -1)
    {
        printf("Unable to create file.\n");
    }
    else
    {
        printf("File is successfully created with FC %d\n",fd);
        iRet = write(fd,Data,10);
        printf("%d\n",iRet);
    }

    return 0;
}