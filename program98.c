//accept string from user and return small characters of string using recurssion

#include<stdio.h>

int SmallChar(char *str)
{
    int iCnt = 0;

    if(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
            iCnt++;
        }
        str++;
        SmallChar(str);
    }
    return iCnt;
}

int main()
{
    char arr[20];
    int iRet = 0;

    printf("Enter String \n");
    scanf("%[^'\n']s" , arr);

    iRet = SmallChar(arr);

    printf("Small characters are: %d\n" , iRet);

    return 0;
}
