        // Singly circuler link list      //

#include<stdio.h>
#include<stdlib.h>

#pragma pack(1)
struct node
{
    int Data;
    struct node * next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

//      Decleration     //
void InsertFirst(PPNODE,PPNODE,int);
void InsertLast(PPNODE,PPNODE,int);;
void InsertAtPosition(PPNODE,PPNODE,int,int);;

void DeleteFirst(PPNODE,PPNODE);
void DeleteLast(PPNODE,PPNODE);
void DeleteAtPosition(PPNODE,PPNODE,int);

void Display(PNODE,PNODE);
int iCount(PNODE ,PNODE);


//      Definations     //
void InsertFirst(PPNODE First,PPNODE Last,int No)
{

}

void Display(PNODE First,PNODE Last)
{

}

int main()
{
    PNODE Head = NULL;
    PNODE Tail = NULL;

    InsertFirst(&Head, &Tail, 51);
    InsertFirst(&Head, &Tail, 21);
    InsertFirst(&Head, &Tail, 11);

    return 0;
}

