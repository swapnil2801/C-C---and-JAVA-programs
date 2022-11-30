#include<stdio.h>
#include<stdlib.h>

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

void InsertLast(PPNODE First,int no)
{
    PNODE newn = NULL;

    PNODE Temp = *First;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = no;
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
    // PNODE Temp = NULL;
    PNODE Temp = *First;
    if(*First == NULL)  // A : While there is no node available
    {
        return;
    }
    else if((*First)->next == NULL)  // B : If only one node is available
    {
        free(*First);
        *First = NULL;
    }

    // else  // C : If multiple nodes are available
    // {
    //     Temp = (*First)->next;
    //     free(*First);
    //     *First = Temp;
    // }
    else
    {
        (*First) = (*First)->next;
        free(Temp);
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

    InsertFirst(&Head , 51);
    InsertFirst(&Head , 21);
    InsertFirst(&Head , 11);
    
    Display(Head);
    iRet = Count(Head);
    printf("Number of nodes are : %d\n",iRet);

    InsertLast(&Head, 101);
    InsertLast(&Head, 111);

    Display(Head);
    iRet = Count(Head);
    printf("Number of nodes are : %d\n",iRet);

    DeleteFirst(&Head);
    Display(Head);
    iRet = Count(Head);
    printf("Number of nodes are : %d\n",iRet);
    return 0;
}
