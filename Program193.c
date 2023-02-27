//      Doubly Circular Linked list in c        //

#include <stdio.h>
#include <stdlib.h>


struct node 
{
    int Data;
    struct node *next;
    struct node *prev;
};

typedef struct node NODE;
typedef struct node * PNODE ;
typedef struct node ** PPNODE ;

//      Functions Decleration       //

void InsertFirst(PPNODE,PPNODE,int);
void InsertLast(PPNODE,PPNODE,int);
void InsertAtPos(PPNODE ,PPNODE,int,int);

void DeleteFirst(PPNODE,PPNODE);
void DeleteLast(PPNODE ,PPNODE);
void DeleteAtPos(PPNODE ,PPNODE,int);

//     Functions Defination        //

void InsertFirst(PPNODE First,PPNODE Last,int No)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));

    newn->Data = No;
    newn->next = NULL;
    newn->prev = NULL;

    if(*First == NULL && *Last == NULL)
    {
        *First = *Last = newn;
    }
    else
    {
        newn->next = *First;
        newn->prev = *Last;
        *First = newn;
    }
    (*First)->prev = *Last;
    (*Last)->next = *First;
}

void InsertAtPos(PPNODE First,PPNODE Last,int No,int iPos)
{
    PNODE Temp = NULL;
    PNODE newn = NULL;
    int iNodeCount = Count(*First,*Last);

    if((iPos < 1) || (iPos > iNodeCount+1))
    {
        printf("Invalid position.\n");
        return;
    }
    else if(iPos == 1)
    {
        InsertFirst(First,Last,No);
    }
    else if(iPos == iNodeCount+1)
    {
        InsertLast(First,Last,No);
    }
    else
    {
        Temp = *First;
        newn = (PNODE)malloc(sizeof(NODE));
        newn->Data = No;
        newn->next = NULL;
        newn->prev = NULL;

        for(int iCnt = 1;iCnt < iPos-1;iCnt++)
        {
            Temp = Temp->next;
        }
        newn->next = Temp->next;
        newn->prev = Temp;
        Temp->next->prev = newn;
        Temp->next = newn;
    }
    
}

void InsertLast(PPNODE First,PPNODE Last,int No)
{
    PNODE Temp = NULL;
    PNODE newn = (PNODE)malloc(sizeof(NODE));

    newn->Data = No;
    newn->next = NULL;
    newn->prev = NULL;

    if(*First == NULL && *Last == NULL)
    {
        *First = *Last = newn;
        (*Last)->next =(*First)->next =  *First;
        (*First)->prev = (*Last)->prev = *Last;
    }
    else
    {
        Temp = *First;
        while(Temp->next != *First)
        {
            Temp = Temp->next;
        }
        newn->next = *First;
        newn->prev = *Last;
        Temp->next = newn;
        *Last = newn;
        (*First)->prev = *Last;
    }
}

void DeleteFirst(PPNODE First,PPNODE Last)
{
    if(*First == NULL && *Last == NULL)
    {
        return;
    }
    else if (*First == *Last)
    {
        free(*First);
        *First = NULL;
        *Last = NULL;
    }
    else
    {
        *First = (*First)->next;
        (*First)->prev = *Last;
        free((*Last)->next);
        (*Last)->next = *First;
    }
}

void DeleteAtPos(PPNODE First,PPNODE Last,int iPos)
{
    int iNodeCnt = Count(*First,*Last);
    PNODE Temp = NULL;
    PNODE Temp2 = NULL;

    if(iPos < 1 || iPos > iNodeCnt)
    {
        printf("Invalid position.\n");
        return;
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
        for(int iCnt = 1;iCnt < iPos-1;iCnt++)
        {
            Temp = Temp->next;
        }
        Temp2 = Temp->next;
        Temp->next = Temp2->next;
        Temp->next->prev = Temp;
        free(Temp2);
    }

}

void DeleteLast(PPNODE First,PPNODE Last)
{
    PNODE Temp = NULL;
    if(*First == NULL && *Last == NULL)
    {
        return;
    }
    else if (*First == *Last)
    {
        free(*First);
        *First = NULL;
        *Last = NULL;
    }
    else
    {
        Temp = *First;
        while(Temp->next != *Last)
        {
            Temp = Temp->next;
        }
        Temp->next = *First;
        (*First)->prev = Temp;
        free(*Last);
        *Last = Temp;
    }
}

void Display(PNODE First,PNODE Last)
{
    do
    {
        printf("|%d|->",First->Data);
        First = First->next;
    } while (First != Last->next);
    printf("\n");
}

int Count(PNODE First,PNODE Last)
{
    int iCnt = 0;
    do
    {
        iCnt++;
        First = First->next;
    } while (First != Last->next);
    return iCnt;
}

int main()
{
    int iRet = 0;
    PNODE Head = NULL;
    PNODE Tail = NULL;

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

    DeleteLast(&Head,&Tail);
    Display(Head,Tail);

    InsertAtPos(&Head,&Tail,31,3);
    Display(Head,Tail);

    DeleteAtPos(&Head,&Tail,3);
    Display(Head,Tail);
    

    iRet = Count(Head,Tail);
    printf("Number of nodes are : %d\n",iRet);

    return 0;
}