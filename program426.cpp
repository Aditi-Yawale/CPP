//GENERIC PROGRAMMING :

#include<iostream>
using namespace std;

template<class T> //Template Header
T Addition(T iNo1, T iNo2)
{
    T Ans;
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