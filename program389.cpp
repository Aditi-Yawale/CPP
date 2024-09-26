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
}

void DoublyCL::Display()
{}

int DoublyCL::Count()
{
    return iCount;
}

void DoublyCL::InsertFirst(int No)
{}

void DoublyCL::InsertLast(int No)
{}

void DoublyCL::InsertAtPos(int No, int iPos)
{}

void DoublyCL::DeleteFirst()
{}

void DoublyCL::DeleteLast()
{}

void DoublyCL::DeleteAtPos(int iPos)
{}

int main()
{
    DoublyCL obj;

    return 0;
}