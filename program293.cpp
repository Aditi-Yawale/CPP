

//Display sum of digits of a number in reverse order

#include<iostream>
using namespace std;

int SumDigits(int iNo)
{
    int iSum = 0;
    if(iNo != 0)
    {
        //SHORTHAND UPDATION
        iSum = iSum + (iNo % 10);

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