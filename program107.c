//input    hello
//output   o     Recurssion
//         lo
//         llo
//         ello
//         hello

#include<stdio.h>

void Display(char *str)
{
    if(*str != '\0')
    {
        Display(str + 1);  // Head Recurssion
        printf("%s\n" , str);  
    
    }
}

int main()
{
    char Arr[20];

    printf("Enter String \n");
    scanf("%[^'\n']s" , Arr);

    Display(Arr);

}