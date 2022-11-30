#include<stdio.h>
#include<stdlib.h>

#pragma pack(1)     // For structure padding
struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE first, int No)
{

}

void Display(PNODE first)
{

}
int main()
{
    PNODE Head = NULL;

    InserFirst(&Head,51);
    InserFirst(&Head,21);
    InserFirst(&Head,11);

    Display(Head);

    return 0;
}

/*
    void InsertFirst(PPNODE first, int No)
    void InsertLast(PPNODE first, int No)
    voidInsertAtPos(PPNODE first, int No, int Pos)

    void DeleteFirst(PPNODE first)
    void DeleteLast(PPNODE first)
    void DeleteAtPos(PPNODE first,int Pos)

    void Dispaly(PNODE first)
    int Count(PNODE first)

*/
/////////////////////////////////////////////////////////////////
/*
    InsertFirst(&Head,11)
    InsertLast(&Head,11)
    InsertAtPos(&Head,11,5)

    DeleteFirst(&Head)
    DeleteLast(&Head)
    DeleteAtPo(&Head,5)

    Display(Head)
    Count(Head)



*/