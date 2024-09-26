#include<iostream>
using namespace std;

int CountEven(int Arr[], int iSize)
{
    static int iCount = 0;
    static int i = 0;

    if(i <= iSize)
    {
        if(Arr[i] % 2 == 0)
        {
            iCount++;
        }
        i++;
        CountEven(Arr, iSize);
    }
    return iCount;
}
int main()
{   
    int *Arr = NULL;
    int iCount = 0, i = 0;

    cout<<"Enter number of elements"<<endl;
    cin >> iCount;

    Arr = new int[iCount];

    cout<<"Enter the elements : "<<endl;
    for(i = 0; i < iCount; i++)
    {
        cin >> Arr[i];
    }

    int iRet = CountEven(Arr, iCount);
    cout<<"Number of even elements are :"<<iRet<<endl;

    return 0;
}