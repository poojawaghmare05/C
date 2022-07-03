//248
// MAximum throughput in minimum hardware movement

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>

#define FILESIZE 1024

int SmallChar(char Fname[])
{
    char Data[FILESIZE];   
    int iRet = 0 , iCnt = 0;
    int fd = 0;

    fd = open(Fname , O_RDWR);
    if(fd == -1)
    {
        printf("Unable to open the file\n");
        return -1 ;            // Failure
    }
    printf("File is succefully Opened with FD %d\n",fd);

    while((iRet = read(fd ,Data ,sizeof(Data))) != 0)
    {
        for(int i = 0; i < iRet; i++)
        {
            if((Data[i] >= 'a') && (Data[i] <= 'z'))
            {
                iCnt++;
            }
        }
    }
    close(fd);
    return iCnt;
}

int main()
{
    char Fname[20];
    int iRet = 0;

    printf("Enter file name to open\n");
    scanf("%s",Fname);

    iRet = SmallChar(Fname);
    printf("No of Small Characters are: %d\n" , iRet);

    return 0;
}
