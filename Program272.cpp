//   Doubly linear linked list        //

#include <iostream>
using namespace std;

template <class T>
struct node 
{
    T data;
    struct node * next;
    struct node * prev;
};

template <class T>
class Doubly_Linear_LL
{
    public: 
        node<T>* First;
        int iCnt;

        Doubly_Linear_LL();

        void InsertFirst(T);
        void InsertAtPos(T ,int);
        void InsertLast(T);

        void DeleteFirst();
        void DeleteAtPos(int);
        void DeleteLast();

        void DisplayF();
        void DisplayR();
};

template <class T>
Doubly_Linear_LL <T>::Doubly_Linear_LL()
{
    First = NULL;
    iCnt = 0;
}

template <class T>
void Doubly_Linear_LL<T>::InsertFirst(T iNo)
{
    node<T> * newn = new node<T>;
    newn->data = iNo;
    newn->next = NULL;
    newn->prev = NULL;

    if(First == NULL)
    {
        First = newn;
    }
    else
    {
        newn->next = First;
        First->prev = newn;
        First = newn;
    }
    iCnt++;
}

template <class T>
void Doubly_Linear_LL<T>::InsertAtPos(T iNo,int iPos)
{
    node<T> * Temp = NULL;
    node<T>* newn = NULL;
    if(iPos < 1 || iPos > iCnt+1)
    {
        cout<<"Invalid position.\n";
        return;
    }
    else if(iPos == 1)
    {
        InsertFirst(iNo);
    }
    else if(iPos == iCnt+1)
    {
        InsertLast(iNo);
    }
    else 
    {
        Temp = First;

        newn = new node<T>;
        newn->data = iNo;
        newn->next = NULL;
        newn->prev = NULL;

        for(int i = 1;i < iPos-1;i++)
        {
            Temp = Temp->next;
        }
        newn->prev = Temp;
        newn->next = Temp->next;
        Temp->next->prev = newn;
        Temp->next = newn;
    }
    iCnt++;
}

template <class T>
void Doubly_Linear_LL<T>::InsertLast(T iNo)
{
    node<T> * Temp = NULL;
    node<T> * newn = new node<T>;
    newn->data = iNo;
    newn->next = NULL;
    newn->prev = NULL;

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
        newn->prev = Temp;
    }
    iCnt++;
}

template <class T>
void Doubly_Linear_LL<T>::DeleteFirst()
{
    if(First == NULL)
    {
        cout<<"Nothing to delete.\n";
        return;
    }
    else if(First->next == NULL)
    {
        delete First;
        First = NULL;
    }
    else 
    {
        First = First->next;
        delete First->prev;
        First->prev = NULL;
    }
    iCnt--;
}

template <class T>
void Doubly_Linear_LL<T>::DeleteAtPos(int iPos)
{
    node<T>* Temp = NULL;

    if(iPos < 1 || iPos > iCnt)
    {
        cout<<"Invalid position./n";
        return;
    }
    else if(iPos == 1)
    {
        DeleteFirst();
    }
    else if(iPos == iCnt)
    {
        DeleteLast();
    }
    else
    {
        Temp = First;

        for(int i = 1;i < iPos-1;i++)
        {
            Temp = Temp->next;
        }
        Temp->next = Temp->next->next;
        delete Temp->next->prev;
        Temp->next->prev = Temp;
    }
    iCnt--;
}

template <class T>
void Doubly_Linear_LL<T>::DeleteLast()
{
    node <T>* Temp = NULL;
    if(First == NULL)
    {
        cout<<"Nothing to delete.\n";
        return;
    }
    else if(First->next == NULL)
    {
        delete First;
        First = NULL;
    }
    else 
    {
        Temp = First;

        while(Temp->next->next != NULL)
        {
            Temp = Temp->next;
        }
        delete Temp->next;
        Temp->next = NULL;
    }
    iCnt--;
}

template <class T>
void Doubly_Linear_LL<T>::DisplayF()
{
    node<T>* Temp = First;

    while(Temp != NULL)
    {
        cout<<"|"<<Temp->data<<"|->";
        Temp = Temp->next;
    }
    cout<<"\n";
}

template <class T>
void Doubly_Linear_LL<T>::DisplayR()
{
    node<T> * Temp = First;
    while(Temp->next != NULL)
    {
        Temp = Temp->next;
    }
    while(Temp != NULL)
    {
        cout<<"|"<<Temp->data<<"|->";
        Temp = Temp->prev;
    }
    cout<<"\n";
}

int main()
{
    Doubly_Linear_LL <int>obji;
    cout<<"\n---------------------------------------------------------\n";
    obji.InsertFirst(101);
    obji.InsertFirst(51);
    obji.InsertFirst(21);
    obji.InsertFirst(11);
    obji.DisplayF();
    obji.DisplayR();
    cout<<"\n---------------------------------------------------------\n";
    obji.InsertLast(111);
    obji.InsertLast(121);
    obji.DisplayF();
    obji.DisplayR();
    cout<<"\n---------------------------------------------------------\n";
    obji.InsertAtPos(31,3);
    obji.DisplayF();
    obji.DisplayR();
    cout<<"\n---------------------------------------------------------\n";
    obji.DeleteFirst();
    obji.DisplayF();
    obji.DisplayR();
    cout<<"\n---------------------------------------------------------\n";
    obji.DeleteLast();
    obji.DisplayF();
    obji.DisplayR();
    cout<<"\n---------------------------------------------------------\n";
    obji.DeleteAtPos(3);
    obji.DisplayF();
    obji.DisplayR();
    cout<<"\n---------------------------------------------------------\n";

    return 0;
}

