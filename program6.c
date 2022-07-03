// 1    4000
// 2    8000
// 5    20000
// 10   40000

#include<stdio.h>

void JwelersPortal(int iWeight)
{
    switch(iWeight)
    {
        case 1:
            printf("Your bill amount is 4000\nThank You For Shopping....\n");
            break;

        case 2:
            printf("Your bill amount is 8000\nThank You For Shopping....\n");
            break;

        case 5:
            printf("Your bill amount is 20000\nThank You For Shopping....\n");
            break;

        case 10:
            printf("Your bill amount is 40000\nThank You For Shopping....\n");
            break;

        default:
            printf("Invalid weight\nThank You For Visiting our Shop....\n");
    }
}

int main()
{
    int iValue = 0;

    printf("Welcome to our Shop....\nSelect the gold coin size that you want to purchase..?\n");

    printf("One Gram Coin\n");
    printf("Two Gram Coin\n");
    printf("Five Gram Coin\n");
    printf("Ten Gram Coin\n");

    scanf("%d",&iValue);

    JwelersPortal(iValue);

    return 0;
}