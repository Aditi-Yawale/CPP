//add 1 to n (n from user)

#include<iostream>
using namespace std;

int Addition(int iNo)
{       
    int iSum = 0, i = 0;

    i = 1;
    while(i <= iNo)
    {
        iSum = iSum + i;
        i++;
    }

    return iSum;
}

int main()
{   
    int iValue = 0, iRet = 0;

    cout<<"Enter number : "<<endl;
    cin >> iValue;

    iRet = Addition(iValue);

    cout<<"Addition is "<<iRet<<endl;
    return 0;
}