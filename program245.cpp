#include<iostream>
using namespace std;

int main()
{
    char Arr[30];
    
    cout<<"Enter your name :"<<endl;
    cin.getline(Arr, 30);

    //Cannot use standard expressions in c++ and java

    cout<<"Hello "<<Arr<<endl;
    
    return 0;
}