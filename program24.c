//Display elements of array using malloc

#include<stdio.h>
#include<stdlib.h>      // for malloc and free

void Display(int Arr[], int iLength)
{
    int iCnt = 0;

    printf("Elements of array are : \n");

    //      1               2           3
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        printf("%d\n",Arr[iCnt]);    // 4
    }
}

int main()
{
    int *ptr = NULL;
    int iCnt = 0, iSize = 0;

    printf("Enter the number of elements\n");
    scanf("%d",&iSize);

    ptr = (int *)malloc(iSize * sizeof(int));

    printf("Enter elements : \n");
    for(iCnt = 0; iCnt < iSize; iCnt++ )
    {
        scanf("%d",&ptr[iCnt]);
    }

    Display(ptr, iSize);       // Display(100, 4);
    free(ptr);                 // free(100);
    return 0;
}
