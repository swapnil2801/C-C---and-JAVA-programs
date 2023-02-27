        //      Doubly circular     //

#include <stdio.h>
#include <stdlib.h>

#pragma pack(1)
struct node
{
    int Data;
    struct node *next;
    struct node *prev;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE First,PPNODE Last,int No)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));

    newn->Data = No;
    newn->next = NULL;
    newn->prev = NULL;

    if(*First == NULL && *Last == NULL)
    {
        *First = newn;
        *Last = newn;
    }
    else
    {
        newn->next = *First;
        (*First)->prev = newn;
        *First = newn;
    }
    (*Last)->next = *First;
    (*First)->prev = *Last;
}

void InsertAtPos(PPNODE First,PPNODE Last,int No,int iPos)
{
    int iCnt = 0;
    int iNodeCnt = Count(*First,*Last);
    PNODE Temp = NULL;
    PNODE newn = NULL;

    if(iPos < 1 || iPos > iNodeCnt+1)
    {
        printf("Invalid position.\n");
    }
    else if(iPos == 1)
    {
        InsertFirst(First,Last,No);
    }
    else if(iPos == iNodeCnt+1)
    {
        InsertLast(First,Last,No);
    }
    else
    {
        newn = (PNODE)malloc(sizeof(NODE));

        newn->Data = No;
        newn->next = NULL;
        newn->prev = NULL;

        Temp = *First;
        for(iCnt = 1;iCnt < iPos-1;iCnt++)
        {
            Temp = Temp->next;    
        }
        newn->next = Temp->next;
        Temp->next->prev = newn;

        Temp->next = newn;
        newn->prev = Temp;
    }
}

void InsertLast(PPNODE First,PPNODE Last,int No)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));

    newn->Data = No;
    newn->next = NULL;
    newn->prev = NULL;

    if(*First == NULL && *Last == NULL)
    {
        *First = newn;
        *Last = newn;
    }
    else
    {
        (*Last)->next = newn;
        newn->prev = *Last;
        *Last = newn;
    }
    (*Last)->next = *First;
    (*First)->prev = *Last;
}

void DeleteFirst(PPNODE First,PPNODE Last)
{
    if(*First == NULL && *Last == NULL)
    {
        return;
    }
    else if(*First == *Last)
    {
        free(*First);
        *First = NULL;
        *Last = NULL;
    }
    else
    {
        *First = (*First)->next;
        free((*First)->prev);       //  free((*Last)->next)
        (*First)->prev = *Last;
        (*Last)->next = *First;
    }
}

void DeleteAtPos(PPNODE First,PPNODE Last,int iPos)
{
    int iCnt = 0;
    int iNodeCnt = Count(*First,*Last);
    PNODE Temp = NULL;

    if(iPos < 1 || iPos > iNodeCnt)
    {
        printf("Invalid position.\n");
    }
    else if(iPos == 1)
    {
        DeleteFirst(First,Last);
    }
    else if(iPos == iNodeCnt)
    {
        DeleteLast(First,Last);
    }
    else
    {
        Temp = *First;
        for(iCnt = 1;iCnt < iPos-1;iCnt++)
        {
            Temp = Temp->next;
        }
        Temp->next = Temp->next->next;
        free(Temp->next->prev);
        Temp->next->prev = Temp;
    }
}

void DeleteLast(PPNODE First,PPNODE Last)
{
    if(*First == NULL && *Last == NULL)
    {
        return;
    }
    else if(*First == *Last)
    {
        free(*First);
        *First = NULL;
        *Last = NULL;
    }
    else
    {
        *Last = (*Last)->prev;
        free((*Last)->next);    // free((*First)->prev)
        (*Last)->next = *First;
        (*First)->prev = *Last;
    }
}

void Display(PNODE First,PNODE Last)
{
    if(First == NULL && Last == NULL)
    {
        printf("Linked list is empty.\n");
        return;
    }
    printf("Elements of array are : \n");
    do
    {
        printf("|%d|<=>",First->Data);
        First = First->next;
    }while(First != Last->next);
    printf("\n");
}

void ReverseDisplay(PNODE First,PNODE Last)
{
    if(First == NULL && Last == NULL)
    {
        printf("Linked list is empty.\n");
        return;
    }
    printf("Elements of array in reverse order are : \n");
    do
    {
        printf("|%d|<=>",Last->Data);
        Last = Last->prev;
    }while(Last != First->prev);
    printf("\n");
}

int Count(PNODE First,PNODE Last)
{
    int iCnt = 0;
    if(First == NULL && Last == NULL)
    {
        return iCnt;
    }

    do
    {
        iCnt++;
        First = First->next;
    }while(First != Last->next);
    return iCnt;
}

int main()
{
    PNODE Head = NULL;
    PNODE Tail = NULL;
    int iRet = 0;

    InsertFirst(&Head,&Tail,101);
    InsertFirst(&Head,&Tail,51);
    InsertFirst(&Head,&Tail,21);
    InsertFirst(&Head,&Tail,11);
    Display(Head,Tail);

    InsertLast(&Head,&Tail,111);
    InsertLast(&Head,&Tail,121);
    InsertLast(&Head,&Tail,151);
    Display(Head,Tail);

    DeleteFirst(&Head,&Tail);
    Display(Head,Tail);

    printf("-----------------------------------\n");
    ReverseDisplay(Head,Tail);
    printf("-----------------------------------\n");

    DeleteLast(&Head,&Tail);
    Display(Head,Tail);

    InsertAtPos(&Head,&Tail,31,3);
    Display(Head,Tail);

    DeleteAtPos(&Head,&Tail,3);
    Display(Head,Tail);

    iRet = Count(Head,Tail);
    printf("Number of nodes are : %d\n",iRet);

    printf("-----------------------------------\n");
    ReverseDisplay(Head,Tail);
    printf("-----------------------------------\n");


    return 0;
}