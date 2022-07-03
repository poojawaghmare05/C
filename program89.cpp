//Accept two numbers from user and swap that 2 numbers (using specific) call by address

#include<iostream>
using namespace std;

void SwapA(int *p , int *q)
{
    int temp;

    temp = *p;
    *p = *q;
    *q = temp;
}

int main()
{
    int No1 = 11;
    int No2 = 21;

    cout<<"Before Swap data is: "<<endl<<No1<<endl<<No2<<endl;

    SwapA(&No1 , &No2);

    cout<<"After Swap data is: "<<endl<<No1<<endl<<No2<<endl;

    return 0;
}
