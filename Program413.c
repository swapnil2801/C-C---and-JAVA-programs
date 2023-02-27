#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

#pragma pack(1)
struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE First,int no)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = no;
    newn->next = NULL;

    if(*First == NULL)
    {
        *First = newn;
    }
    else
    {
        newn->next = *First;
        *First = newn;
    }
}

void Display(PNODE First)
{
    printf("Elements from the Linked List are : \n");
    while(First != NULL)
    {
        printf("|%d|->",First->data);
        First = First->next;
    }
    printf("NULL\n");
}

void Reverse_LL(PPNODE First)
{
    PNODE Previous, Next ,Current;

    Previous = NULL;
    Next = NULL;
    Current = *First;

    while(Current != NULL)
    {
        Next = Current->next;
        Current->next = Previous;
        Previous = Current;

        Current = Next;
    }
    *First = Previous;
}

// void Reverse(PPNODE First)
// {
//     PNODE temp = (*First);
//     if(temp->next != NULL)
//     {
//         temp = temp->next;
//     }
//     Reverse(First);
//     (*First)->data = temp->data;
//     *First = (*First)->next;
// }

int main()
{ 
    bool bRet = false;
    PNODE Head = NULL;
    
    InsertFirst(&Head,101);
    InsertFirst(&Head,51);
    InsertFirst(&Head,21);
    InsertFirst(&Head,11);

    Display(Head);

    Reverse_LL(&Head);
    Display(Head);

    Reverse_LL(&Head);
    Display(Head);

    return 0;
}
