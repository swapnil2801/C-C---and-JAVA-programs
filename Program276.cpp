#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node * next;
};

class Queue
{
    public:
        node * First;
        int iCount;

        Queue();

        bool IsQueueEmpty();
        void EnQueue(int iNo);
        int DeQueue();
        void Display();
};

Queue::Queue()
{
    First = NULL;
    iCount = 0;
}

bool Queue::IsQueueEmpty()
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

void Queue::EnQueue(int iNo)
{
    node * Temp = NULL;
    node * newn = new node;
    newn->data = iNo;
    newn->next = NULL;

    if(First == NULL)
    {
        First = newn;
    }
    else 
    {
        Temp = First;

        while(Temp->next != NULL)
        {
            Temp = Temp->next;
        }
        Temp->next = newn;
    }
    iCount++;
    cout<<iNo<<" gets EnQueue in the Queue succesfully"<<"\n";
}

int Queue::DeQueue()
{
    node * temp = NULL;
    int Value = 0;
    if(First == NULL)
    {
        cout<<"Unable to DeQueue the element as Queue is empty.\n";
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

void Queue::Display()
{
    if(First == NULL)
    {
        cout<<"Queue is empty.\n";
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
    Queue obj;

    obj.EnQueue(10);
    obj.EnQueue(20);
    obj.EnQueue(30);
    obj.EnQueue(40);

    obj.Display();

    int iRet = obj.DeQueue();
    cout<<iRet<<" is succesfully remove.\n";

    iRet = obj.DeQueue();
    cout<<iRet<<" is succesfully remove.\n";

    obj.Display();

    return 0;
}