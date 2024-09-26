//Accept N numbers from users and return average of the numbers
//Using OOP - class designing

#include<iostream>
using namespace std;

class ArrayX
{
    public:
        int *Arr;
        int iSize;  //No initialiazation as it is in a class

        ArrayX(int iNo)
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

        void Accept()
        {
            int i = 0;

            cout<<"Enter the elements : "<<endl;
            for(i = 0; i < iSize; i++)
            {
                cin>>Arr[i];
            }
        }

        void Display()
        {
            int i = 0;

            cout<<"Elements are : "<<endl;
            for(i = 0; i < iSize; i++)
            {
                cout<<Arr[i]<<endl;
            }
        }

};

int main()
{
    int iLength = 0;

    cout<<"Enter the number of elements that you want to store : "<<endl;
    cin>>iLength;

    ArrayX aobj(iLength);

    aobj.Accept();
    aobj.Display();

    aobj.Arr = NULL; //Dangerous
    aobj.iSize = 20; //Dangerous - due to public
    return 0;
}
