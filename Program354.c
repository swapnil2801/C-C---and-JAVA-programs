#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<fcntl.h>   

int main(int argc,char * argv[])
{
    int fdSource = 0,fDestination = 0;
    char Data[100];
    int Length = 0;
    int Count = 0;
    int iCnt = 0;

    fdSource = open(argv[1],O_RDONLY);

    if(fdSource == -1)
    {
        printf("Unable to open the file.\n");
        return -1;
    }

    fDestination = creat(argv[2],0777);

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

    printf("Data succesfully copied.\n");
}

// 