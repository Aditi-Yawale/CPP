//find max - generic

#include<iostream>
using namespace std;

template <class T>
T Maximum(T Arr[], int Size)
{
    int i = 0;
    T Max = Arr[0];    
    
    for(i = 0; i < Size; i++)
    {
        if(Arr[i] > Max)
        {
            Max = Arr[i];
        }
    }
    return Max;
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

    fRet = Maximum(ptr, iLength);

    cout<<"Maximum element is : "<<fRet<<"\n";
    delete []ptr;

    return 0;
}