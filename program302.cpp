//COUNT CAPITAL RECURSIVE
#include<iostream>
using namespace std;

int CountCapital(char *str)
{
    static int iCount = 0;
    if(*str != '\0')
    {
        if((*str >= 'A') && (*str <= 'Z'))
        {
            iCount++;
        }
        str++;
        CountCapital(str);
    }
    return iCount;
}
int main()
{   
    char Arr[30];
    int iRet = 0;

    cout<<"Enter string : "<<endl;

    cin.getline(Arr, 30);

    iRet = CountCapital(Arr);
    cout<<"Capital letters are : "<<iRet<<endl;

}