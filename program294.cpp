//Display sum of digits of a number in reverse order

#include<iostream>
using namespace std;

int SumDigitsI(int iNo)
{
    int iSum = 0;
    int iDigit = 0;
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iSum = iSum + iDigit;
        iNo = iNo / 10;
    }

    return iSum;
}

int SumDigitsR(int iNo)
{
    static int iSum = 0;
    if(iNo != 0)
    {
        //SHORTHAND UPDATION
        iSum = iSum + (iNo % 10);

        //SHORTHAND FUNCTION
        SumDigitsR(iNo / 10);
    }

    return iSum;
}

int main()
{   
    int iValue = 0, iRetI, iRetR;

    cout<<"Enter number : "<<endl;
    cin >> iValue;

    iRetR = SumDigitsR(iValue);

    cout<<"Sum is : "<<iRet<<endl;
    return 0;
}