//GENERIC SINGLY LINEAR LINKED LIST

#include<iostream>
using namespace std;

template <class T>
struct nodeSL
{
    T data;
    struct nodeSL *next;
};

template <class T>
class SinglyLL
{
    private:
        struct nodeSL<T> * First;
        int iCount;

    public:
        SinglyLL();

        void Display();
        int Count();

        void InsertFirst(T No);
        void InsertLast(T No);
        void InsertAtPos(T No, int iPos);

        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int iPos);
};

template <class T>
SinglyLL<T>::SinglyLL()
{
    cout<<"Inside Constructor\n";
    First = NULL;
    iCount = 0;
}

template <class T>
void SinglyLL<T>::Display()
{
    struct nodeSL<T> * temp = First;

    while(temp != NULL)
    {
        cout<<"| "<<temp->data<<"|-> ";
        temp = temp -> next;
    }
    cout<<"NULL\n";
}

template <class T>
int SinglyLL<T>::Count()
{
    return iCount;
}

template <class T>
void SinglyLL<T>::InsertFirst(T No)
{
    struct nodeSL<T> * newn = NULL;

    newn = new nodeSL<T>;    // malloc

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

template <class T>
void SinglyLL<T>::InsertLast(T No)
{
    struct nodeSL<T> * newn = NULL;
    struct nodeSL<T> * temp = First;

    newn = new nodeSL<T>;    // malloc

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

template <class T>
void SinglyLL<T>::InsertAtPos(T No, int iPos)
{
    struct nodeSL<T> * newn = NULL;
    int i = 0;
    struct nodeSL<T> * temp;

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
        
        newn = new nodeSL<T>;
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

template <class T>
void SinglyLL<T>::DeleteFirst()
{
    struct nodeSL<T> * temp = First;

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

template <class T>
void SinglyLL<T>::DeleteLast()
{
    struct nodeSL<T> * temp = First;

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

template <class T>
void SinglyLL<T>::DeleteAtPos(int iPos)
{
    int i = 0;
    struct nodeSL<T> * temp1;
    struct nodeSL<T> * temp2;

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
    //LL OF INTEGER

    cout<<"-----------LinkedList of Floats-----------"<<endl;

    SinglyLL<int> *iobj = new SinglyLL<int>();
    int iRet = 0;

    iobj->InsertFirst(51);
    iobj->InsertFirst(21);
    iobj->InsertFirst(11);

    iobj->Display();
    iRet = iobj->Count();
    cout<<"Number of elemensts are : "<<iRet<<endl;

    iobj->InsertLast(101);
    iobj->InsertLast(111);
    iobj->InsertLast(121);
    
    iobj->Display();
    iRet = iobj->Count();
    cout<<"Number of elemensts are : "<<iRet<<endl;

    iobj->InsertAtPos(105,5);

    iobj->Display();
    iRet = iobj->Count();
    cout<<"Number of elemensts are : "<<iRet<<endl;

    iobj->DeleteAtPos(5);
    iobj->Display();
    iRet = iobj->Count();
    cout<<"Number of elemensts are : "<<iRet<<endl;

    cout<<endl;

    //LL OF CHARACTER

    cout<<"-----------LinkedList of Characters-----------"<<endl;


    SinglyLL<char> *cobj = new SinglyLL<char>();

    cobj->InsertFirst('A');
    cobj->InsertFirst('D');
    cobj->InsertFirst('I');

    cobj->Display();
    iRet = cobj->Count();
    cout<<"Number of elemensts are : "<<iRet<<endl;

    cobj->InsertLast('T');
    cobj->InsertLast('I');
    cobj->InsertLast('B');
    
    cobj->Display();
    iRet = cobj->Count();
    cout<<"Number of elemensts are : "<<iRet<<endl;

    cobj->InsertAtPos('C',5);

    cobj->Display();
    iRet = cobj->Count();
    cout<<"Number of elemensts are : "<<iRet<<endl;

    cobj->DeleteAtPos(5);
    cobj->Display();
    iRet = cobj->Count();
    cout<<"Number of elemensts are : "<<iRet<<endl;

    //LL OF FLOAT

    cout<<"-----------LinkedList of Floats-----------"<<endl;


    SinglyLL<float> *fobj = new SinglyLL<float>();

    fobj->InsertFirst(90.78f);
    fobj->InsertFirst(60.61f);
    fobj->InsertFirst(50.74f);

    fobj->Display();
    iRet = fobj->Count();
    cout<<"Number of elemensts are : "<<iRet<<endl;

    fobj->InsertLast(51.51f);
    fobj->InsertLast(78.16f);
    fobj->InsertLast(97.18f);
    
    fobj->Display();
    iRet = fobj->Count();
    cout<<"Number of elemensts are : "<<iRet<<endl;

    fobj->InsertAtPos(46.12f,5);

    fobj->Display();
    iRet = fobj->Count();
    cout<<"Number of elemensts are : "<<iRet<<endl;

    fobj->DeleteAtPos(5);
    fobj->Display();
    iRet = fobj->Count();
    cout<<"Number of elemensts are : "<<iRet<<endl;


    //LL OF DOUBLE

    cout<<"-----------LinkedList of Doubles-----------"<<endl;


    SinglyLL<double> *dobj = new SinglyLL<double>();

    dobj->InsertFirst(90.786815);
    dobj->InsertFirst(60.61668);
    dobj->InsertFirst(50.746115);

    dobj->Display();
    iRet = dobj->Count();
    cout<<"Number of elemensts are : "<<iRet<<endl;

    dobj->InsertLast(51.51615);
    dobj->InsertLast(78.16515);
    dobj->InsertLast(97.18616);
    
    dobj->Display();
    iRet = dobj->Count();
    cout<<"Number of elemensts are : "<<iRet<<endl;

    dobj->InsertAtPos(46.12515,5);

    dobj->Display();
    iRet = dobj->Count();
    cout<<"Number of elemensts are : "<<iRet<<endl;

    dobj->DeleteAtPos(5);
    dobj->Display();
    iRet = fobj->Count();
    cout<<"Number of elemensts are : "<<iRet<<endl;


    return 0;
}