#include<iostream>
using namespace std;

int main()
{
    int iLength = 0;
    int *ptr = NULL;
    int i = 0;

    cout<<"Enter number of elements : \n";
    cin>>iLength;

    ptr = new int[iLength];

    cout<<"Enter the elements : \n";
    for(i = 0; i < iLength; i++)
    {
        cin>>ptr[i];
    }

    cout<<"Entered elements are : \n";
    for(i = 0; i < iLength; i++)
    {
        cout<<ptr[i]<<"\n";
    }

    delete []ptr;

    return 0;
}