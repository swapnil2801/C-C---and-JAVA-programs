//   Doubly Circuler linked list        //

#include <iostream>
using namespace std;

struct node 
{
    int data;
    struct node * next;
    struct node * prev;
};

class Doubly_Circuler_LL
{
    public: 
        node* First;
        node* Last;
        int iCnt;

        Doubly_Circuler_LL();

        void InsertFirst(int);
        void InsertAtPos(int ,int);
        void InsertLast(int);

        void DeleteFirst();
        void DeleteAtPos(int);
        void DeleteLast();

        void DisplayF();
        void DisplayR();
};

Doubly_Circuler_LL::Doubly_Circuler_LL()
{
    First = NULL;
    Last = NULL;
}

void Doubly_Circuler_LL::InsertFirst(int iNo)
{
    node * newn = new node;
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

void Doubly_Circuler_LL::InsertAtPos(int iNo,int iPos)
{
    node * Temp = NULL;
    node * newn = NULL;
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
        newn = new node;
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

void Doubly_Circuler_LL::InsertLast(int iNo)
{
    node * Temp = NULL;
    node * newn = new node;
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

void Doubly_Circuler_LL::DeleteFirst()
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

void Doubly_Circuler_LL::DeleteAtPos(int iPos)
{
    node * Temp = NULL;

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

void Doubly_Circuler_LL::DeleteLast()
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

void Doubly_Circuler_LL::DisplayF()
{
    node * Temp = First;

    do 
    {
        cout<<"|"<<Temp->data<<"|->";
        Temp = Temp->next;
    }while(Temp != Last->next);
    cout<<"\n";
}

void Doubly_Circuler_LL::DisplayR()
{
    node * Temp = Last;

    do 
    {
        cout<<"|"<<Temp->data<<"|->";
        Temp = Temp->prev;
    }while(Temp != First->prev);
    cout<<"\n";
}

int main()
{
    Doubly_Circuler_LL obji;
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

