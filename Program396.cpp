
    //          Singly linear linked list       //

#include<iostream>
using namespace std;

// Structure for singly linear and singly circular
template <class T>
struct nodeS
{
    T data;
    struct nodeS * next;
};

// class of Singly linear linked list 
template <class T>
class SinglyLL
{
    public:
        struct nodeS <T>* First;
        int iCount;

        SinglyLL();

        void InsertFirst(T);
        void InsertLast(T);
        void InsertAtPos(T ,int);

        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int);
    
        void Display();
        int Count();
};

// class of Sinlgly Circuler linked list
template <class T>
class SinglyCL
{
    public:
        struct nodeS <T>* First;
        int iCount;

        SinglyCL();

        void InsertFirst(T);
        void InsertLast(T);
        void InsertAtPos(T ,int);

        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int);
    
        void Display();
        int Count();
};

////////////////////////////////////////////////////////////////

// Structure for Doubly linear and Doubly circular

template <class T>
struct nodeD
{
    T data;
    struct nodeS* next;
    struct nodeD* prev;
};


// class of Doubly linear linked list
template <class T>
class DoublyLL
{
    public:
        struct nodeD <T>* First;
        int iCount;

        DoublyLL();

        vvoid InsertFirst(T);
        void InsertLast(T);
        void InsertAtPos(T ,int);

        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int);
    
        void Display();
        int Count();
};

// class of Doubly circuler linked list
template <class T>
class DoublyCL
{
    public:
        struct nodeD <T>* First;
        int iCount;

        DoublyCL();

        void InsertFirst(T);
        void InsertLast(T);
        void InsertAtPos(T ,int);

        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int);
    
        void Display();
        int Count();
};

/////////////////////////////////////////////////////////////
int main()
{

    return 0;
}
