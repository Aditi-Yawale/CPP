//Program to find the difference between the sum of even and odd digits of a given number

#include<iostream>
using namespace std;

int SumDiffrence(int iNo)
{
    int iDigit = 0, iSumE = 0, iSumO = 0;
    int iDff = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if((iDigit % 2) == 0)
        {
            iSumE = iSumE + iDigit;
        }
        else
        {
            iSumO = iSumO + iDigit;
        }
        iNo = iNo / 10;
    }
    iDff = iSumE - iSumO;
    return iDff;
}

int main()
{
    int iValue = 0, iRet = 0;

    cout<<"Enter number : "<<endl;
    cin>>iValue;

    iRet = SumDiffrence(iValue);

    cout<<"Diffrence is : "<<iRet<<endl;

    return 0;
}