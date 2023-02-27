
    //          Singly linear linked list       //

#include<iostream>
using namespace std;

template <class T>
struct node 
{
    T data;
    struct node * next;
};

template <class T>
class SinglyLL
{
    public:
        struct node <T>* First;
        int iCount;

        SinglyLL();

        void InsertFirst(T);
        void InsertAtPos(T ,int);
        void InsertLast(T);

        void DeleteFirst();
        void DeleteAtPos(int);
        void DeleteLast();

        void Display();
};

template <class T>
SinglyLL<T>::SinglyLL()
{
    First = NULL;
    iCount = 0;
}

template <class T>
void SinglyLL<T>::InsertFirst(T iNo)
{
    node <T>* newn = new node<T>;

    newn->next = NULL;
    newn->data = iNo;

    if(First == NULL)
    {
        First = newn;
    }
    else
    {
        newn->next = First;
        First = newn;
    }
    iCount++;
}

template <class T>
void SinglyLL<T>::InsertAtPos(T iNo ,int iPos)
{
    node <T>* Temp = NULL;
    node <T>* newn = NULL;
    if(iPos < 1 || iPos > iCount+1)
    {
        cout<<"Invalide position.\n";
        return;
    }
    else if(iPos == 1)
    {
        InsertFirst(iNo);
    }
    else if(iPos == iCount+1)
    {
        InsertLast(iNo);
    }
    else
    {   
        Temp = First;
        newn = new node<T>;
        newn->data = iNo;
        newn->next = NULL;

        for(int iCnt = 1;iCnt < iPos-1;iCnt++)
        {
            Temp = Temp->next;
        }
        newn->next = Temp->next;
        Temp->next = newn;
    }
    iCount++;
}

template <class T>
void SinglyLL<T>::InsertLast(T iNo)
{
    node <T>* Temp = NULL;
    node <T>* newn = new node<T>;

    newn->data = iNo;
    newn->next = NULL;

    if(First == NULL)
    {
        First = newn;
    }
    else
    {
        Temp = First;

        while(Temp->next != NULL)
        {
            Temp = Temp->next;
        }
        Temp->next = newn;
    }
    iCount++;
}

template <class T>
void SinglyLL<T>::DeleteFirst()
{
    node <T>* Temp = NULL;
    if(First == NULL)
    {
        cout<<"Nothing to delete.\n";
    }
    else if(First->next == NULL)
    {
        delete First;
        First = NULL;
    }
    else
    {
        Temp = First;
        First = First->next;
        delete Temp;
    }
    iCount--;
}

template <class T>
void SinglyLL<T>::DeleteAtPos(int iPos)
{
    node<T>* Temp1 = NULL;
    node<T>* Temp2 = NULL;
    if(iPos < 1 || iPos > iCount)
    {
        cout<<"invalid position.\n";
        return;
    }
    else if(iPos == 1)
    {
        DeleteFirst();
    }
    else if(iPos == iCount)
    {
        DeleteLast();
    }
    else
    {
        Temp1 = First;

        for(int iCnt = 1;iCnt < iPos-1;iCnt++)
        {
            Temp1 = Temp1->next;
        }
        Temp2 = Temp1->next;
        Temp1->next = Temp2->next;
        delete Temp2;
    }
    iCount--;
}

template <class T>
void SinglyLL<T>::DeleteLast()
{
    node<T>* Temp = NULL;
    if(First == NULL)
    {
        cout<<"Nothing to delete.\n";
    }
    else if(First->next == NULL)
    {
        delete First;
        First = NULL;
    }
    else
    {
        Temp = First;

        while(Temp->next->next != NULL)
        {
            Temp = Temp->next;
        }
        delete Temp->next;
        Temp->next = NULL;
    }
    iCount--;
}

template <class T>
void SinglyLL<T>::Display()
{
    node<T>* Temp = First;
    cout<<"The elements of nodes are : \n";
    while(Temp != NULL)
    {
        cout<<"|"<<Temp->data<<"|->";
        Temp = Temp->next;
    }
    cout<<"\n";
}

int main()
{
    SinglyLL <int> obj;
    cout<<"\n-------------------------------------------------------------------------\n";
    obj.InsertFirst(101); 
    obj.InsertFirst(51); 
    obj.InsertFirst(21); 
    obj.InsertFirst(11); 
    obj.Display();
    cout<<"The number of nodes are : "<<obj.iCount<<"\n";
    cout<<"\n-------------------------------------------------------------------------\n";
    obj.InsertLast(111);
    obj.InsertLast(121);
    obj.Display();
    cout<<"The number of nodes are : "<<obj.iCount<<"\n";
    cout<<"\n-------------------------------------------------------------------------\n";
    obj.InsertAtPos(31,3);
    obj.Display();
    cout<<"The number of nodes are : "<<obj.iCount<<"\n";
    cout<<"\n-------------------------------------------------------------------------\n";
    obj.DeleteFirst();
    obj.Display();
    cout<<"The number of nodes are : "<<obj.iCount<<"\n";
    cout<<"\n-------------------------------------------------------------------------\n";
    obj.DeleteAtPos(3);
    obj.Display();
    cout<<"The number of nodes are : "<<obj.iCount<<"\n";
    cout<<"\n-------------------------------------------------------------------------\n";
    obj.DeleteLast();
    obj.Display();
    cout<<"The number of nodes are : "<<obj.iCount<<"\n";
    cout<<"\n-------------------------------------------------------------------------\n";
    cout<<"\n-------------------------------------------------------------------------\n";
    SinglyLL <float>fobj;
    fobj.InsertFirst(10.541);
    fobj.InsertFirst(514.45);
    fobj.InsertFirst(21.65);
    fobj.InsertFirst(11.43);
    fobj.Display();
    fobj.InsertLast(1.611);
    fobj.InsertLast(15.761);
    fobj.Display();
    fobj.InsertAtPos(3.871,3);
    fobj.Display();
    fobj.DeleteFirst();
    fobj.Display();
    fobj.DeleteLast();
    fobj.Display();
    fobj.DeleteAtPos(3);
    fobj.Display();
    cout<<"\n-------------------------------------------------------------------------\n";

    return 0;
}