#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node* PNODE;

class Stack
{
    private:
        PNODE First;
        int iCount;

    public:
        Stack();
        void Display();
        int Count();
        void Push(int No);  // InsertFirst()
        int Pop();   // DeleteFirst()
};

Stack :: Stack()
{}

void Stack ::Display()
{}

int Stack ::Count()
{
    return iCount;
}

void Stack ::Push(int No)
{}

int Stack ::Pop()
{
    return 0;
}

int main()
{

    return 0;
}