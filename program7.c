// Accept number from user and display its factors

// Input :      10
// Output :    1    2   5

// Input :      9
// Output :     1     3

// Input :          17
// Output :         1

// Input :          20
// Output :         1   2   4   5   10

// Input :          -20
// Output :         1     2     4       5       10

#include<stdio.h>

void DisplayFactors(int iNo)
{
    int iCnt = 0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= (iNo/2) ; iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            printf("%d\n",iCnt);
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    DisplayFactors(iValue);
    return 0;
}

// Time Complexity : O(N/2)



/*
Input : 10
iNo = 10

if((iNo % 1) == 0)
{}
if((iNo % 2) == 0)
{}
if((iNo % 3) == 0)
{}
if((iNo % 4) == 0)
{}
if((iNo % 5) == 0)
{}
if((iNo % 6) == 0)
{}
if((iNo % 7) == 0)
{}
if((iNo % 8) == 0)
{}
if((iNo % 9) == 0)
{}

















*/






















