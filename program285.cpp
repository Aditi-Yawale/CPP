//Display digits of a number in reverse order

#include<iostream>
using namespace std;

void Display(int iNo)
{
    int iDigit = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        cout<<iDigit<<endl;
        iNo = iNo / 10;
    }
}

int main()
{   
    int iValue = 0;

    cout<<"Enter number : "<<endl;
    cin >> iValue;

    Display(iValue);

    return 0;
}