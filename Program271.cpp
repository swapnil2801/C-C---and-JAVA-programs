
    //      Singly circuler linked list

#include <iostream>
using namespace std;

template <class T>
struct node 
{
    T data;
    struct node * next;
};

template <class T>
class SinglyCirculerLL
{
    public:
        node <T>* First;
        node <T>* Last;
        int iCount;

        SinglyCirculerLL();

        void InsertFirst(T);
        void InsertAtPos(T ,int);
        void InsertLast(T);

        void DeleteFirst();
        void DeleteAtPos(int);
        void DeleteLast();

        void Display();
};

template <class T>
SinglyCirculerLL <T>::SinglyCirculerLL()
{
    First = NULL;
    Last = NULL;
    iCount = 0;
}

template <class T>
void SinglyCirculerLL<T>::InsertFirst(T iNo)
{
    node<T> * newn = new node<T>;
    newn->data = iNo;
    newn->next = NULL;

    if(First == NULL && Last == NULL)
    {
        First = newn;
        Last = newn;
    }
    else
    {
        newn->next = First;
        First = newn;
    }
    Last->next = First;
    iCount++;
}

template <class T>
void SinglyCirculerLL<T>::InsertLast(T iNo)
{
    node<T> * newn = new node<T>;
    newn->data = iNo;
    newn->next = NULL;

    if(First == NULL && Last == NULL)
    {
        First = newn;
        Last = newn;
    }
    else
    {
        Last->next = newn;
        Last = newn;
    }
    Last->next = First;
    iCount++;
}

template <class T>
void SinglyCirculerLL<T>::InsertAtPos(T iNo,int iPos)
{
    node <T>* newn = NULL;
    node<T> * Temp = NULL;
    if(iPos < 1 || iPos > iCount+1)
    {
        cout<<"Invalid position.\n";
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
void SinglyCirculerLL<T>::DeleteFirst()
{
    if(First == NULL && Last == NULL)
    {
        cout<<"Nothing to delete.\n";
        return;   
    }
    else if(First->next == NULL && Last->next == NULL)
    {
        delete First;
        First = NULL;
        Last = NULL;
    }
    else 
    {
        First = First->next;
        delete Last->next;
        Last->next = First;
    }
    iCount--;
}

template <class T>
void SinglyCirculerLL<T>::DeleteLast()
{
    node<T> * Temp = NULL;
    if(First == NULL && Last == NULL)
    {
        cout<<"Nothing to delete.\n";
        return;   
    }
    else if(First->next == NULL && Last->next == NULL)
    {
        delete First;
        First = NULL;
        Last = NULL;
    }
    else 
    {
        Temp = First;
        while(Temp->next != Last)
        {
            Temp = Temp->next;
        }
        delete Last;
        Last = Temp;
        Last->next = First;
    }
    iCount--;
}

template <class T>
void SinglyCirculerLL<T>::DeleteAtPos(int iPos)
{
    node<T> * Temp1 = NULL;
    node<T> * Temp2 = NULL;
    if(iPos < 1 || iPos > iCount)
    {
        cout<<"Invalid position.\n";
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

}

template <class T>
void SinglyCirculerLL<T>::Display()
{
    node<T> * Temp = First;
    cout<<"The elements of nodes are : \n";
    do
    {
        cout<<"|"<<Temp->data<<"|->";
        Temp = Temp->next;
    }while(Temp != Last->next);
    cout<<"\n";
}

int main()
{
    SinglyCirculerLL <int> obj;
    obj.InsertFirst(101);
    obj.InsertFirst(51);
    obj.InsertFirst(21);
    obj.InsertFirst(11);
    obj.Display();
    obj.InsertLast(111);
    obj.InsertLast(151);
    obj.Display();
    obj.InsertAtPos(31,3);
    obj.Display();
    obj.DeleteFirst();
    obj.Display();
    obj.DeleteLast();
    obj.Display();
    obj.DeleteAtPos(3);
    obj.Display();

    cout<<"\n--------------------------------------------------------------\n";

    SinglyCirculerLL <float> fobj;
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

    return 0;
}