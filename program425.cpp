//GENERIC PROGRAMMING :

#include<iostream>
using namespace std;

double Addition(double iNo1, double iNo2)
{
    double Ans;
    Ans = iNo1 + iNo2;
    return Ans;
}

int main()
{   
    double Value1 = 10.78, Value2 = 11.07;
    double Ret = 0.0;

    Ret = Addition(Value1, Value2);

    cout<<"Addition is : "<<Ret<<"\n";
    return 0;
}