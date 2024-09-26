#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

class SinglyLL
{
    public:
        PNODE First;
        int iCount;

        SinglyLL();
        
};

SinglyLL :: SinglyLL()
{
    cout<<"Inside constructor\n";
    First = NULL;
    iCount = 0;
}
int main()
{
    SinglyLL obj;
    return 0;
}