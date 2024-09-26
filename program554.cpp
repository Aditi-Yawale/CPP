//BINARY SEARCH


#include<iostream>
using namespace std;

template <class T>
class ArrayX
{
    public:
        T *Arr;
        int iSize;

        ArrayX(int Value);
        ~ArrayX();
        void Accept();
        void Display();
        bool LinearSearch(T value);
        bool BiDirectionalSearch(T value);
        bool BinarySearch(T Value);

};

template <class T>
ArrayX<T>::ArrayX(int Value)
{
    this->iSize = Value;
    this->Arr = new T[iSize];
}

template <class T>
ArrayX<T>::~ArrayX()
{
    delete []Arr;
}

template <class T>
void ArrayX<T>::Accept()
{
    int i = 0;

    cout<<"Enter the elements : \n";
    for(i = 0; i < iSize; i++)
    {
        cin>>Arr[i];
    }
}

template <class T>
void ArrayX<T>::Display()
{
    int i = 0;

    cout<<"Entered elements are : \n";
    for(i = 0; i < iSize; i++)
    {
        cout<<Arr[i]<<"\n";
    }
}

template <class T>
bool ArrayX<T>::LinearSearch(T value)
{
    int i = 0;
    bool flag = false;
    for(i = 0; i < iSize; i++)
    {
        if(Arr[i] == value)
        {
            flag = true;
            break;
        }
    }
    return flag;
}

template <class T>
bool ArrayX<T>:: BiDirectionalSearch(T value)
{
    int iStart = 0, iEnd = 0;
    bool flag = false;

    for(iStart = 0, iEnd = iSize-1; iStart <=iEnd; iStart++, iEnd--)
    {
        if((Arr[iStart] == value) || (Arr[iEnd] == value))
        {
            flag = true;
            break;
        }
    }
    return flag;

}

template <class T>
bool ArrayX<T>:: BinarySearch(T Value)
{
    int iStart = 0, iEnd = 0, iMid = 0;
    bool flag = false;

    iStart = 0;
    iEnd = iSize - 1;

    while(iStart <= iEnd)
    {
        iMid = iStart + ((iEnd - iStart) / 2);

        if(Arr[iMid] == Value)
        {
            flag = true;
            break;
        }
        else if(Value > Arr[iMid])
        {
            iStart = iMid + 1;
        }
        else if(Value < Arr[iMid])
        {
            iEnd = iMid - 1;
        }
    }
    return flag;
}


int main()
{
    int iLength = 0;
    bool bRet = false;
    int iNo = 0;

    cout<<"Enter the number of elements : \n";
    cin>>iLength;

    ArrayX<int> *aobj = new ArrayX<int>(iLength);

    aobj->Accept();
    aobj->Display();

    cout<<"Enter the number to search : \n";
    cin>>iNo;
    bRet = aobj->BinarySearch(iNo);
    
    if(bRet == true)
    {
        cout<<"Element is present \n";
    }
    else
    {
        cout<<"Element is NOT present \n";
    }
    delete aobj;
    
    return 0;
}