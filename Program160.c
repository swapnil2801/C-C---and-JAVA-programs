        //     Solve  

#include<stdio.h>
#include<stdlib.h>

struct node
{
    int Data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE First,int No)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));

    newn->Data = No;
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

void InsertAtPosition(PPNODE First,int No,int Pos)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));
    PNODE Temp = *First;
    int iCnt = 1;

    newn->Data = No;
    newn->next = NULL;

    if(Pos == 1)
    {
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
    else
    {
        while(iCnt != Pos-1)
        {
            iCnt++;
            Temp = Temp->next;
        }
        PNODE Temp2 = Temp->next;
        Temp->next = newn;
        newn->next = Temp2;
    }
}

void InsertLast(PPNODE First,int No)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));
    PNODE Temp = *First;
    newn->Data = No;
    newn->next = NULL;

    if(*First == NULL)
    {
        *First = newn;
    }
    else
    {
        while(Temp->next != NULL)
        {
            Temp = Temp->next;
        }
        Temp->next = newn;
    }
}

void DeleteFirst(PPNODE First)
{
    PNODE Temp = *First;
    if(*First == NULL)
    {
        return;
    }
    else if((*First)->next == NULL)
    {
        free(*First);
    }
    else
    {
        (*First) = (*First)->next;
        free(Temp);
    }
}

void DeleteAtPosition(PPNODE First,int Pos)
{
    int iCnt = 0;
    PNODE Temp = *First;
    PNODE Temp2 = NULL;
    if(Pos == 1)
    {
        if(*First == NULL)
        {
            return;
        }
        else if((*First)->next == NULL)
        {
            free(*First);
        }
        else
        {
        (*First) = (*First)->next;
        free(Temp);
        }
    }
    else
    {
        iCnt = 1;
        while(iCnt != (Pos-1))
        {
            iCnt++;
            Temp = Temp->next;
        }
        Temp2 = Temp->next->next;
        free(Temp->next);
        Temp->next = Temp2;

    }
}

void DeleteLast(PPNODE First)
{
    PNODE Temp = *First;
    if(*First == NULL)
    {
        return;
    }
    else if((*First)->next == NULL)
    {
        free(*First);
    }
    else
    {
        while(Temp->next->next != NULL)
        {
            Temp = Temp->next;
        }
        free(Temp->next);
        Temp->next = NULL;
    }
}

void Display(PNODE First)
{
    while(First->next != NULL)
    {
        printf("|%d|->",First->Data);
        First = First->next;
    }
    printf("NULL\n");
}

int Count(PNODE First)
{
    int iCnt = 0;
    while(First->next != NULL)
    {
        iCnt++;
        First = First->next;
    }
    return iCnt;
}

int main()
{
    PNODE Head = NULL;
    int iRet = 0;
    InsertLast(&Head, 201);
    InsertLast(&Head, 151);
    InsertLast(&Head, 121);
    InsertFirst(&Head, 101);
    InsertFirst(&Head, 51);
    InsertFirst(&Head, 21);
    InsertFirst(&Head, 11);

    Display(Head);

    InsertLast(&Head, 121);
    Display(Head);

    DeleteFirst(&Head);
    Display(Head);

    DeleteLast(&Head);
    Display(Head);

    InsertAtPosition(&Head, 31, 1);
    Display(Head);

    DeleteAtPosition(&Head,1);
    Display(Head);

    iRet = Count(Head);
    printf("Number of nodes in given linked list are : %d\n",iRet);

    return 0;
}