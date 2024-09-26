//Accept N numbers from users and return average of the numbers
//Using OOP - class designing

#include<iostream>
using namespace std;

class ArrayX
{
    public:
        int *Arr;
        int iSize;  //No initialiazation as it is in a class

        ArrayX(int No)
        {
            cout <<"Inside constructor"<<endl;
            iSize = iNo;
            Arr = new int[iSize];
        }

        ~ArrayX()
        {
            cout <<"Inside destructor"<<endl;

            delete []Arr;
        }

};

int main()
{
    int iLength = 0;

    cout<<"Enter the number of elements that you want to store : "<<endl;
    cin>>iLength;

    ArrayX aboj(iLength);
    return 0;
}