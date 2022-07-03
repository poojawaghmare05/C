#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>

int main()
{
    char fName[30];
    int fd = 0;

    printf("Enter the file that you want to open\n");
    scanf("%s" , fName);

    fd = open(fName , O_RDWR);

    if(fd == -1)
    {
        printf("Unable to open file\n");
    }
    else
    {
        printf("File successfully opened with fd : %d\n" , fd);
    }

    return 0;
}

