//display n to 1 (n from user)

#include<iostream>
using namespace std;

void Display(int iNo)
{   

    if(iNo >=1)
    {
        cout<<iNo<<endl;
        iNo--;
        Display(iNo);
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