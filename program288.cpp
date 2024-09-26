//Display number ofdigits of a number in reverse order

#include<iostream>
using namespace std;

int Count(int iNo)
{
    static int iCount = 0;
    if(iNo != 0)
    {
        iCount++;
        iNo = iNo / 10;
        Count(iNo);
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