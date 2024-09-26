//LINKED LIST OF CHARACTER

#include<iostream>
using namespace std;

struct node
{
    char data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node* PNODE;

class SinglyLL
{
    private:
        PNODE First;
        int iCount;
    public:
        SinglyLL();

        void Display();
        int Count();

        void InsertFirst(char No);
        void InsertLast(char No);
        void InsertAtPos(char No, int iPos);

        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int iPos);
};

SinglyLL::SinglyLL()
{
    cout<<"Inside Constructor\n";
    First = NULL;
    iCount = 0;
}

void SinglyLL::Display()
{
    PNODE temp = First;

    while(temp != NULL)
    {
        cout<<"| "<<temp->data<<"|-> ";
        temp = temp -> next;
    }
    cout<<"NULL\n";
}

int SinglyLL::Count()
{
    return iCount;
}

void SinglyLL::InsertFirst(char No)
{
    PNODE newn = NULL;

    newn = new NODE;    // malloc

    newn->data = No;
    newn->next = NULL;

    if(First == NULL) // if(iCount == 0)
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

void SinglyLL::InsertLast(char No)
{
    PNODE newn = NULL;
    PNODE temp = First;

    newn = new NODE;    // malloc

    newn->data = No;
    newn->next = NULL;

    if(First == NULL) // if(iCount == 0)
    {
        First = newn;
    }
    else
    {
        while(temp->next != NULL)
        {
            temp = temp -> next;
        }
        temp -> next = newn;
    }
    iCount++;
}

void SinglyLL::InsertAtPos(char No, int iPos)
{
    PNODE newn = NULL;
    int i = 0;
    PNODE temp;

    if((iPos < 1) || (iPos > iCount+1))
    {
        cout<<"Invalid position\n";
        return;
    }

    if(iPos == 1)
    {
        InsertFirst(No);
    }
    else if(iPos == iCount+1)
    {
        InsertLast(No);
    }
    else 
    {
        temp = First;
        
        newn = new NODE;
        newn->data = No;
        newn->next = NULL;

        for(i = 1; i < iPos-1; i++)
        {
            temp = temp -> next;
        }

        newn->next = temp->next;
        temp -> next = newn;
        iCount++;
    }
}

void SinglyLL::DeleteFirst()
{
    PNODE temp = First;

    if(First == NULL)
    {
        cout<<"LL is empty\n";
        return;
    }
    else if(First -> next == NULL)
    {
        delete First;
        First = NULL;
    }
    else
    {
        First = First -> next;
        delete temp;
    }
    iCount--;
}

void SinglyLL::DeleteLast()
{
    PNODE temp = First;

    if(First == NULL)
    {
        cout<<"LL is empty\n";
        return;
    }
    else if(First -> next == NULL)
    {
        delete First;
        First = NULL;
    }
    else
    {
        while(temp->next->next != NULL)
        {
            temp = temp ->next;
        }
        delete temp->next;
        temp->next = NULL;
    }
    iCount--;
}

void SinglyLL::DeleteAtPos(int iPos)
{
    int i = 0;
    PNODE temp1;
    PNODE temp2;

    if((iPos < 1) || (iPos > iCount))
    {
        cout<<"Invalid position\n";
        return;
    }

    if(iPos == 1)
    {
        DeleteFirst();
    }
    else if(iPos == iCount)
    {
        DeleteLast();
    }
    else 
    {
        temp1 = First;

        for(i = 1; i < iPos-1; i++)
        {
            temp1 = temp1 -> next;
        }

        temp2 = temp1->next;

        temp1->next = temp2->next;
        delete temp2;

        iCount--;
    }    
}

int main()
{
    SinglyLL obj;
    int iRet = 0;

    obj.InsertFirst('A');
    obj.InsertFirst('B');
    obj.InsertFirst('C');

    obj.Display();
    iRet = obj.Count();
    cout<<"Number of elemensts are : "<<iRet<<endl;

    obj.InsertLast('R');
    obj.InsertLast('U');
    obj.InsertLast('S');
    
    obj.Display();
    iRet = obj.Count();
    cout<<"Number of elemensts are : "<<iRet<<endl;

    obj.InsertAtPos('V',5);

    obj.Display();
    iRet = obj.Count();
    cout<<"Number of elemensts are : "<<iRet<<endl;

    obj.DeleteAtPos(5);
    obj.Display();
    iRet = obj.Count();
    cout<<"Number of elemensts are : "<<iRet<<endl;

    return 0;
}