import java.util.*;

class Node
{
    public int Data;
    public Node Next;

    public Node(int No)      //parameterised constructor
    {
        this.Data = No;
        this.Next = null;
    }
}

class SinglyLL
{
    public Node Head;
    public int Count;

    public SinglyLL()
    {
        Head = null;
        Count = 0;
    }

    protected void finalize()
    {
        // Memory free
    }

    public void InsertFirst(int No)
    {
        Node newn = new Node(No);
        // newn.Data = No;         // if there is no constructor in Node class
        // newn.Next = null;       // if there is no constructor in Node class

        if(this.Head == null)
        {
            this.Head = newn;
        }
        else
        {
            newn.Next = this.Head;
            this.Head = newn;
        }
        this.Count++;
    }

    public void Display()
    {
        Node temp = this.Head;

        System.out.println("Elements of linked list are : ");
        while(temp != null)
        {
            System.out.print("|"+temp.Data+"|->");   
            temp = temp.Next;   
        }
        System.out.println("NULL");
    }
}

class Program393
{
    public static void main(String argv[])
    {
        SinglyLL obj = new SinglyLL();

        obj.InsertFirst(51);
        obj.InsertFirst(21);
        obj.InsertFirst(11);

        obj.Display();
    }
}