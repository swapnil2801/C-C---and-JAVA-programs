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

    fd = open(FName,O_RDWR | O_APPEND);  //  (0X0002 | 0X0008)  ==  0010 | 1000  == 10
            // OR (FName,0X000B)
    if(fd == -1)
    {
        return -1;
    }
    else
    {
        printf("Enter the data that you want to write in the file.\n");
        scanf(" %[^'\n']s",Data);

        Length = strlen(Data);

        // write(kashat,kay,kiti);
        write(fd,Data,Length);
    }

    return 0;
}