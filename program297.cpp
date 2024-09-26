//Display factors

#include<iostream>
using namespace std;

void Factors(int iNo)
{
    static int i = 1;
    if(i <= (iNo/2))
    {
        if(iNo % i == 0)
        {
            cout<<i<<endl;
        }
        i++;
        Factors(iNo);
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