#include<iostream>
#include<string.h>

using namespace std;

int main()
{
    char Arr[30] = "Hello World";
    char Brr[30];
    
    
    strcpy(Brr,Arr);
    //Inbuilt function

    cout<<"Destination string is : "<<Brr<<endl;
    
    return 0;
}