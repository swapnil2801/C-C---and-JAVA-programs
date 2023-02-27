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
    PNODE newn = (PNODE)malloc(sizeof(NODE));

    newn->Data = No;
    newn->next = NULL;

    if((*First == NULL) && (*Last == NULL))
    {
        *First = *Last = newn;
        (*Last)->next = *First;
    }
    else
    {
        newn->next = *First;
        *First = newn;
        (*Last)->next = *First;
    }

}
void InsertAtPosition(PPNODE First,PPNODE Last,int No,int iPos)
{
    int Node_Count = 0,i = 0;
    Node_Count = Count(*First,*Last);
    PNODE Temp = NULL;
    PNODE newn = NULL;

    if((iPos < 1) || (iPos > Node_Count+1))
    {
        printf("Invalid position.\n");
    }
    else if(iPos == 1)
    {
        InsertFirst(First,Last,No);
    }
    else if(iPos == Node_Count+1)
    {
        InsertLast(First,Last,No);
    }
    else
    {
        newn = (PNODE)malloc(sizeof(NODE));
        newn->Data = No;
        newn->next = NULL;

        Temp = *First;
        for(i = 1;i < iPos-1;i++)
        {
            Temp = Temp->next;
        }
        newn->next = Temp->next;
        Temp->next = newn;
    }
}

void InsertLast(PPNODE First, PPNODE Last,int No)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));

    newn->Data = No;
    newn->next = NULL;

    if((*First == NULL) && (*Last == NULL))
    {
        *First = *Last = newn;
        (*Last)->next = *First;
    }
    else
    {
        (*Last)->next = newn;
        *Last = newn;
        (*Last)->next = *First;
    }
}

void DeleteFirst(PPNODE First,PPNODE Last)
{
    if(*First == NULL && *Last == NULL)   // if LL is empty
    {
        return;
    }
    else if (*First == *Last)       // if LL contail single node
    {
        free(*First);
        *First = NULL;
        *Last = NULL;
    }
    else            // if LL contain more than one node
    {
        *First = (*First)->next;
        free((*Last)->next);
        (*Last)->next = *First;
    }
}

void DeleteAtPosition(PPNODE First,PPNODE Last,int iPos)
{
    PNODE Temp1 = NULL;
    PNODE Temp2 = NULL;
    int Node_Count = 0,i = 0;
    Node_Count = Count(*First,*Last);

    if(iPos < 1 || iPos > Node_Count)
    {
        printf("Invalid position.\n");
    }
    else if(iPos == 1)
    {
        DeleteFirst(First,Last);
    }
    else if(iPos == Node_Count)
    {
        DeleteLast(First,Last);
    }
    else
    {
        Temp1 = *First;
        for(i = 1;i < iPos-1;i++)
        {
            Temp1 = Temp1->next;
        }
        Temp2 = Temp1->next;
        Temp1->next = Temp2->next;
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
        while(Temp->next != (*Last))
        {
            Temp = Temp->next;
        }
        free(*Last);
        *Last = Temp;
        (*Last)->next = *First;
    }
}

void Display(PNODE First,PNODE Last)
{
    printf("Elements of Linked list are : \n");

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

    InsertFirst(&Head, &Tail, 51);
    InsertFirst(&Head, &Tail, 21);
    InsertFirst(&Head, &Tail, 11);

    Display(Head,Tail);

    InsertLast(&Head, &Tail, 101);
    InsertLast(&Head, &Tail, 111);
    InsertLast(&Head, &Tail, 121);

    Display(Head,Tail);

    iRet = Count(Head,Tail);
    printf("Number of nodes are : %d\n",iRet);

    DeleteFirst(&Head,&Tail);
    Display(Head,Tail);

    DeleteLast(&Head,&Tail);
    Display(Head,Tail);

    iRet = Count(Head,Tail);
    printf("Number of nodes are : %d\n",iRet);


    InsertAtPosition(&Head, &Tail, 31,3);
    Display(Head,Tail);

    DeleteAtPosition(&Head, &Tail,3);
    Display(Head,Tail);

    iRet = Count(Head,Tail);
    printf("Number of nodes are : %d\n",iRet);

    return 0;
}

