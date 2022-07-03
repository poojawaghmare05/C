//input hello
//output   h     Recurssion
//         e
//         l
//         l 
//         o
#include<stdio.h>

void Display(char *str)
{
    if(*str != '\0')
    {
        printf("%c\n" , *str);  
        //Display(str++); Display(100)Display(100)Display(100)Display(100)(post inctrement bcoz its part of expression)
        Display(++str);  // Tail recurssion
    }
}

int main()
{
    char Arr[20];

    printf("Enter String \n");
    scanf("%[^'\n']s" , Arr);

    Display(Arr);

}