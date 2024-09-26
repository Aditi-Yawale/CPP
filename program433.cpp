#include<iostream>
using namespace std;

float Addition(float Arr[], int iSize)
{
    int i = 0;
    float fSum = 0.0f;
    
    for(i = 0; i < iSize; i++)
    {
        fSum = fSum + Arr[i];
    }
    return fSum;
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