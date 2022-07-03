//input    hello
//         hello
//         ello
//         llo
//         lo
//         o

#include<stdio.h>

void Display(char *str)
{
    if(*str != '\0')
    {
        printf("%s\n" , str);
        Display(str + 1);  // Tail Recurssion
    }
}

int main()
{
    char Arr[20];

    printf("Enter String: \n");
    scanf("%[^'\n']s" , Arr);

    Display(Arr);

}