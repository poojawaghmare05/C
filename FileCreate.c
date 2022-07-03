// program234.c

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
    char Fname[20];
    int fd = 0;             //File Descriptor

    printf("Enter file name to create\n");
    scanf("%s" , Fname);

    fd = creat(Fname , 0777);   // (file name , octal no)
    if(fd == -1)
    {
        printf("Unable to create the file\n");
        return -1;        //Failure
    }

    printf("File is successfully created with FD %d\n" , fd);

    return 0;
}


/*
    user
    owner              4 + 2 + 1
    group member
    other

    operations:-Read      4
                Write     2
                Execute   1
    

   fd = creat(Fname , 0777);
   (0 for octal)

   owner  :  4 + 2 + 1   (7)
   group  :  4 + 2 + 1   (7)
   other  :  4 + 2 + 1   (7)

   Permissions  0_Owner_Group_Other
                
*/
