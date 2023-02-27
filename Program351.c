#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<fcntl.h>   

int main()
{
    char FName1[20];
    char FName2[20];
    int fdSource = 0,fDestination = 0;
    char Data[100];
    int Length = 0;
    int Count = 0;
    int iCnt = 0;


    printf("Enter the file name which contains data :\n");
    scanf("%s",&FName1);

    fdSource = open(FName1,O_RDONLY);

    if(fdSource == -1)
    {
        printf("Unable to open the file.\n");
        return -1;
    }
    
    printf("Enter the file name in which you want to create :\n");
    scanf("%s",&FName2);


    fDestination = creat(FName2,0777);

    if(fDestination == -1)
    {
        printf("Unable to create new file.\n");
        return -1;
    }

    while((Length = read(fdSource,Data,sizeof(Data))) != 0)
    {
        write(fDestination,Data,Length);
    }

    close(fdSource);
    close(fDestination);
}

