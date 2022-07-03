//Accept two numbers from user and swap that 2 numbers (using specific) call by reference

#include<iostream>
using namespace std;

void SwapR(int &p , int &q)
{
    int temp;

    temp = p;
    p = q;
    q = temp;
}

int main()
{
    int No1 = 11;
    int No2 = 21;

    cout<<"Before Swap data is: "<<endl<<No1<<endl<<No2<<endl;

    SwapR(No1 , No2);

    cout<<"After Swap data is: "<<endl<<No1<<endl<<No2<<endl;

    return 0;
}
