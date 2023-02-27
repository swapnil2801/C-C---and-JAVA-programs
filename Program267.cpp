#include <iostream>
using namespace std;

struct node
{
    int data;
    struct node * next;
};

typedef struct node NODE;
typedef struct node * PNODE;

class SinglyLL
{
    public: 
        PNODE First;

        SinglyLL();

        void InsertFirst(int);
        void InsertLast(int);
        void Display();
        int Count();
};

SinglyLL::SinglyLL()
{
    First = NULL;
}

void SinglyLL::InsertFirst(int iNo)
{
    PNODE newn = new NODE;

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

void SinglyLL::InsertLast(int iNo)
{
    PNODE newn = new NODE;
    PNODE Temp = NULL;

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

void SinglyLL::Display()
{
    PNODE Temp = First;
    cout<<"Elements of nodes are : \n";
    while(Temp != NULL)
    {
        cout<<"|"<<Temp->data<<"|->";
        Temp = Temp->next;
    }
    cout<<"\n";
}

int SinglyLL::Count()
{
    PNODE Temp = First;
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
    SinglyLL obj;
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