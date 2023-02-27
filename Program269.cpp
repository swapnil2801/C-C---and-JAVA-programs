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
    SinglyLL <int> iobj;
    iobj.InsertFirst(101);
    iobj.InsertFirst(51);
    iobj.InsertFirst(21);
    iobj.InsertFirst(11);
    iobj.Display();
    iRet = iobj.Count();
    cout<<"Number of nodes are : "<<iRet<<"\n";
    iobj.InsertLast(111);
    iobj.Display();
    iRet = iobj.Count();
    cout<<"Number of nodes are : "<<iRet<<"\n";

    SinglyLL <float> fobj;
    fobj.InsertFirst(10.91);
    fobj.InsertFirst(51.66);
    fobj.InsertFirst(21.56);
    fobj.InsertFirst(11.78);
    fobj.Display();
    iRet = fobj.Count();
    cout<<"Number of nodes are : "<<iRet<<"\n";
    fobj.InsertLast(111.654);
    fobj.Display();
    iRet = fobj.Count();
    cout<<"Number of nodes are : "<<iRet<<"\n";
    
    SinglyLL <char> cobj;
    cobj.InsertFirst('a');
    cobj.InsertFirst('b');
    cobj.InsertFirst('c');
    cobj.InsertFirst('d');
    cobj.Display();
    iRet = cobj.Count();
    cout<<"Number of nodes are : "<<iRet<<"\n";
    cobj.InsertLast('e');
    cobj.InsertLast('f');
    cobj.InsertLast('g');
    cobj.Display();
    iRet = cobj.Count();
    cout<<"Number of nodes are : "<<iRet<<"\n";
    
    SinglyLL <double> dobj;
    dobj.InsertFirst(3410.5591);
    dobj.InsertFirst(5221.6666);
    dobj.InsertFirst(2331.55556);
    dobj.InsertFirst(2211.74448);
    dobj.Display();
    iRet = dobj.Count();
    cout<<"Number of nodes are : "<<iRet<<"\n";
    dobj.InsertLast(11431.653444);
    dobj.Display();
    iRet = dobj.Count();
    cout<<"Number of nodes are : "<<iRet<<"\n";
    
    return 0;
}