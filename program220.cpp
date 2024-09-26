//Accept N numbers from users and return average of the numbers

#include<iostream>
using namespace std;

float Average(int Arr[], int iSize)
{
    int i = 0, iSum = 0;
    float fAns = 0.0f;
    for(i = 0; i<iSize; i++)
    {
        iSum = iSum + Arr[i];
    }

    fAns = (float)iSum / (float)iSize;
    return fAns;
}
int main()
{
    int iLength = 0, i = 0;
    float fRet = 0.0f;
    int *ptr = NULL;

    cout<<"Enter number of elements that you want to store : "<<endl;
    cin>>iLength;

    ptr = new int[iLength];
    // ptr = (int *)malloc(sizeof(int) * iLength); -- in C

    cout<<"Enter the elements : "<<endl;

    for(i = 0; i < iLength; i++)
    {
        cin >> ptr[i];
    }

    fRet = Average(ptr, iLength);
    cout<<"Average is : "<<fRet<<endl;


    
    delete []ptr;
    //free(ptr); -- in C

    return 0;
}