//      Doubly Circular Linked list in c        //

#include <iostream>
using namespace std;

struct node 
{
    int Data;
    struct node *next;
    struct node *prev;
};

typedef struct node NODE;
typedef struct node * PNODE ;
typedef struct node ** PPNODE ;

class DoublyCL
{
    public:
        int iCnt;
        PNODE First;
        PNODE Last;

        DoublyCL();

        void InsertFirst(int);
        void InsertLast(int);
        void InsertAtPos(int,int);

        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int);

        void Display();
};

//     Functions Defination        //

DoublyCL::DoublyCL()
{
    iCnt = 0;
    First = NULL;
    Last = NULL;
}
void DoublyCL::InsertFirst(int No)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));

    newn->Data = No;
    newn->next = NULL;
    newn->prev = NULL;

    if(First == NULL && Last == NULL)
    {
        First = Last = newn;
        (Last)->next =(First)->next =  First;
        (First)->prev = (Last)->prev = Last;
    }
    else
    {
        newn->next = First;
        newn->prev = Last;
        First = newn;
        (Last)->next = First;
    }
    iCnt++;
}

void DoublyCL::InsertAtPos(int No,int iPos)
{
    PNODE Temp = NULL;
    PNODE newn = NULL;

    if((iPos < 1) || (iPos > iCnt+1))
    {
        cout<<"Invalid position.\n";
        return;
    }
    else if(iPos == 1)
    {
        InsertFirst(No);
    }
    else if(iPos == iCnt+1)
    {
        InsertLast(No);
    }
    else
    {
        Temp = First;
        newn = (PNODE)malloc(sizeof(NODE));
        newn->Data = No;
        newn->next = NULL;
        newn->prev = NULL;

        for(int iCnt = 1;iCnt < iPos-1;iCnt++)
        {
            Temp = Temp->next;
        }
        newn->next = Temp->next;
        newn->prev = Temp;
        Temp->next->prev = newn;
        Temp->next = newn;
    }
    iCnt++;
}

void DoublyCL::InsertLast(int No)
{
    PNODE Temp = NULL;
    PNODE newn = (PNODE)malloc(sizeof(NODE));

    newn->Data = No;
    newn->next = NULL;
    newn->prev = NULL;

    if(First == NULL && Last == NULL)
    {
        First = Last = newn;
        (Last)->next =(First)->next =  First;
        (First)->prev = (Last)->prev = Last;
    }
    else
    {
        Temp = First;
        while(Temp->next != First)
        {
            Temp = Temp->next;
        }
        newn->next = First;
        newn->prev = Last;
        Temp->next = newn;
        Last = newn;
        (First)->prev = Last;
    }
    iCnt++;
}

void DoublyCL::DeleteFirst()
{
    if(First == NULL && Last == NULL)
    {
        return;
    }
    else if (First == Last)
    {
        free(First);
        First = NULL;
        Last = NULL;
    }
    else
    {
        First = (First)->next;
        (First)->prev = Last;
        delete (Last->next);
        (Last)->next = First;
    }
    iCnt--;
}

void DoublyCL::DeleteAtPos(int iPos)
{
    PNODE Temp = NULL;
    PNODE Temp2 = NULL;

    if(iPos < 1 || iPos > iCnt)
    {
        printf("Invalid position.\n");
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
        for(int iCnt = 1;iCnt < iPos-1;iCnt++)
        {
            Temp = Temp->next;
        }
        Temp2 = Temp->next;
        Temp->next = Temp2->next;
        Temp->next->prev = Temp;
        delete (Temp2);
    }
    iCnt--;
}

void DoublyCL::DeleteLast()
{
    PNODE Temp = NULL;
    if(First == NULL && Last == NULL)
    {
        return;
    }
    else if (First == Last)
    {
        free(First);
        First = NULL;
        Last = NULL;
    }
    else
    {
        Temp = First;
        while(Temp->next != Last)
        {
            Temp = Temp->next;
        }
        Temp->next = First;
        (First)->prev = Temp;
        delete(Last);
        Last = Temp;
    }
    iCnt--;
}

void DoublyCL::Display()
{
    PNODE Temp = First;
    do
    {
        cout<<"|"<<Temp->Data<<"|->";
        Temp = Temp->next;
    } while (Temp != Last->next);
    cout<<"\n";
}


int main()
{
    
    DoublyCL obj;

    obj.InsertFirst(101);
    obj.InsertFirst(51);
    obj.InsertFirst(21);
    obj.InsertFirst(11);
    obj.Display();

    obj.InsertLast(111);
    obj.InsertLast(121);
    obj.InsertLast(151);
    obj.Display();

    obj.DeleteFirst();
    obj.Display();

    obj.DeleteLast();
    obj.Display();

    obj.InsertAtPos(31,3);
    obj.Display();

    obj.DeleteAtPos(3);
    obj.Display();
    
    printf("Number of nodes are : %d\n",obj.iCnt);

    return 0;
}