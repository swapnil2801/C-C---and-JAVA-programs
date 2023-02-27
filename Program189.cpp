        // Singly linear link list      //

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
typedef struct node ** PPNODE;

class SinglyLL
{
    public:
        PNODE First;
        int iCount;

        //   Decleration  of all Behaviours   //
        SinglyLL();

        void InsertFirst(int);
        void InsertLast(int);
        void InsertAtPosition(int,int);

        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPosition(int);

        void Display();
        // int Count();     There is no need to define count function because of counter (iCount) variable

        //   Decleration  ends   //
};

/* 
How to define class member function outside the class:-

Return_Value Class_Name::Function_Name(Parameters)
{

}
*/

SinglyLL::SinglyLL()
{
    First = NULL;
    iCount = 0;
}

void SinglyLL::InsertFirst(int No)
{
    // Step1 : Allocate memory for node
    PNODE newn = new NODE;

    // Step2 : Initialised node
    newn->Data = No;
    newn->next = NULL;

    //Step3 : Check if LL is empty or not
    if(First == NULL)
    {
        First = newn;
        iCount++;
    }
    else    // if LL cotains at least one node.
    {
        newn->next = First;
        First = newn;
        iCount++;
    }
}

void SinglyLL::InsertLast(int No)
{
    // Step1 : Allocate memory for node
    PNODE newn = new NODE;
    PNODE Temp = NULL;

    // Step2 : Initialised node
    newn->Data = No;
    newn->next = NULL;

    //Step3 : Check if LL is empty or not
    if(First == NULL)
    {
        First = newn;
        iCount++;
    }
    else if(First->next == NULL)   // if LL cotains at least one node.
    {
        First->next = newn;
        iCount++;
    }
    else
    {
        Temp = First;
        while(Temp->next != NULL)
        {
            Temp = Temp->next;
        }
        Temp->next = newn;
        iCount++;
    }
}

void SinglyLL::InsertAtPosition(int No,int iPos)
{
    if((iPos < 1) || (iPos > iCount+1))
    {
        cout<<"Invalid position"<<"\n";
        return;
    }
    else if (iPos == 1)
    {
        InsertFirst(No);
    }
    else if(iPos == iCount+1)
    {
        InsertLast(No);
    }
    else
    {
        PNODE newn = new NODE;

        newn->Data = No;
        newn->next = NULL;

        PNODE Temp = First;
        for(int iCnt = 1;iCnt <iPos-1;iCnt++)
        {
            Temp = Temp->next;
        }
        newn->next = Temp->next;
        Temp->next = newn;
        iCount++;
    }
}

void SinglyLL::DeleteFirst()
{
    PNODE Temp = NULL;
    if(First == NULL)       // if(iCount == 0)
    {
        return;
    }
    else if(First->next == NULL)    // else if(iCount == 1)
    {
        delete First;
        First == NULL;
        iCount--;
    }
    else
    {
        Temp = First;
        First = First->next;
        delete Temp;
        iCount--;
    }

}

void SinglyLL::DeleteLast()
{
    PNODE Temp = NULL;
    if(First == NULL)
    {
        return;
    }
    else if(First->next == NULL)
    {
        delete First;
        First = NULL;
        iCount--;
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
        iCount--;
    }
}

void SinglyLL::DeleteAtPosition(int iPos)
{
    if((iPos < 1) || (iPos > iCount+1))
    {
        cout<<"Invalid position"<<"\n";
        return;
    }
    else if (iPos == 1)
    {
        DeleteFirst();
    }
    else if(iPos == iCount)
    {
        DeleteLast();
    }
    else
    {
        PNODE Temp1 = First;
        PNODE Temp2 = NULL;
        for(int iCnt = 1;iCnt < iPos-1;iCnt++)
        {
            Temp1= Temp1->next;
        }
        Temp2 = Temp1->next->next;
        delete Temp1->next;
        Temp1->next = Temp2;
        iCount--;
    }
}

void SinglyLL::Display()
{
    cout<<"Elements of Linked List are : "<<"\n";
    PNODE Temp = First;

    while(Temp != NULL)
    {
        cout<<"|"<<Temp->Data<<"|->";
        Temp = Temp->next;
    }
    cout<<"NULL"<<"\n";

}

int main()
{
    SinglyLL obj1;
    SinglyLL obj2;

    obj1.InsertFirst(51);
    obj1.InsertFirst(21);
    obj1.InsertFirst(11);
    obj1.Display();
    cout<<"Number of nodes in first linkedList are : "<<obj1.iCount<<"\n";

    obj1.InsertLast(101);
    obj1.InsertLast(111);
    obj1.InsertLast(121);
    obj1.Display();
    cout<<"Number of nodes are : "<<obj1.iCount<<"\n";

    obj1.DeleteFirst();
    obj1.Display();
    cout<<"Number of nodes are : "<<obj1.iCount<<"\n";

    obj1.DeleteLast();
    obj1.Display();
    cout<<"Number of nodes are : "<<obj1.iCount<<"\n";

    obj1.InsertAtPosition(31,3);
    obj1.Display();
    cout<<"Number of nodes are : "<<obj1.iCount<<"\n";

    obj1.DeleteAtPosition(3);
    obj1.Display();
    cout<<"Number of nodes are : "<<obj1.iCount<<"\n";

    return 0;
}