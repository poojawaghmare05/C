#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>

int main()
{
    char fName[30];
    int fd = 0;

    printf("Enter the file that you want to create\n");
    scanf("%s" , fName);

    fd = creat(fName , 0777);

    if(fd == -1)
    {
        printf("Unable to create file\n");
    }
    else
    {
        printf("File successfully created with fd : %d\n" , fd);
    }

    return 0;
}


//user
//owner    4 + 2 + 1
//group member
//other

//operations:-
//Read      4
//Write     2
//Execute   1
