//display n to 1 (n from user)

#include<iostream>
using namespace std;

void Display(int iNo)
{
    // MY LOGIC - 
    // int i = iNo;
    // while(i >= 1)
    // {
    //     cout<<i<<endl;
    //     i--;
    // }

    //SIR'S LOGIC - 
    while(iNo >=1)
    {
        cout<<iNo<<endl;
        iNo--;
    }
}

int main()
{   
    int iValue = 0;

    cout<<"Enter number : "<<endl;
    cin >> iValue;

    Display(iValue);

    cout<<"End of application"<<endl;
    return 0;
}