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

void InsertAtPos(PPNODE First,int No, int iPos)
{
    int NodeCnt = 0;
    int i = 0;
    NodeCnt = Count(*First);
    PNODE Temp = NULL;
    PNODE newn = NULL;

    if((iPos < 1) || (iPos > (NodeCnt + 1)))
    {
        printf("Invalid Position\n");
    }
    else if(iPos == 1)
    {
        InsertFirst(First,No);
    }
    else if(iPos == (NodeCnt+1))
    {
        InsertLast(First,No);
    }
    else
    {
        newn = (PNODE)malloc(sizeof(NODE));

        newn->data = No;
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
void DeleteAtPos(PPNODE First, int iPos)
{
    int NodeCnt = 0;
    int i = 0;
    NodeCnt = Count(*First);
    PNODE Temp1 = NULL;
    PNODE Temp2 = NULL;
    PNODE newn = NULL;

    if((iPos < 1) || (iPos > NodeCnt))
    {
        printf("Invalid Position\n");
    }
    else if(iPos == 1)
    {
        DeleteFirst(First);
    }
    else if(iPos == NodeCnt)
    {
        DeleteLast(First);
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

        //OR

        // Temp2 = Temp1->next->next;
        // free(Temp1->next);
        // Temp1->next = Temp2;
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
    InsertLast(&Head, 121);

    Display(Head);
    iRet = Count(Head);
    printf("Number of nodes are : %d\n",iRet);
    
    InsertAtPos(&Head,105,5);
    Display(Head);
    
    DeleteAtPos(&Head,5);
    Display(Head);
  
    DeleteFirst(&Head);
    Display(Head);
    iRet = Count(Head);
    printf("Number of nodes are : %d\n",iRet);

    DeleteLast(&Head);
    Display(Head);
    iRet = Count(Head);
    printf("Number of nodes are : %d\n",iRet);

    return 0;
}
