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
    
    PNODE temp = First;

    while(temp!=NULL)
    {
        cout<<"|"<<temp->data<<"|->";
        
        temp = temp->next;
    }
     cout<<"NULL"<<endl;
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
    PNODE newn = NULL;
    PNODE temp = First;

    newn = new NODE;  

    newn->data = iNo;
    newn->next = NULL;

    if(First == NULL)
    {
        First = newn;
    }
    else
    {
        while(temp->next!=NULL)
        {
            temp = temp->next;
        }
        temp->next = newn;
    }

    iCount++;
}

void SinglyLL :: InsertAtPos(int iNo, int iPos)
{
    
}

void SinglyLL :: DeleteFirst()
{
    PNODE temp = First;
    if(First == NULL)\

    {
        cout<<"Linked List is empty";
        return;
    }
    else if(First->next == NULL)
    {
        delete First;
        First = NULL;
    }
    else
    {
        First = First->next;
        delete temp; //To keep 1st address;
    }
    iCount--;
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

    obj.InsertLast(101);
    obj.InsertLast(111);
    obj.InsertLast(121);

    iRet = obj.Count();
    cout<<"Number of nodes are : "<<iRet<<endl;
    obj.Display();

    obj.DeleteFirst();

    iRet = obj.Count();
    cout<<"Number of nodes are : "<<iRet<<endl;
    obj.Display();
    return 0;
}