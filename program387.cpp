//Aditi Yawale - PD 003
//Singly Cirular Linked List using OOP

#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node* PNODE;

class SinglyCL
{
    private:
        PNODE First;
        PNODE Last;
        int iCount;

    public:
        SinglyCL();

        void Display();
        int Count();

        void InsertFirst(int No);
        void InsertLast(int No);
        void InsertAtPos(int No, int iPos);

        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int iPos);
};

SinglyCL::SinglyCL()
{
    First = NULL;
    Last = NULL;
    iCount = 0;
}

void SinglyCL::Display()
{
    if((First == NULL) && (Last == NULL))
    {
        cout<<"Linked List is Empty"<<endl;
        return;
    }
    do
    {
        cout<<"| "<<First->data<<" |->";
        First = First->next;
    }while(First != Last->next);
    cout<<endl;
}

int SinglyCL::Count()
{
    return iCount;
}

void SinglyCL::InsertFirst(int No)
{
    PNODE newn = NULL;
    
    newn = new NODE;
    newn->data = No;
    newn->next = NULL;

    if(First == NULL)
    {
        First = newn;
        Last = newn;
        newn->next = newn;
    }
    else
    {
        newn->next = First;
        First = newn;
        Last->next = newn;
    }
    iCount++;
}

void SinglyCL::InsertLast(int No)
{
    PNODE newn = NULL;
    
    newn = new NODE;
    newn->data = No;
    newn->next = NULL;

    if(First == NULL)
    {
        First = newn;
        Last = newn;
        newn->next = newn;
    }
    else
    {
        newn->next = Last->next;
        Last->next = newn;
        Last = newn;
    }
    iCount++;
    

}

void SinglyCL::InsertAtPos(int No, int iPos)
{
    int i = 0;
    int iRet = 0;

    iRet = Count();
    
    PNODE temp = NULL;
    PNODE newn = NULL;


    if((iPos < 1) || (iPos > iRet + 1))
    {
        cout<<"Invalid Position"<<endl;
        return;
    }

    if(iPos == 1)
    {
        InsertFirst(No);
    }
    else if(iPos == iRet + 1)
    {
        InsertLast(No);
    }
    else
    {
        temp = First;
        newn = new NODE;

        newn->data = No;
        newn->next = NULL;

        for(i = 1; i < iPos -1; i++)
        {
            temp = temp -> next;
        }

        newn->next = temp -> next;
        temp -> next = newn;
    }
    iCount++;
}

void SinglyCL::DeleteFirst()
{
    if((First == NULL) && (Last == NULL))
    {
        cout<<"Linked list is empty"<<endl;
        return;
    }
    else if(First == Last)
    {
        delete First;
        First = NULL;
        Last = NULL;
    }
    else
    {
        First = First->next;
        delete Last->next;
        Last->next = First;
    }
    iCount--;
}

void SinglyCL::DeleteLast()
{
    PNODE temp = NULL;

    if((First == NULL) && (Last == NULL))
    {
        cout<<"Linked list is empty"<<endl;
        return;
    }
    else if(First == Last)
    {
        delete First;
        First = NULL;
        Last = NULL;
    }
    else
    {
        temp = First;

        while(temp->next->next != First)
        {
            temp = temp->next;
        }
        delete temp->next;
        Last = temp;
        Last -> next = First; 
    }
    iCount--;
}

void SinglyCL::DeleteAtPos(int iPos)
{
    int i = 0;
    int iRet = 0;

    PNODE temp1 = NULL;
    PNODE temp2 = NULL;

    iRet = Count();

    if((iPos < 1) || (iPos > iRet))
    {
        cout<<"Invalid Position"<<endl;
        return;
    }

    if(iPos == 1)
    {
        DeleteFirst();
    }
    else if(iPos == iRet)
    {
        DeleteLast();
    }
    else
    {
        temp1 = First;

        for(i = 1; i < iPos -1; i++)
        {
            temp1 = temp1 -> next;
        }

        temp2 = temp1->next;

        temp1 -> next = temp2->next;
        delete temp2;
    }
    iCount--;

}

int main()
{
    SinglyCL obj;
    int iRet = 0;

    obj.InsertFirst(11);
    obj.InsertFirst(21);
    obj.InsertFirst(51);

    obj.InsertLast(101);
    obj.InsertLast(121);
    obj.InsertLast(151);

    cout<<endl;
    obj.Display();
    iRet = obj.Count();
    cout<<"Number of nodes : "<<iRet<<endl;

    obj.InsertAtPos(105, 5);

    cout<<endl;
    obj.Display();
    iRet = obj.Count();
    cout<<"Number of nodes : "<<iRet<<endl;

    obj.DeleteFirst();

    cout<<endl;
    obj.Display();
    iRet = obj.Count();
    cout<<"Number of nodes : "<<iRet<<endl;

    obj.DeleteLast();

    cout<<endl;
    obj.Display();
    iRet = obj.Count();
    cout<<"Number of nodes : "<<iRet<<endl;

    obj.DeleteAtPos(3);

    cout<<endl;
    obj.Display();
    iRet = obj.Count();
    cout<<"Number of nodes : "<<iRet<<endl;

    return 0;
}
