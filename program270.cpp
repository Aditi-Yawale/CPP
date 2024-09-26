//DISPLAY * 4 TIMES - RECURSION

#include<iostream>
using namespace std;

//APPROACH 2 - WHILE LOOP
void Display()
{
    int i = 0;
    
    i = 1;
    while(i <= 4)
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