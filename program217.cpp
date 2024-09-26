//Accept N numbers from users and return average of the numbers

#include<iostream>
using namespace std;

int main()
{
    int iLength = 0, i = 0;
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

    cout<<"Entered elements are : "<< endl;
    for(i = 0; i<iLength; i++)
    {
        cout<<ptr[i]<<endl;
    }
    
    delete []ptr;
    //free(ptr); -- in C

    return 0;
}