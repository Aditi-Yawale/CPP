//Display factors

#include<iostream>
using namespace std;

void Factors(int iNo)
{
    int iCnt = 0;
    for(iCnt = 1; iCnt <= (iNo/2); iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            cout<<iCnt<<endl;
        }
    }
}

int main()
{   
    int iValue = 0, iRet;

    cout<<"Enter number : "<<endl;
    cin >> iValue;

    Factors(iValue);
   
    return 0;
}