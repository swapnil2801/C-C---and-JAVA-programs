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
    private Node Head;
    private int Count;

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

    public void InsertLast(int No)
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
            Node temp = this.Head;

            while(temp.Next != null)
            {
                temp = temp.Next;
            }
            temp.Next = newn;
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

    public void DeleteFirst()
    {
        if(this.Head == null) // if(this.Count == 0)
        {
            System.out.println("Nothing to delete.");
            return;
        }
        else if(this.Head.Next == null) //if(this.count == 1)
        {   
            this.Head = null;
        }
        else
        {
            this.Head = this.Head.Next;
        }
        this.Count--;
    }

    public void DeleteLast()
    {
        if(this.Head == null) // if(this.Count == 0)
        {
            System.out.println("Nothing to delete.");
            return;
        }
        else if(this.Head.Next == null) //if(this.count == 1)
        {   
            this.Head = null;
        }
        else
        {
            Node temp = this.Head;

            while(temp.Next.Next != null)
            {
                temp = temp.Next;
            }
            temp.Next = null;

        }
        this.Count--;
    }

    public void InsertAtPos(int No,int iPos)
    {
        if(iPos < 1 || iPos > Count+1)
        {
            System.out.println("Invalid position.");
            return;
        }
        if(iPos == 1)
        {
            InsertFirst(No);
        }
        else if(iPos == Count+1)
        {
            InsertLast(No);
        }
        else
        {
            Node newn = new Node(No);
            Node temp = this.Head;
            for(int i = 1;i < iPos-1;i++)
            {
                temp = temp.Next;
            }
            newn.Next = temp.Next;
            temp.Next = newn;
            Count++;
        }
        
    }

    public void DeleteAtPos(int iPos)
    {
        if(iPos < 1 || iPos > Count)
        {
            System.out.println("Invalid position.");
            return;
        }
        if(iPos == 1)
        {
            DeleteFirst();
        }
        else if(iPos == Count+1)
        {
            DeleteLast();
        }
        else
        {
            Node temp = Head;

            for(int i = 1;i < iPos-1;i++)
            {
                temp = temp.Next;
            }
            temp.Next = temp.Next.Next;
            Count--;
        }
    }

    public int CountNodes()
    {
        return this.Count;
    }
}

class Program394
{
    public static void main(String argv[])
    {
        SinglyLL obj = new SinglyLL();

        obj.InsertFirst(51);
        obj.InsertFirst(21);
        obj.InsertFirst(11);

        obj.Display();

        obj.InsertLast(101);
        obj.InsertLast(111);
        obj.InsertLast(121);
        obj.InsertLast(151);

        obj.Display();

        int ret = obj.CountNodes();
        System.out.println("Number of nodes are : "+ret);

        obj.DeleteFirst();
        obj.Display();

        obj.DeleteLast();
        obj.Display();

        ret = obj.CountNodes();
        System.out.println("Number of nodes are : "+ret);

        obj.InsertAtPos(31,3);
        obj.Display();

        obj.DeleteAtPos(3);
        obj.Display();

        ret = obj.CountNodes();
        System.out.println("Number of nodes are : "+ret);


    }
}