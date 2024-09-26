//GENERIC CLASS - VIMP
// Dynamic object creation

#include<iostream>
using namespace std;

template <class T> // template header
class ArrayX
{
    public:
        T *Arr;
        int iSize;

        ArrayX(int no);
        ~ArrayX(); 
        void Accept();     
        void Display();
        T Addition();         
};

template <class T>
ArrayX<T> :: ArrayX(int no)
{
    iSize = no;
    Arr = new T [iSize];
}

template <class T>
ArrayX<T> ::~ArrayX()
{
    delete []Arr;
}

template <class T>
void ArrayX<T>:: Accept()
{
    int i = 0;

    cout<<"Enter the elements : \n";

    for(i = 0; i < iSize; i++)
    {
        cin >> Arr[i];
    }
}

template <class T>
void ArrayX<T> :: Display()
{
    int i = 0;

    cout<<"Elements of the array are : \n";

    for( i = 0 ; i < iSize; i++)
    {
        cout<<Arr[i]<<"\n";
    }
}

template <class T>
T ArrayX<T> :: Addition()
{
    int i = 0;
    T Sum;

    for(i = 0; i < iSize; i ++)
    {
        Sum = Sum + Arr[i];
    }
    return Sum;
}

int main()
{
    ArrayX<float> *fobj = new ArrayX<float>(5);

    fobj->Accept();
    fobj->Display();

    cout<<"Addition is : "<<fobj->Addition()<<"\n";

    ArrayX<int> *iobj = new ArrayX<int>(5);

    iobj->Accept();
    iobj->Display();

    cout<<"Addition is : "<<iobj->Addition()<<"\n";

    
    return 0;
}