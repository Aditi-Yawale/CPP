//find max

#include<iostream>
using namespace std;

float Maximum(float Arr[], int Size)
{
    int i = 0;
    float fMax = Arr[0];    
    
    for(i = 0; i < Size; i++)
    {
        if(Arr[i] > fMax)
        {
            fMax = Arr[i];
        }
    }
    return fMax;
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