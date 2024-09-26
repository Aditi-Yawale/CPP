//Display digits of a number in reverse order

#include<iostream>
using namespace std;

void Display(int iNo)
{
    //static int iDigit = 0; - NEED NOT BE STATIC

    int iDigit = 0;

    if(iNo != 0)
    {
        iDigit = iNo % 10;
        cout<<iDigit<<endl;
        iNo = iNo / 10;
        Display(iNo);
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