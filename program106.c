//input    hello
//output   o     Recurssion
//         l
//         l
//         e 
//         h
#include<stdio.h>

void Display(char *str)
{
    if(*str != '\0')
    {
        Display(str + 1);  // Head Recurssion
        printf("%c\n" , *str);
    }
}

int main()
{
    char Arr[20];

    printf("Enter String \n");
    scanf("%[^'\n']s" , Arr);

    Display(Arr);

}