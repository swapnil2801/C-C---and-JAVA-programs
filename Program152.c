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

void InsertFirst(PPNODE First, int No)
{
    // Step 1 : Allocate the memory for new node
    PNODE newn = (PNODE)malloc(sizeof(PNODE));

    // Step 2 : Initialise the node
    newn->data = No;
    newn->next = NULL;

    // Step 3 : Check Linked list is empty or not
    if(*First == NULL)
    {
        *First = newn;
    }
    else    // If linked list contains atleast one node 
    {
        newn->next = *First;
        *First = newn;
    }
}

void Display(PNODE First)
{
    while(First != NULL)
    {
        printf("%d\n",First->data);
        First = First->next;
    }
    printf("\n");
}
int main()
{
    PNODE Head = NULL;

    InsertFirst(&Head,51);
    InsertFirst(&Head,21);
    InsertFirst(&Head,11);

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