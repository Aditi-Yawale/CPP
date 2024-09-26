//Sum of digtis of each element in an array
//Using OOP - class designing

//MODULAR APPROACH - SEPERATE EVERY FUNCTION

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

        int SumDigits(int iNo)
        {
            int iSum = 0;  
            
            while(iNo != 0 )
            {
                iSum = iSum + (iNo % 10);
                iNo = iNo/10;
            }
            return iSum;
        }

        void DisplayDigitsSum()
        {
            int i = 0, iRet = 0;

            for(i = 0; i < iSize; i++)
            {
                iRet = SumDigits(Arr[i]);
                cout<<"Sum of digits of "<<Arr[i]<<" is : "<<iRet<<endl; 
            }
        }
};

int main()
{
    int iLength = 0;

    cout<<"Enter the number of elements that you want to store : "<<endl;
    cin>>iLength;

   // ArrayX aobj(iLength);             Static object creation
   ArrayX *aobj = new ArrayX(iLength); //Dynamic object creation

    aobj->Accept();
    aobj->DisplayDigitsSum();
    
    delete aobj;

    return 0;
}
