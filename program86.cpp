//Concatenate 2 strings

#include<iostream>
using namespace std;

void strcatX(char *src, char *dest)
{
        while(*dest != '\0')
        {
            dest++;
        }

        while(*src != '\0')
        {
            *dest = *src;
            src++;
            dest++;
        }
        *dest = '\0';
}

int main()
{
    char Arr[20];   // Bharaleli wahi
    char Brr[20];   // Kori wahi

    cout<<"Enter first string "<<endl;
    cin.getline(Arr,20);

    cout<<"Enter second string "<<endl;
    cin.getline(Brr,20);

    strcatX(Arr,Brr);

    cout<<"String after concatination : "<<Brr<<endl;

    return 0;
}
