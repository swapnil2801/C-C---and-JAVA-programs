        // Singly circular linked list  in c++  //

#include<iostream>
using namespace std;

#pragma pack(1)
struct node
{
    int Data;
    struct node * next;
};

typedef struct node NODE;
typedef struct node * PNODE;

class SinglyCL
{
    public:
        PNODE First;
        PNODE Last;

        SinglyCL();

        void InsertFirst(int);
        void InsertLast(int);;
        void InsertAtPosition(int,int);;

        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPosition(int);

        void Display();
        int Count();
};

SinglyCL::SinglyCL()
{
    First = NULL;
    Last = NULL;
}

void SinglyCL::InsertFirst(int No)
{
    PNODE newn = new NODE;
    
    newn->Data = No;
    newn->next = NULL;

    if(First == NULL && Last == NULL)
    {
        First = Last = newn;
        Last->next = First;
    }
    else
    {
        newn->next = First;
        First = newn;
        Last->next = First;
    }
}
void SinglyCL::InsertAtPosition(int No,int iPos)
{
    int Node_Count = 0,i = 0;
    Node_Count = Count();
    PNODE Temp = NULL;
    PNODE newn = NULL;

    if((iPos < 1) || (iPos > Node_Count+1))
    {
        cout<<"Invalid position."<<"\n";
    }
    else if(iPos == 1)
    {
        InsertFirst(No);
    }
    else if(iPos == Node_Count+1)
    {
        InsertLast(No);
    }
    else
    {
        newn = new NODE;
        newn->Data = No;
        newn->next = NULL;

        Temp = First;
        for(i = 1;i < iPos-1;i++)
        {
            Temp = Temp->next;
        }
        newn->next = Temp->next;
        Temp->next = newn;
    }
}

void SinglyCL::InsertLast(int No)
{
    PNODE newn = new NODE;

    newn->Data = No;
    newn->next = NULL;

    if((First == NULL) && (Last == NULL))
    {
        First = Last = newn;
        Last->next = First;
    }
    else
    {
        Last->next = newn;
        Last = newn;
        Last->next = First;
    }
}

void SinglyCL::DeleteFirst()
{
    if(First == NULL && Last == NULL)   // if LL is empty
    {
        return;
    }
    else if (First == Last)       // if LL contail single node
    {
        delete (First);
        First = NULL;
        Last = NULL;
    }
    else            // if LL contain more than one node
    {
        First = First->next;
        delete(Last->next);
        Last->next = First;
    }
}

void SinglyCL::DeleteAtPosition(int iPos)
{
    PNODE Temp1 = NULL;
    PNODE Temp2 = NULL;
    int Node_Count = 0,i = 0;
    Node_Count = Count();

    if(iPos < 1 || iPos > Node_Count)
    {
        cout<<"Invalid position."<<"\n";
    }
    else if(iPos == 1)
    {
        DeleteFirst();
    }
    else if(iPos == Node_Count)
    {
        DeleteLast();
    }
    else
    {
        Temp1 = First;
        for(i = 1;i < iPos-1;i++)
        {
            Temp1 = Temp1->next;
        }
        Temp2 = Temp1->next;
        Temp1->next = Temp2->next;
        delete(Temp2);
    }
}

void SinglyCL::DeleteLast()
{
    PNODE Temp = NULL;
    if(First == NULL && Last == NULL)
    {
        return;
    }
    else if (First == Last)
    {
        delete(First);
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
        delete(Last);
        Last = Temp;
        Last->next = First;
    }
}

void SinglyCL::Display()
{
    cout<<"Elements of Linked list are : "<<"\n";
    PNODE Temp = First;

    do
    {
        cout<<"|"<<Temp->Data<<"|->";
        Temp = Temp->next;
    } while (Temp != Last->next);
    cout<<"\n";
}

int SinglyCL::Count()
{
    int iCnt = 0;
    PNODE Temp = First;

    do
    {
        iCnt++;
        Temp = Temp->next;
    } while (Temp != Last->next);
    return iCnt;
}


int main()
{
    int iRet = 0;

    SinglyCL obj;

    obj.InsertFirst(51);
    obj.InsertFirst(21);
    obj.InsertFirst(11);

    obj.Display();

    obj.InsertLast(101);
    obj.InsertLast(111);
    obj.InsertLast(121);

    obj.Display();

    iRet = obj.Count();
    cout<<"Number of nodes are : "<<iRet<<"\n";

    obj.DeleteFirst();
    obj.Display();

    obj.DeleteLast();
    obj.Display();

    iRet = obj.Count();
    cout<<"Number of nodes are : "<<iRet<<"\n";

    obj.InsertAtPosition(31,3);
    obj.Display();

    obj.DeleteAtPosition(3);
    obj.Display();

    iRet = obj.Count();
    cout<<"Number of nodes are : "<<iRet<<"\n";

    return 0;
}