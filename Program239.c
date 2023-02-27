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

bool ChkPerfect(int iNo)
{
    int iSum = 0,iCnt = 0;
    int iTemp = iNo;

    for(iCnt = 1;iCnt <= (iNo/2);iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            iSum += iCnt;
        }
    }
    return (iSum == iTemp);
}

void DisplayPerfect(PNODE First)
{
    bool bRet = false;
    while(First != NULL)
    {
        bRet = ChkPerfect(First->data);
        if(bRet == true)
        {
            printf("%d is an perfect number.\n",First->data);
        }
        First = First->next;
    }
    
}

int main()
{
    PNODE Head = NULL;
    int iRet = 0;

    InsertLast(&Head, 11);
    InsertLast(&Head, 21);
    InsertLast(&Head, 6);
    InsertLast(&Head, 101);
    InsertLast(&Head, 111);
    InsertLast(&Head, 28);
    InsertLast(&Head, 151);

    Display(Head);

    DisplayPerfect(Head);

}
