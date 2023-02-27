//   Stack specific //

#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node * next;
};

class Stack
{
    public:
        node * First;
        int iCount;

        Stack();

        bool IsStackEmpty();
        void Push(int iNo);
        int Pop();
        void Display();
};

Stack::Stack()
{
    First = NULL;
    iCount = 0;
}

bool Stack::IsStackEmpty()
{
    if(iCount == 0)
    {
        return false;
    }
    else 
    {
        return true;
    }
}

void Stack::Push(int iNo)
{
    node * newn = new node;
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

int Stack::Pop()
{
    node * temp = NULL;
    int Value = 0;
    if(First == NULL)
    {
        cout<<"Unable to pop the element as Stack is empty.\n";
        return -1;
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

void Stack::Display()
{
    if(First == NULL)
    {
        cout<<"Stack is empty.\n";
    }
    else
    {
        node* Temp = First;

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
    Stack obj;

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