//Accept string from user and return string length

#include<iostream>
using namespace std;

int strlenX(char str[])
{
    int iCnt = 0;

    while(*str != '\0')
    {
        iCnt++;
        str++;
    }
    return iCnt;
}

int main()
{
    char Arr[20];
    int iRet = 0;

    cout<<"Enter string"<<endl;
    cin.getline(Arr,20);

    iRet = strlenX(Arr);
    cout<<"String length is : "<<iRet<<endl;

    return 0;
}
