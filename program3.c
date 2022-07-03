//Accept number from user and check whether no is Even or Odd

#include<stdio.h>
#include<stdbool.h>

bool ChkEven(int iNo)                  //(21)
{
       if((iNo % 2) == 0)
       {
            return true;
       }
       else
       {
            return false;
       } 
}

int main()
{
    int iValue = 0;
    bool bRet;

    printf("Enter number\n");
    scanf("%d",&iValue);                 // 21

    bRet = ChkEven(iValue);             // ChkEven(21)

    if(bRet == true)
    {
        printf("%d is even number\n",iValue);
    }
    else
    {
        printf("%d is odd number\n",iValue);
    }
    return 0;
}
