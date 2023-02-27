//   Doubly Circuler linked list        //  -> Generic programming

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
class Doubly_Circuler_LL
{
    public: 
        node<T>* First;
        node<T>* Last;
        int iCnt;

        Doubly_Circuler_LL();

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
Doubly_Circuler_LL<T>::Doubly_Circuler_LL()
{
    First = NULL;
    Last = NULL;
}

template <class T>
void Doubly_Circuler_LL<T>::InsertFirst(T iNo)
{
    node <T>* newn = new node<T>;
    newn->data = iNo;
    newn->next = NULL;
    newn->prev = NULL;

    if(First == NULL && Last == NULL)
    {
        First = newn;
        Last = newn;
    }
    else
    {
        newn->next = First;
        First->prev = newn;
        First = newn;
    }
    Last->next = First;
    First->prev = Last;
    iCnt++;
}

template <class T>
void Doubly_Circuler_LL<T>::InsertAtPos(T iNo,int iPos)
{
    node <T>* Temp = NULL;
    node <T>* newn = NULL;
    if(iPos < 1 || iPos > iCnt+1)
    {
        cout<<"Invalid position.\n";
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
        newn->next = Temp->next;
        Temp->next->prev = newn;
        newn->prev = Temp;
        Temp->next = newn;
    }
}

template <class T>
void Doubly_Circuler_LL<T>::InsertLast(T iNo)
{
    node <T>* Temp = NULL;
    node <T>* newn = new node<T>;
    newn->data = iNo;
    newn->next = NULL;
    newn->prev = NULL;

    if(First == NULL)
    {
        First = newn;
        Last = newn;
    }
    else
    {
        Temp = First;

        while(Temp != Last)
        {
            Temp = Temp->next;
        }
        Temp->next = newn;
        newn->prev = Temp;
        Last = newn;
    }
    First->prev = Last;
    Last->next = First;
    iCnt++;
}

template <class T>
void Doubly_Circuler_LL<T>::DeleteFirst()
{
    if(First == NULL && Last == NULL)
    {
        cout<<"Nothing to delete.\n";
        return;
    }
    else if(First->next == NULL && Last->next == NULL)
    {
        delete First;
        First = NULL;
        Last = NULL;
    }
    else
    {
        First = First->next;
        delete Last->next;
        Last->next = First;
        First->prev = Last;
    }
    iCnt--;
}

template <class T>
void Doubly_Circuler_LL<T>::DeleteAtPos(int iPos)
{
    node <T>* Temp = NULL;

    if(iPos < 1 || iPos > iCnt)
    {
        cout<<"Invalid position.\n";
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
}

template <class T>
void Doubly_Circuler_LL<T>::DeleteLast()
{
    if(First == NULL && Last == NULL)
    {
        cout<<"Nothing to delete.\n";
        return;
    }
    else if(First->next == NULL && Last->next == NULL)
    {
        delete First;
        First = NULL;
        Last = NULL;
    }
    else
    {
        Last = Last->prev;
        delete First->prev;
        First->prev = Last;
        Last->next = First;
    }
    iCnt--;
}

template <class T>
void Doubly_Circuler_LL<T>::DisplayF()
{
    node <T>* Temp = First;

    do 
    {
        cout<<"|"<<Temp->data<<"|->";
        Temp = Temp->next;
    }while(Temp != Last->next);
    cout<<"\n";
}

template <class T>
void Doubly_Circuler_LL<T>::DisplayR()
{
    node <T>* Temp = Last;

    do 
    {
        cout<<"|"<<Temp->data<<"|->";
        Temp = Temp->prev;
    }while(Temp != First->prev);
    cout<<"\n";
}

int main()
{
    Doubly_Circuler_LL<int> obji;
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

