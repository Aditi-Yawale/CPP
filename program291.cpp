//Display sum of digits of a number in reverse order

#include<iostream>
using namespace std;

int SumDigits(int iNo)
{
    static int iSum = 0;
    int iDigit = 0;
    if(iNo != 0)
    {
        iDigit = iNo % 10;
        iSum = iSum + iDigit;

        //SHORTHAND FUNCTION
        SumDigits(iNo / 10);
    }

    return iSum;
}

int main()
{   
    int iValue = 0, iRet;

    cout<<"Enter number : "<<endl;
    cin >> iValue;

    iRet = SumDigits(iValue);
    cout<<"Sum is : "<<iRet<<endl;
    return 0;
}