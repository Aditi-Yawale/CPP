//FINAL SLL USING OOP - WITHOUT MY COMMENTS

#include<iostream>
using namespace std;

struct node
{
    int data;
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

    newn = new NODE;   

    newn->data = iNo;
    newn->next = NULL;

    if(First == NULL) 
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
    PNODE newn = NULL;
    int i = 0;
    PNODE temp = NULL;

    if((iPos < 1) ||(iPos > iCount+1))
    {
        cout<<"Invalid Position"<<endl;
        return;
    }

    if(iPos == 1)
    {
        InsertFirst(iNo);
    }
    else if(iPos == iCount+1)
    {
        InsertLast(iNo);
    }
    else
    {
        temp = First;
        newn = new NODE;
        newn -> data = iNo;
        newn -> next = NULL;

        for(i = 1; i<iPos-1; i++)
        {
            temp = temp->next;
        }

        newn->next  = temp->next;
        temp->next = newn;
        iCount++;
    }
   
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
        delete temp; 
    }
    iCount--;
}

void SinglyLL :: DeleteLast()
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
        while(temp->next->next!=NULL)
        {
            temp = temp->next;
        }
        delete temp->next;
        temp->next = NULL;
    }
    iCount--;
}

void SinglyLL :: DeleteAtPos(int iPos)
{
    int i = 0;
    PNODE temp1 = NULL;
    PNODE temp2 = NULL;


    if((iPos < 1) ||(iPos > iCount))
    {
        cout<<"Invalid Position"<<endl;
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

        for(i = 1; i<iPos-1; i++)
        {
            temp1 = temp1->next;
        }

        temp2 = temp1 -> next;
        temp1->next = temp2->next;
        delete temp2;

        iCount--;       
    }
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

    obj.DeleteLast();

    iRet = obj.Count();
    cout<<"Number of nodes are : "<<iRet<<endl;
    obj.Display();

    obj.InsertAtPos(105,5);

    iRet = obj.Count();
    cout<<"Number of nodes are : "<<iRet<<endl;
    obj.Display();

    obj.DeleteAtPos(5);

    iRet = obj.Count();
    cout<<"Number of nodes are : "<<iRet<<endl;
    obj.Display();

    return 0;
}