#include<iostream>
#include<string.h>

using namespace std;

int main()
{
    char Arr[30] = "Hello World";
   
    int iRet = 0;
    
    iRet = strlen(Arr);
    //Inbuilt function

    cout<<"String length is : "<<iRet<<endl;
    
    return 0;
}