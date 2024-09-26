//DOUBLY CIRCULAR LINKED LIST -

#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
    struct node *prev;
};

typedef struct node NODE;
typedef struct node* PNODE;

class DoublyCL
{
    private:
        PNODE First;
        PNODE Last;
        int iCount;

    public:
        DoublyCL();

        void Display();
        int Count();

        void InsertFirst(int No);
        void InsertLast(int No);
        void InsertAtPos(int No, int iPos);

        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int iPos);  
};

DoublyCL :: DoublyCL()
{
    iCount = 0;
    First = NULL;
    Last = NULL;
}

void DoublyCL::Display()
{

    if(First == NULL && Last == NULL)
    {
        cout<<"Linked List is empty";
        return;
    }

    cout<<"<=> ";

    do
    {
        cout<<"| "<<First->data<<"| <=> ";
        First = First->next;
    }while(First != Last->next);
    
    cout<<"\n";
}

int DoublyCL::Count()
{
    return iCount;
}

void DoublyCL::InsertFirst(int No)
{
    PNODE newn = NULL;

    newn = new NODE;

    newn->data = No;
    newn->next = NULL;
    newn->prev = NULL;

    if((First == NULL) && (Last == NULL))
    {
        First = newn;
        Last = newn;
    }
    else
    {
        newn->next = First;
        First->prev = newn;
        First = newn;
    }
    Last -> next = First;
    First -> prev = Last;

    iCount++;
}

void DoublyCL::InsertLast(int No)
{
    PNODE newn = NULL;

    newn = new NODE;

    newn->data = No;
    newn->next = NULL;
    newn->prev = NULL;

    if((First == NULL) && (Last == NULL))
    {
        First = newn;
        Last = newn;
    }
    else
    {
        Last ->next = newn;
        newn->prev = Last;
        Last = newn;
    }
    Last -> next = First;
    First -> prev = Last;

    iCount++;
}

void DoublyCL::InsertAtPos(int No, int iPos)
{
    PNODE temp = NULL;
    PNODE newn = NULL;

    int i = 0;

    if(iPos < 1 || iPos > iCount+1)
    {
        cout<<"Invalid Position";
        return;
    }

    if(iPos == 1)
    {
        InsertFirst(No);
    }
    else if(iCount == iCount+1)
    {
        InsertLast(No);
    }
    else
    {
        newn = new NODE;

        newn->data = No;
        newn->next = NULL;
        newn->prev = NULL;
        
        temp = First;

        {
            for(i = 1; i < iPos-1; i++)
            {
                temp = temp->next;
            }
            newn->next = temp->next;
            temp->next->prev = newn;
            temp->next = newn;
            newn->prev = temp;
            iCount++;
        }
        
    }
}

void DoublyCL::DeleteFirst()
{
    if(First == NULL && Last == NULL)   //iCount == 0;
    {
        cout<<"Linked List is empty";
        return;
    }
    else if(First == Last)  //iCount == 1;
    {
        delete First;
        First = NULL;
        Last = NULL;
    }
    else
    {
        First = First -> next;
        delete Last -> next;    //delete First->prev;
        First -> prev = Last;
        Last -> next = First;    
    }    

    iCount--;
}

void DoublyCL::DeleteLast()
{
    if(First == NULL && Last == NULL)   //iCount == 0;
    {
        cout<<"Linked List is empty";
        return;
    }
    else if(First == Last)  //iCount == 1;
    {
        delete First;
        First = NULL;
        Last = NULL;
    }
    else
    {
        Last = Last->prev;
        delete First->prev; //delete Last->next;
        
        First -> prev = Last;
        Last -> next = First;
    }
    
    iCount--;
}

void DoublyCL::DeleteAtPos(int iPos)
{
    PNODE temp = NULL;

    int i = 0;

    if(iPos < 1 || iPos > iCount)
    {
        cout<<"Invalid Position";
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
        
        temp = First;

        {
            for(i = 1; i < iPos-1; i++)
            {
                temp = temp->next;
            }
            
            temp->next = temp->next->next;
            delete temp->next->prev;
            temp->next->prev = temp;

            iCount--;
        }
        
    }
}

int main()
{
    DoublyCL obj;
    int iRet = 0;

    obj.InsertFirst(51);
    obj.InsertFirst(21);
    obj.InsertFirst(11);

    obj.InsertLast(101);
    obj.InsertLast(111);
    obj.InsertLast(121);

    obj.Display();
    iRet = obj.Count();
    cout<<"Number of elements are : "<<iRet<<"\n";
    
    obj.DeleteFirst();

    obj.Display();
    iRet = obj.Count();
    cout<<"Number of elements are : "<<iRet<<"\n";

    obj.InsertAtPos(105, 5);
    obj.Display();
    iRet = obj.Count();
    cout<<"Number of elements are : "<<iRet<<"\n";

    obj.DeleteAtPos(4);
    obj.Display();
    iRet = obj.Count();
    cout<<"Number of elements are : "<<iRet<<"\n";
    

    return 0;
}