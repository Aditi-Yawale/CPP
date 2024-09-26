//GENERIC ADDITION

#include<iostream>
using namespace std;

template <class T>
T Addition(T Arr[], int Size)
{
    int i = 0;
    T Sum;
    
    for(i = 0; i < Size; i++)
    {
        Sum = Sum + Arr[i];
    }
    return Sum;
}

int main()
{
    int iLength = 0;
    float *ptr = NULL;
    int i = 0;
    float fRet = 0.0f;

    cout<<"Enter number of elements : \n";
    cin>>iLength;

    ptr = new float[iLength];

    cout<<"Enter the elements : \n";
    for(i = 0; i < iLength; i++)
    {
        cin>>ptr[i];
    }

    fRet = Addition(ptr, iLength);

    cout<<"Addition is : "<<fRet<<"\n";
    delete []ptr;

    return 0;
}