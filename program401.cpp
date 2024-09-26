#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node* PNODE;

class Queue
{
    private:
        PNODE First;
        int iCount;

    public:
        Queue();
        void Display();
        int Count();
        void EnQueue(int No);  // InsertLast()
        int DeQueue();   // DeleteFirst()
};

Queue :: Queue()
{
    First = NULL;
    iCount = 0;
}

void Queue ::Display()
{
    cout<<"Elements of Queue are : \n";
    PNODE temp = First;

    while(temp != NULL)
    {
        cout<<temp->data<<"\t";
        temp = temp -> next;
    }
    cout<<"\n";
}

int Queue ::Count()
{
    return iCount;
}

void Queue ::EnQueue(int No)
{
    PNODE newn = NULL;
    PNODE temp = NULL;

    newn = new NODE;

    newn->data = No;
    newn->next = NULL;

    if(First == NULL)
    {
        First = newn;
    }
    else
    {
        temp = First;

        while(temp ->next != NULL)
        {
            temp = temp -> next;
        }

        temp->next = newn;
    }
    iCount++;
}

int Queue ::DeQueue()
{
    int iValue = 0;
    PNODE temp = NULL;

    if(First == NULL)
    {
        cout<<"Unable to remove the element as queue is empty\n";
        return -1;
    }
    else
    {
        temp = First;

        iValue = First -> data;
        First = First -> next;
        delete temp;
        
        iCount--;
    }

    return iValue;
}

int main()
{
    Queue obj;
    int iRet = 0;

    obj.EnQueue(10);
    obj.EnQueue(20);
    obj.EnQueue(30);
    obj.EnQueue(40);

    obj.Display();

    iRet = obj.Count();

    cout<<"Number of elements in the Queue are : "<<iRet<<"\n";
    
    iRet = obj.DeQueue();

    cout<<"Removed element is : "<<iRet<<"\n";

    iRet = obj.DeQueue();

    cout<<"Removed element is : "<<iRet<<"\n";
    
    obj.Display();

    iRet = obj.Count();

    cout<<"Number of elements in the Queue are : "<<iRet<<"\n";

    obj.EnQueue(50);

    obj.Display();

    iRet = obj.Count();

    cout<<"Number of elements in the Queue are : "<<iRet<<"\n";
    
    return 0;
}