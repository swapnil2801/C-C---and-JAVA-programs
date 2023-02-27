#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<fcntl.h>   //for linux and macOS
//#include<unistd.h>  // Universel standerd header file
 
// O_RDONLY   -> open for reading
// O_WRONLY   -> open for writting
// O_RDWR     -> Open for reading and writting

int main()
{
    char FName[20];
    int fd = 0;
    char Data[100];
    int Length = 0;

    printf("Enter the file name that you want to open :\n");
    scanf("%s",&FName);

    fd = open(FName,O_RDWR);

    if(fd == -1)
    {
        return -1;
    }
    
    // read(kuthun,kashat,kiti);
    read(fd,Data,13);

    printf("Data from file is : %s",Data);  // GRBAGE PROBLEM

    return 0;
}