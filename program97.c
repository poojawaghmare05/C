// accept array from user and perform the addition of array using recurssion

#include<stdio.h>

int SumArray(int Arr[] , int iSize)
{
    static int i = 0; 
    static int iSum = 0;

    if(i < iSize)
    {
        iSum = iSum + Arr[i]; 
        i++;
        SumArray(Arr , iSize);
    }
    return iSum;
}

int main()
{
    int Brr[] = {10 , 20 , 30 , 40};
    int iRet = 0;

    iRet = SumArray(Brr , 4);

    printf("Summation of Array is : %d\n" , iRet);

    return 0;
}
