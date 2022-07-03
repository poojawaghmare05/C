//Accept string and toggle upper to lower and lower to upper

#include<iostream>
using namespace std;

void strtoggleX(char str[])
{
    while(*str != '\0')
    {
        if((*str >= 'A') && (*str <= 'Z'))
        {
            *str = *str + 32;
        }
        else if((*str >= 'a') && (*str <= 'z'))
        {
            *str = *str - 32;
        }
        str++;
    }
}

int main()
{
    char Arr[20];

    cout<<"Enter string"<<endl;
    cin.getline(Arr,20);

    strtoggleX(Arr);

    cout<<"String after toggle : "<<Arr<<endl;

    return 0;
}
