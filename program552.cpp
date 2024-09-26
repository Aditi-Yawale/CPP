//BIDIRECTIONAL SEARCH

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
//MY LOGIC - CORRECT
// template <class T>
// bool ArrayX<T>:: BiDirectionalSearch(T value)
// {
//     int i = 0, j = 0;
//     bool flag = false;

//     for(i = 0, j = iSize; i < iSize, j >= 0; i++, j--)
//     {
//         if((Arr[i] == value) || (Arr[j] == value))
//         {
//             flag = true;
//             break;
//         }
//     }
//     return flag;

// }

template <class T>
bool ArrayX<T>:: BiDirectionalSearch(T Value)
{
    int iStart = 0;
    int iEnd = iSize - 1;
    bool flag = false;

    while(iStart <= iEnd)
    {
        if(Arr[iStart] == Value || Arr[iEnd] == Value)
        {
            flag = true;
            break;
        }
        iStart++;
        iEnd--;
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
    bRet = aobj->BiDirectionalSearch(iNo);
    
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