//Display number ofdigits of a number in reverse order

#include<iostream>
using namespace std;

int Count(int iNo)
{
    int iCount = 0;
    while(iNo != 0)
    {
        iCount++;
        iNo = iNo / 10;
    }

    return iCount;
}

int main()
{   
    int iValue = 0, iRet;

    cout<<"Enter number : "<<endl;
    cin >> iValue;

    iRet = Count(iValue);
    cout<<iRet<<endl;
    return 0;
}