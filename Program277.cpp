#include<iostream>
using namespace std;

template <class T>
struct node
{
    T data;
    struct node * next;
};

template <class T>
class Queue
{
    public:
        node<T> * First;
        int iCount;

        Queue();

        bool IsQueueEmpty();
        void EnQueue(T iNo);
        T DeQueue();
        void Display();
};

template <class T>
Queue<T>::Queue()
{
    First = NULL;
    iCount = 0;
}

template <class T>
bool Queue<T>::IsQueueEmpty()
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

template <class T>
void Queue<T>::EnQueue(T iNo)
{
    node <T>* Temp = NULL;
    node <T>* newn = new node<T>;
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

template <class T>
T Queue<T>::DeQueue()
{
    node <T>* temp = NULL;
    int Value = 0;
    if(First == NULL)
    {
        cout<<"Unable to DeQueue the element as Queue is empty.\n";
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
void Queue<T>::Display()
{
    if(First == NULL)
    {
        cout<<"Queue is empty.\n";
    }
    else
    {
        node<T>* Temp = First;

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
    Queue <int>obj;

    obj.EnQueue(10);
    obj.EnQueue(20);
    obj.EnQueue(30);
    obj.EnQueue(40);

    obj.Display();

    int iRet = obj.DeQueue();
    cout<<iRet<<" is succesfully DeQueue from Queue\n";

    iRet = obj.DeQueue();
    cout<<iRet<<" is succesfully DeQueue from Queue\n";

    obj.Display();

    return 0;
}