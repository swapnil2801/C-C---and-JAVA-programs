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
    
}

void SinglyLL::InsertLast(int No)
{
    
}

void SinglyLL::InsertAtPosition(int No,int iPos)
{
    
}

void SinglyLL::DeleteFirst()
{
    
}

void SinglyLL::DeleteLast()
{
    
}

void SinglyLL::DeleteAtPosition(int No)
{
    
}

void SinglyLL::Display()
{

}



int main()
{
    SinglyLL obj1;

    cout<<sizeof(obj1)<<"\n";
    cout<<"First pointer contains : "<<obj1.First<<"\n";
    cout<<"Number of nodes are : "<<obj1.iCount<<"\n";

    obj1.InsertFirst(51);
    obj1.InsertFirst(21);
    obj1.InsertFirst(11);
    obj1.Display();

    cout<<"Number of nodes are : "<<obj1.iCount<<"\n";
    
    obj1.InsertFirst(101);
    obj1.InsertFirst(111);
    obj1.InsertFirst(121);
    obj1.Display();

    return 0;
}