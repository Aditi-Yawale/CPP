//DISPLAY * 4 TIMES - RECURSION

#include<iostream>
using namespace std;

//APPROACH 3 - USING RECURSSION - wrong
void Display()
{
    int i = 0;
    
    i = 1;
    if(i <= 4)
    {
        cout<<"*"<<endl;
        i++;
    }

}

int main()
{   
    Display();
    return 0;
}