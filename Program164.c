            //  Doubly lonear linked list   //

#include<stdio.h>
#include<stdlib.h>

#pragma pack(1)
struct node
{
    int data;
    struct node *next;
    struct node **prev;     // X            x for new line compare to singly linesr linked list
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE First,int No)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));

    newn->data = No;
    newn->next = NULL;
    newn->prev = NULL;      // X

    if(*First == NULL)
    {
        *First = newn;
    }
    else
    {
        newn->next = *First;
        (*First)->prev = newn;  // X
        *First = newn;
    }
}

void InsertLast(PPNODE First,int No)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));
    PNODE Temp = *First;

    newn->data = No;
    newn->next = NULL;
    newn->prev = NULL;      // X

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
        newn->prev = Temp;       // X
    }
}

void DeleteFirst(PPNODE First)      // Withont Temp varible
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
        free((*First)->prev);       // X
        (*First)->prev = NULL;      // X
    }
}

void DeleteLast(PPNODE First)
{
    PNODE Temp = NULL;
    if(*First == NULL)
    {
        return;
    }
    else if((*First)->next == NULL)
    {
        free(*First);
        *First = NULL;
    }
    else
    {
        while((Temp->next->next) != NULL)
        {
            Temp = Temp->next;
        }
        free(Temp->next);
        Temp->next = NULL;
    }
}

void Display(PNODE First)
{
    printf("Elements of linked list are :");
    printf("NULL<=>");
    while(First != NULL)
    {

        printf("|%d|<=>",First->data);
        First = First->next;
    }
    printf("NULL\n");
}

int Count(PNODE First)
{
    int iCnt = 0;
    while(First != NULL)
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

    InsertFirst(&Head,101);
    Display(Head);
    InsertFirst(&Head,51);
    Display(Head);
    InsertFirst(&Head,21);
    Display(Head);
    InsertFirst(&Head,11);
    Display(Head);
    InsertLast(&Head,121);
    Display(Head);
    DeleteFirst(&Head);
    Display(Head);
    DeleteLast(&Head);
    Display(Head);
    iRet = Count(Head);
    printf("Number of nodes are : %d\n",iRet);



    return 0;
}