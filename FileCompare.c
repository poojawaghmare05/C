#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<stdbool.h>
#include<string.h>

int main()
{
    char Fname[20];
    int fd = 0;
    char Data[10];

    printf("Enter file name: \n");
    scanf("%s" , Fname);

    fd = open(Fname , O_RDONLY);
    if(fd == -1)
    {
        printf("Unable to open file\n");
        return -1;
    }
    
    //0  Starting point
    //1  Current position
    //2  End point

    lSeek(fd,10,0);

    read(fd,Data,5);
    write(1,Data,5);
  
    return 0;
}