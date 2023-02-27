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
    PNODE  Head = NULL;
    int iChoice = 0,iPos = 0,iRet = 0,iNo = 0;

    printf("Welcome to data structure applications written by swapnil.\n");
    
    while(1)        // Unconditional loop or while(true)
    {
        printf("---------------------------------------------\n");
        
        printf("Desired options are : \n");
        printf("1 : Insert new node at first position\n");
        printf("2 : Insert new node at last position\n");
        printf("3 : Insert new node at given position\n");
        printf("4 : Delete node from first position\n");
        printf("5 : Delete node from Last position\n");
        printf("6 : Delete node from given position\n");
        printf("7 : Display the contains of Linked List\n");
        printf("8 : Count number of nodes from Linked List\n");
        printf("9 : Return from appliction");

        printf("Please Enter the number of the desired option : \n");
        scanf("%d",&iChoice);

        switch(iChoice)
        {
            case 1:
                printf("Enter the data that you want to insert : \n");
                scanf("%d",&iNo);

                InsertFirst(&Head,iNo);
                break;

            case 2:
                printf("Enter the data that you want to insert : \n");
                scanf("%d",&iNo);

                InsertLast(&Head,iNo);
                break;

            case 3:
                printf("Enter the data that you want to insert : \n");
                scanf("%d",&iNo);

                printf("Enter the position : \n");
                scanf("%d",&iPos);

                InsertAtPos(&Head,iNo,iPos);
                break;

            case 4:
                DeleteFirst(&Head);
                break;

            case 5:
                DeleteLast(&Head);
                break;

            case 6:
                printf("Enter the position in which you want to delete data : \n");
                scanf("%d",&iPos);

                DeleteAtPos(&Head,iPos);
                break;

            case 7:
                printf("The elements of nodes are : \n");

                Display(Head);
                break;

            case 8:
                iRet = Count(Head);
                printf("Number of elements are : %d\n",iRet);
                break;

            case 9:
                printf("Thanks for using application.\n");
                return 0;
            
            default:
                printf("Invalid option.\n");
        }

        printf("---------------------------------------------\n");
    }
    return 0;
}
