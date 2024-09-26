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

    //Logic

    //free(ptr); -- in C

    return 0;
}