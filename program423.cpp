//GENERIC PROGRAMMING :

#include<iostream>
using namespace std;

int Addition(int iNo1, int iNo2)
{
    int Ans;
    Ans = iNo1 + iNo2;
    return Ans;
}

int main()
{   
    int Value1 = 10, Value2 = 11;
    int Ret = 0;

    Ret = Addition(Value1, Value2);

    cout<<"Addition is : "<<Ret<<"\n";
    return 0;
}