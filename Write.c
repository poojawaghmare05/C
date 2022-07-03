#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>

int main()
{
    char fName[30];
    int fd = 0 ;
    char Data[30] = "Marvellous";

    printf("Enter the file that you want to write\n");
    scanf("%s" , fName);

    fd = creat(fName , 0777);

    if(fd == -1)
    {
        printf("Unable to write file\n");
        return -1;
    }
    else
    {
        printf("File successfully write with fd : %d\n" , fd);
    }

    write (fd, Data, 10);
   

    return 0;
}


