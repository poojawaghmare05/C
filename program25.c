//Display even elements of array

#include<stdio.h>
#include<stdlib.h>

void DisplayEven(int Arr[], int iLength)
{
    int iCnt = 0;

    printf("Even elements are : \n");

    for(iCnt = 0; iCnt < iLength ; iCnt++)
    {
        if((Arr[iCnt] % 2) == 0)
        {
            printf("%d\n",Arr[iCnt]);
        }
    }
}

int main()
{
    int iSize = 0, iCnt = 0;
    int *ptr = NULL;

    printf("Enter number of elements : \n");
    scanf("%d",&iSize);

    ptr = (int *)malloc(iSize * sizeof(int));

    printf("Enter the values of array : \n");
    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    DisplayEven(ptr, iSize);
    free(ptr);
    return 0;
}

/*

    Steps to solve Problems on N numbers

    Step 1 :    Accept the size of array from user                          (main)

    Step 2 :    Allocate the memory dinamically for that array              (main)

    Step 3 :    Accept the values from user and store in the array          (main)

    Step 4 :    Pass that array and size to the function (Logic)            (Helper Function)

    Step 5 :    Deallocate memory of that array                             (main)

*/



















