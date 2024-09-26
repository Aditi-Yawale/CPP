// SORTING ALGORITHMS
//SELECTION SORT 


#include<iostream>
using namespace std;

template <class T>
class ArrayX
{
    public:
        T *Arr;
        int iSize;

        ArrayX(int Value);
        ~ArrayX();

        void Accept();
        void Display();

        bool LinearSearch(T value);
        bool BiDirectionalSearch(T value);
        bool BinarySearch(T Value);

        void BubbleSort();
        void BubbleSortEfficient();
        void SelectionSort();

};

template <class T>
ArrayX<T>::ArrayX(int Value)
{
    this->iSize = Value;
    this->Arr = new T[iSize];
}

template <class T>
ArrayX<T>::~ArrayX()
{
    delete []Arr;
}

template <class T>
void ArrayX<T>::Accept()
{
    int i = 0;

    cout<<"Enter the elements : \n";
    for(i = 0; i < iSize; i++)
    {
        cin>>Arr[i];
    }
}

template <class T>
void ArrayX<T>::Display()
{
    int i = 0;

    for(i = 0; i < iSize; i++)
    {
        cout<<Arr[i]<<"\t";
    }
}

template <class T>
bool ArrayX<T>::LinearSearch(T value)
{
    int i = 0;
    bool flag = false;
    for(i = 0; i < iSize; i++)
    {
        if(Arr[i] == value)
        {
            flag = true;
            break;
        }
    }
    return flag;
}

template <class T>
bool ArrayX<T>:: BiDirectionalSearch(T value)
{
    int iStart = 0, iEnd = 0;
    bool flag = false;

    for(iStart = 0, iEnd = iSize-1; iStart <=iEnd; iStart++, iEnd--)
    {
        if((Arr[iStart] == value) || (Arr[iEnd] == value))
        {
            flag = true;
            break;
        }
    }
    return flag;

}

template <class T>
bool ArrayX<T>:: BinarySearch(T Value)
{
    int iStart = 0, iEnd = 0, iMid = 0;
    bool flag = false;

    iStart = 0;
    iEnd = iSize - 1;

    while(iStart <= iEnd)
    {
        iMid = iStart + ((iEnd - iStart) / 2);

        if((Arr[iMid] == Value) || (Arr[iStart] == Value) || (Arr[iEnd] == Value))
        {
            flag = true;
            break;
        }
        else if(Value < Arr[iMid])
        {
            iStart = iMid + 1;
        }
        else if(Value > Arr[iMid])
        {
            iEnd = iMid - 1;
        }
    }
    return flag;
}

template <class T>
void ArrayX<T>:: BubbleSort()
{
    T temp;
    int i = 0, j = 0;

    //   1         2       3 
    for(i = 0; i < iSize - 1; i++)  //Outer
    {
    //         1          2        3 
        for(j = 0; j < iSize - 1 - i; j++)  //Inner
        {
            if(Arr[j] > Arr[j+1])
            {
                temp = Arr[j];
                Arr[j] = Arr[j+1];
                Arr[j+1] = temp;
            }
            
        }
        cout<<"\nArray after pass : "<<i+1<<"\n";
        Display();
    }
}
template <class T>
void ArrayX<T>:: BubbleSortEfficient()
{
    T temp;
    int i = 0, j = 0;
    bool flag = true;


    for(i = 0; i < iSize - 1 && (flag == true); i++)  //Outer
    {
        flag = false;

        for(j = 0; j < iSize - 1 - i; j++)  //Inner
        {
            if(Arr[j] > Arr[j+1])
            {
                temp = Arr[j];
                Arr[j] = Arr[j+1];
                Arr[j+1] = temp;
                flag = true;
            }
            
        }
        cout<<"\nArray after pass : "<<i+1<<"\n";
        Display();
    }    

}

template <class T>
void ArrayX<T>::SelectionSort()
{
    int i = 0, j = 0, min_index = 0;
    T temp;

    for(i = 0; i < iSize - 1; i++)
    {
        min_index = i;

        for(j = i + 1; j < iSize; j++)
        {
            if(Arr[j] < Arr[min_index])
            {
                min_index = j;
            }
        }
        temp = Arr[i];
        Arr[i] = Arr[min_index];
        Arr[min_index] = temp;
    }
}

int main()
{
    int iLength = 0;

    cout<<"Enter the number of elements : \n";
    cin>>iLength;

    ArrayX<int> *aobj = new ArrayX<int>(iLength);

    aobj->Accept();

    cout<<"Data before sorting : \n";
    aobj->Display();

    aobj->SelectionSort();

    cout<<"\nData after sorting : \n";
    aobj->Display();
    
    delete aobj;
    
    return 0;
}