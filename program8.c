// Accept number from user and display its non factors

#include<stdio.h>

void DisplayNonFactors(int iNo)
{
    int iCnt = 0;
    
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt < iNo ; iCnt++)
    {
        if((iNo % iCnt) != 0)
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

    DisplayNonFactors(iValue);
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






















