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

int Frequency_of_Node(PNODE First,int No)
{
    int Frequency = 0;
    while(First != NULL)
    {
        if(First->data == No)
        {
            Frequency++;
        }
        First = First->next;
    }
    return Frequency;
}

int main()
{
    PNODE Head = NULL;
    int iRet = 0;
    
    InsertFirst(&Head,151);
    InsertFirst(&Head,121);
    InsertFirst(&Head,101);
    InsertFirst(&Head,111);
    InsertFirst(&Head,101);
    InsertFirst(&Head,51);
    InsertFirst(&Head,21);
    InsertFirst(&Head,101);
    InsertFirst(&Head,11);

    Display(Head);

    iRet = Count(Head);
    printf("Number of nodes are : %d\n",iRet);

    iRet = Frequency_of_Node(Head,101); 
    printf("Frequency is : %d\n",iRet);
    

    return 0;
}
