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

int Search_Last_Occurence(PNODE First,int No)
{
    int Occurence = 1;
    int iPos = -1;
    while(First != NULL)
    {
        if(First->data == No)
        {
            iPos = Occurence;
        }
        Occurence++;
        First = First->next;
    }
    return iPos;
}

int Middle_Element_Find(PNODE First)
{
    PNODE Teacher = First;
    PNODE Student = First;

    while(Teacher != NULL)      // for Even
    {
        Teacher = Teacher->next->next;
        Student = Student->next;
    }
    return Student->data;
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
    
    InsertFirst(&Head,151);
    InsertFirst(&Head,121);
    InsertFirst(&Head,111);
    InsertFirst(&Head,101);
    InsertFirst(&Head,51);
    InsertFirst(&Head,21);
    InsertFirst(&Head,101);
    InsertFirst(&Head,11);

    Display(Head);

    iRet = Count(Head);
    printf("Number of nodes are : %d\n",iRet);

    iRet = Search_Last_Occurence(Head,101);
    printf("Last Occurence is  : %d\n",iRet);

    iRet = Middle_Element_Find(Head);
    printf("Middle elemenent is : %d\n",iRet);

    return 0;
}
