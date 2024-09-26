//Swapping - CALL BY REFERENCE

#include<iostream>
using namespace std;

void Swap(char &A, char &B)   //& = Reference
{
    char Temp;
    
    Temp = A;
    A = B;
    B = Temp;
}
int main()
{
    char Value1 = 'A', Value2 = 'M';

    cout<<"Value of Value1 variable is : "<<Value1<<"\n";
    cout<<"Value of Value2 variable is : "<<Value2<<"\n";

    Swap(Value1, Value2);

    cout<<"Value of Value1 variable after swapping is : "<<Value1<<"\n";
    cout<<"Value of Value2 variable after swapping is : "<<Value2<<"\n";

    return 0;
}