#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

#define FILESIZE 1024       //Coe 251

void FileCopy(char Source[] , char Destination[])
{
    int FdSrc = 0 , FdDest = 0 , iRet = 0;
    char Buffer[FILESIZE];

    FdSrc = open(Source , O_RDONLY);
    if(FdSrc == -1)
    {
        printf("Unable to open source file\n");
        return;
    }

    FdDest = creat(Destination , 0777);
    if(FdDest == -1)
    {
        printf("Unable to create new file\n");
        return;
    }
    
    while((iRet = read(FdSrc , Buffer , FILESIZE)) != 0)
    {
       write(FdDest , Buffer , iRet);
    }

    close(FdSrc);
    close(FdDest);
}

int main()
{
    char Fname1[20];
    char Fname2[20];

    printf("Enter file name which contains data\n");
    scanf("%s" , Fname1);

    printf("Enter file name that you want to create\n");
    scanf("%s" , Fname2);

    FileCopy(Fname1 , Fname2);

    return 0;
}