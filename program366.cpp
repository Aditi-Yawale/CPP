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
        
        void Display();
        int Count();

        void InsertFirst(int No);
        void InsertLast(int No);
        void InsertAtPos(int No, int iPos);

        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int iPos);
        
};

SinglyLL :: SinglyLL()
{
    cout<<"Inside constructor\n";
    First = NULL;
    iCount = 0;
}

void SinglyLL :: Display()
{
    // EXTREMELY WRONG LOGIC : (MINE)
    // while(First!=NULL)
    // {
    //     cout<<"|"<<First->data<<"|->";
    //     First = First->next;
    // }
    // cout<<"NULL"<<endl;
}

int SinglyLL :: Count()
{
    return iCount;
}

void SinglyLL :: InsertFirst(int iNo)
{
    PNODE newn = NULL;

    newn = new NODE;    //malloc   

    newn->data = iNo;
    newn->next = NULL;

    if(First == NULL) //DONT USE *FIRST AS OF C
    {
        First = newn;
    }
    else
    {
        newn->next = First;
        First = newn;
    }

    iCount++;
}

void SinglyLL :: InsertLast(int iNo)
{
    
}

void SinglyLL :: InsertAtPos(int iNo, int iPos)
{
    
}

void SinglyLL :: DeleteFirst()
{
    
}

void SinglyLL :: DeleteLast()
{
    
}

void SinglyLL :: DeleteAtPos(int iPos)
{
    
}

int main()
{
    SinglyLL obj;
    int iRet = 0;

    obj.InsertFirst(51);
    obj.InsertFirst(21);
    obj.InsertFirst(11);

    iRet = obj.Count();

    cout<<"Number of nodes are : "<<iRet<<endl;

    obj.Display();
    cout<<"Number of nodes are : "<<iRet<<endl;

    obj.Display();

    return 0;
}