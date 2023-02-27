#include <iostream>
using namespace std;

template <class T>
struct node
{
    T data;
    struct node * next;
};

template <class T>
class SinglyLL
{
    public: 
        struct node<T> * First;

        SinglyLL();

        void InsertFirst(T);
        void InsertLast(T);
        void Display();
        int Count();
};

template <class T>
SinglyLL<T>::SinglyLL()
{
    First = NULL;
}

template <class T>
void SinglyLL<T>::InsertFirst(T iNo)
{
    node<T> * newn = new node<T>;

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
}

template <class T>
void SinglyLL<T>::InsertLast(T iNo)
{
    node<T> * newn = new node<T>;
    node<T> * Temp = NULL;

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
}

template <class T>
void SinglyLL<T>::Display()
{
    node<T> * Temp = First;
    cout<<"Elements of nodes are : \n";
    while(Temp != NULL)
    {
        cout<<"|"<<Temp->data<<"|->";
        Temp = Temp->next;
    }
    cout<<"\n";
}

template <class T>
int SinglyLL<T>::Count()
{
    node<T> * Temp = First;
    int iCnt = 0;
    while(Temp != NULL)
    {
        iCnt++;
        Temp = Temp->next;
    }
    return iCnt;
}

int main()
{
    int iRet = 0;
    SinglyLL <int> obj;
    obj.InsertFirst(101);
    obj.InsertFirst(51);
    obj.InsertFirst(21);
    obj.InsertFirst(11);
    obj.Display();
    iRet = obj.Count();
    cout<<"Number of nodes are : "<<iRet<<"\n";
    
    obj.InsertLast(111);
    obj.InsertLast(121);
    obj.InsertLast(151);
    obj.Display();
    iRet = obj.Count();
    cout<<"Number of nodes are : "<<iRet<<"\n";
    
    return 0;
}