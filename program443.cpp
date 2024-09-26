//GENERIC CLASS - VIMP
// MANYY ERRORS

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
        int Addition();         
};

ArrayX :: ArrayX(int no)
{
    iSize = no;
    Arr = new T [iSize];
}

ArrayX ::~ArrayX()
{
    delete []Arr;
}

void ArrayX :: Accept()
{
    int i = 0;

    cout<<"Enter the elements : \n";

    for(i = 0; i < iSize; i++)
    {
        cin >> Arr[i];
    }
}

void ArrayX :: Display()
{
    int i = 0;

    cout<<"Elements of the array are : \n";

    for( i = 0 ; i < iSize; i++)
    {
        cout<<Arr[i]<<"\n";
    }
}

T ArrayX :: Addition()
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
    //very imp
    ArrayX <float>aobj(5);

    aobj.Accept();
    aobj.Display();

    cout<<"Addition is : "<<aobj.Addition()<<"\n";

    
    return 0;
}