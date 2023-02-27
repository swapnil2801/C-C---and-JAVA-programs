// statck generic // 

#include<iostream>
using namespace std;

template <class T>
struct node
{
    T data;
    struct node * next;
};

template <class T>
class Stack
{
    public:
        node <T>* First;
        int iCount;

        Stack();

        bool IsStackEmpty();
        void Push(T iNo);
        T Pop();
        void Display();
};

template <class T>
Stack<T>::Stack()
{
    First = NULL;
    iCount = 0;
}

template <class T>
bool Stack<T>::IsStackEmpty()
{
    if(iCount == 0)
    {
        return true;
    }
    else 
    {
        return false;
    }
}

template <class T>
void Stack<T>::Push(T iNo)
{
    node <T>* newn = new node<T>;
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
    cout<<iNo<<" gets pushed in the stack succesfully"<<"\n";
}

template <class T>
T Stack<T>::Pop()
{
    node <T>* temp = NULL;
    T Value = 0;
    if(First == NULL)
    {
        cout<<"Unable to pop the element as Stack is empty.\n";
        return(T)-1;
    }
    else 
    {
        Value = First->data;
        
        temp = First;
        First = First->next;
        
        delete temp;
        iCount--;
        return Value;
    }
    
}

template <class T>
void Stack<T>::Display()
{
    if(First == NULL)
    {
        cout<<"Stack is empty.\n";
    }
     else
    {
        node<T> * Temp = First;

        while(Temp != NULL)
        {
            cout<<"|"<<Temp->data<<"|->";
            Temp = Temp->next;
        }
        cout<<"NULL"<<"\n";
    }   
}

int main()
{
    Stack <int>obj;

    obj.Push(40);
    obj.Push(30);
    obj.Push(20);
    obj.Push(10);

    obj.Display();

    int iRet = obj.Pop();
    cout<<iRet<<" is succesfully poped from stack\n";

    iRet = obj.Pop();
    cout<<iRet<<" is succesfully poped from stack\n";

    obj.Display();


    return 0;
}