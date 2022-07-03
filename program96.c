//257
#include<stdio.h>

int FactorialR(int iNo)     //Recurssion
{
    static int iFact = 1;

    if(iNo > 0)
    {
        iFact = iFact * iNo;
        iNo--;
        FactorialR(iNo);
    }
    return iFact;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the Number\n");
    scanf("%d" , &iValue);

    iRet = FactorialR(iValue);

    printf("Factorial is: %d\n" , iRet);
}
