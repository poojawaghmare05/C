//Accept two numbers and swap that 2 numbers (using generic) call by address

#include<iostream>
using namespace std;

template<class T>

void SwapA(T *p , T *q)
{
    T temp;

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

    float fNo1 = 11.5;
    float fNo2 = 21.6;
    cout<<"Before Swap data is: "<<endl<<fNo1<<endl<<fNo2<<endl;
    SwapA(&fNo1 , &fNo2);
    cout<<"After Swap data is: "<<endl<<fNo1<<endl<<fNo2<<endl;

    char cNo1 = 'A';
    char cNo2 = 'B';
    cout<<"Before Swap data is: "<<endl<<cNo1<<endl<<cNo2<<endl;
    SwapA(&cNo1 , &cNo2);
    cout<<"After Swap data is: "<<endl<<cNo1<<endl<<cNo2<<endl;

    return 0;
}
