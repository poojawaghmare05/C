////Concatenate 2 strings

#include<iostream>
using namespace std;

void strcatX(char *src, char *dest)
{
        while(*src != '\0')
        {
            src++;
        }

        while(*dest != '\0')
        {
            *src = *dest;
            src++;
            dest++;
        }
        *src = '\0';
}

int main()
{
    char Arr[20];   // Bharaleli wahi
    char Brr[20];   // Kori wahi

    cout<<"Enter first string"<<endl;
    cin.getline(Arr,20);

    cout<<"Enter second string"<<endl;
    cin.getline(Brr,20);

    strcatX(Arr,Brr);

    cout<<"String after concatination : "<<Arr<<endl;

    return 0;
}
