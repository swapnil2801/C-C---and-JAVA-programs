        //      Doubly circular     //

#include <iostream>
using namespace std;

#pragma pack(1)
struct node
{
    int Data;
    struct node *next;
    struct node *prev;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

class DoublyCL
{
    public:
        PNODE First;
        PNODE Last;

        DoublyCL();

        void InsertFirst(int No);
        void InsertLast(int No);
        void InsertAtPos(int No,int iPos);

        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int iPos);

        void Display();
        void DisplayReverse();
        int Count();
};

DoublyCL::DoublyCL()
{
    First = NULL;
    Last = NULL;
}

void DoublyCL::InsertFirst(int No)
{
    PNODE newn = new NODE;

    newn->Data = No;
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
        (First)->prev = newn;
        First = newn;
    }
    (Last)->next = First;
    (First)->prev = Last;
}

void DoublyCL::InsertAtPos(int No,int iPos)
{
    int iCnt = 0;
    int iNodeCnt = Count();
    PNODE Temp = NULL;
    PNODE newn = NULL;

    if(iPos < 1 || iPos > iNodeCnt+1)
    {
        cout<<"Invalid position.\n";
    }
    else if(iPos == 1)
    {
        InsertFirst(No);
    }
    else if(iPos == iNodeCnt+1)
    {
        InsertLast(No);
    }
    else
    {
        newn = new NODE;

        newn->Data = No;
        newn->next = NULL;
        newn->prev = NULL;

        Temp = First;
        for(iCnt = 1;iCnt < iPos-1;iCnt++)
        {
            Temp = Temp->next;    
        }
        newn->next = Temp->next;
        Temp->next->prev = newn;

        Temp->next = newn;
        newn->prev = Temp;
    }
}

void DoublyCL::InsertLast(int No)
{
    PNODE newn = new NODE;

    newn->Data = No;
    newn->next = NULL;
    newn->prev = NULL;

    if(First == NULL && Last == NULL)
    {
        First = newn;
        Last = newn;
    }
    else
    {
        (Last)->next = newn;
        newn->prev = Last;
        Last = newn;
    }
    (Last)->next = First;
    (First)->prev = Last;
}

void DoublyCL::DeleteFirst()
{
    if(First == NULL && Last == NULL)
    {
        return;
    }
    else if(First == Last)
    {
        delete (First);
        First = NULL;
        Last = NULL;
    }
    else
    {
        First = (First)->next;
        delete ((First)->prev);       //  free((*Last)->next)
        (First)->prev = Last;
        (Last)->next = First;
    }
}

void DoublyCL::DeleteAtPos(int iPos)
{
    int iCnt = 0;
    int iNodeCnt = Count();
    PNODE Temp = NULL;

    if(iPos < 1 || iPos > iNodeCnt)
    {
        cout<<"Invalid position.\n";
    }
    else if(iPos == 1)
    {
        DeleteFirst();
    }
    else if(iPos == iNodeCnt)
    {
        DeleteLast();
    }
    else
    {
        Temp = First;
        for(iCnt = 1;iCnt < iPos-1;iCnt++)
        {
            Temp = Temp->next;
        }
        Temp->next = Temp->next->next;
        delete (Temp->next->prev);
        Temp->next->prev = Temp;
    }
}

void DoublyCL::DeleteLast()
{
    if(First == NULL && Last == NULL)
    {
        return;
    }
    else if(First == Last)
    {
        delete (First);
        First = NULL;
        Last = NULL;
    }
    else
    {
        Last = (Last)->prev;
        delete ((Last)->next);    // free((*First)->prev)
        (Last)->next = First;
        (First)->prev = Last;
    }
}

void DoublyCL::Display()
{
    if(First == NULL && Last == NULL)
    {
        cout<<"Linked list is empty.\n";
        return;
    }
    cout<<"Elements of array are : \n";
    PNODE Temp = First;
    do
    {
        cout<<"|"<<Temp->Data<<"|<=>";
        Temp = Temp->next;
    }while(Temp != Last->next);
    cout<<"\n";
}

void DoublyCL::DisplayReverse()
{
    if(First == NULL && Last == NULL)
    {
        cout<<"Linked list is empty.\n";
        return;
    }
    cout<<"Elements of array in reverce order are : \n";
    PNODE Temp = Last;
    do
    {
        cout<<"|"<<Temp->Data<<"|<=>";
        Temp = Temp->prev;
    }while(Temp != First->prev);
    cout<<"\n";
}


int DoublyCL::Count()
{
    int iCnt = 0;
    if(First == NULL && Last == NULL)
    {
        return iCnt;
    }
    PNODE Temp = First;
    do
    {
        iCnt++;
        Temp = Temp->next;
    }while(Temp != Last->next);
    return iCnt;
}

int main()
{

    DoublyCL obj;
    int iRet = 0;

    obj.InsertFirst(101);
    obj.InsertFirst(51);
    obj.InsertFirst(21);
    obj.InsertFirst(11);
    obj.Display();

    obj.InsertLast(111);
    obj.InsertLast(121);
    obj.InsertLast(151);
    obj.Display();

    cout<<"------------------------------\n";
    obj.DisplayReverse();
    cout<<"------------------------------\n";

    obj.DeleteFirst();
    obj.Display();

    obj.DeleteLast();
    obj.Display();

    obj.InsertAtPos(31,3);
    obj.Display();

    obj.DeleteAtPos(3);
    obj.Display();

    iRet = obj.Count();
    cout<<"Number of nodes are : "<<iRet<<"\n";



    return 0;
}