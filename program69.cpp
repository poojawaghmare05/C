//Acccept number from user and retun the sum of array

#include<iostream>
using namespace std;

class ArrayX
{
    private:
        int *Arr;
        int iSize;

    public:
        ArrayX(int iValue)              // Parametrised constructor
        {
            this->iSize = iValue;
            Arr = new int[iSize];       // Allocate the Resource
        }

        ~ArrayX()                       // Destructor
        {
            delete []Arr;               // Deallocate the resource
        }

        void Accept()                   // void Accept(ArrayX *this)
        {
            int iCnt = 0;
            cout<<"Enter the elements"<<endl;
            for(iCnt = 0; iCnt < iSize; iCnt++)
            {
                    cin>>Arr[iCnt];
            }
        }

        void Display()
        {
            int iCnt = 0;

            cout<<"Elements of array are "<<endl;
            for(iCnt = 0; iCnt< iSize; iCnt++)
            {
                cout<<Arr[iCnt]<<endl;
            }
        }

        int Sumation()
        {
            int iSum = 0, iCnt = 0;
            //      1               2               3
            for(iCnt = 0; iCnt < iSize; iCnt++)
            {
                iSum = iSum + Arr[iCnt];    // 4
            }
            return iSum;
       }
};

int main()
{
    int iRet = 0;

    ArrayX obj1(5);

    obj1.Accept();               // Accept(&obj1)        Accept(100);
    obj1.Display();              // Display(&obj1)       Display(100);

    iRet = obj1.Sumation();

    cout<<"Addition is : "<<iRet<<endl;

    return 0;
}