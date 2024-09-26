//Accept N numbers from users and return average of the numbers
//Using OOP - class designing

#include<iostream>
using namespace std;

class ArrayX
{
    private:
        int *Arr;
        int iSize;  

    public:
        ArrayX(int iNo)
        {
            iSize = iNo;
            Arr = new int[iSize];
        }

        ~ArrayX()
        {
            delete []Arr;
        }

        void Accept()
        {
            int i = 0;

            cout<<"Enter the elements : "<<endl;
            for(i = 0; i < iSize; i++)
            {
                cin>>Arr[i];
            }
        }

        void CalculateDigits()
        {
            int i = 0;
            int iNo = 0, iCount = 0;

            for(i = 0; i < iSize; i++)
            {
                iNo = Arr[i];
                while(iNo != 0 )
                {
                    iCount++;
                    iNo = iNo/10;
                }
                cout<<Arr[i]<<" contains "<<iCount<<" digits in it"<<endl;
                iCount = 0;
            }
        }

};

int main()
{
    int iLength = 0;

    cout<<"Enter the number of elements that you want to store : "<<endl;
    cin>>iLength;

    ArrayX *aobj = new ArrayX(iLength); //Dynamic object creation

    aobj->Accept();
    aobj->CalculateDigits();
    
    delete aobj;

    return 0;
}
