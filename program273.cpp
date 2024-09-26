//DISPLAY * 4 TIMES - RECURSION

#include<iostream>
using namespace std;

//APPROACH 3 - USING RECURSSION ; right
void Display()
{
    static int i = 1;
    if(i <= 4)
    {
        cout<<"*"<<endl;
        i++;
        Display();
    }

}

int main()
{   

    Display();

    return 0;
}