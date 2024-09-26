#include<iostream>
using namespace std;

int Addition(int Arr[], int iSize)
{
    int i = 0, iSum = 0;
    
    for(i = 0; i < iSize; i++)
    {
        iSum = iSum + Arr[i];
    }
    return iSum;
}

int main()
{
    int iLength = 0;
    int *ptr = NULL;
    int i = 0, iRet = 0;

    cout<<"Enter number of elements : \n";
    cin>>iLength;

    ptr = new int[iLength];

    cout<<"Enter the elements : \n";
    for(i = 0; i < iLength; i++)
    {
        cin>>ptr[i];
    }

    iRet = Addition(ptr, iLength);

    cout<<"Addition is : "<<iRet<<"\n";
    delete []ptr;

    return 0;
}