#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>

int main()
{
    char fName[30];
    int fd = 0 ;
    char Data[11];

    printf("Enter the file that you want to read\n");
    scanf("%s" , fName);

    fd = creat(fName , 0777);

    if(fd == -1)
    {
        printf("Unable to read file\n");
        return -1;
    }
    else
    {
        printf("File successfully read with fd : %d\n" , fd);
    }

   read (fd , Data , 6);

   //printf("Data from file is  : %6s\n" , Data);

   write(1 , Data , 6);
   close(fd);

    return 0;
}


