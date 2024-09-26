//compare

#include<iostream>
#include<stdbool.h>

using namespace std;

bool strcmp(char *first, char *second)
{
    // MY LOGIC
    //bool bRet = true;
    // while(*first != '\0')
    // {
    //     if(*first != *second)
    //     {
    //         bRet = false;
    //         break;
    //     }
    //     first++;
    //     second++;
    // } 
    // return bRet;  

    //MY LOGIC HAS ONE ERROR - 'DEMO' & 'DEMOINDIA' SHOWS IDENTICAL

    ///SIR'S LOGIC : 

    bool bFlag = true;

    while((*first != '\0') && (*second != '\0'))
    {
        if(*first != *second)
        {
            break;
        }
        first++;
        second++;
    }

    if((*first == '\0') && (*second == '\0'))
    {
        return true;
    }
    else
    {
        return false;
    }

    return bFlag;
}

int main()
{
    char Arr[30];
    char Brr[30];
    bool bRet = false;
    
    cout<<"Enter the first string : "<<endl;
    cin.getline(Arr, 30);

    cout<<"Enter the second string : "<<endl;
    cin.getline(Brr, 30);

    bRet = strcmp(Arr,Brr);

    if(bRet == true)
    {
        cout<<"Strings are identical"<<endl;
    }
    else
    {
        cout<<"Strings are different"<<endl;
    }
    
    return 0;
}