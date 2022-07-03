// Input :  Row 4   Columns    4
/*

A   A   A   A
B   B   B   B
C   C   C   C
D   D   D   D

*/

#include<stdio.h>

void Display(int iRow, int iCol)
{
        int i = 0, j = 0;
        char ch = '\0';

        for(i = 1,ch = 'A'; i <= iRow;i++,ch++)
        {
            for(j = 1; j<= iCol; j++)
            {
                printf("%c\t",ch);
            }
            printf("\n");
        }
}

int main()
{
    int iValue1 =0, iValue2 = 0;

    printf("Enter number of rows :\n");
    scanf("%d",&iValue1);

    printf("Enter number of columns :\n");
    scanf("%d",&iValue2);

    Display(iValue1,iValue2);

    return 0;
}