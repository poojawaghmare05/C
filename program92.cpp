//Accept two numbers and return addition  (using generic)

#include<iostream>
using namespace std;

template<class T>

int Addition(T A , T B)
{
    T Ans;
    Ans = A + B;
    return Ans;
}

int main()
{
    int No1 = 11;
    int No2 = 21;
    int ret = 0;
    ret = Addition(No1 , No2);
    cout<<"Addition is: "<<ret<<endl;

    float fNo1 = 11.78;
    float fNo2 = 21.7;
    float fret = 0.0;
    fret = Addition(fNo1 , fNo2);
    cout<<"Addition is: "<<fret<<endl;
   
    return 0;
}
