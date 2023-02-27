import java.util.*;

class Sorting
{
    private int Arr[];

    public Sorting(int Size)
    {
        Arr = new int[Size];
    }

    public void Accept()
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the elements : ");
        for(int i = 0;i < Arr.length;i++)
        {
            Arr[i] = sobj.nextInt();
        }
    }

    public void Display()
    {
        System.out.println("Elements of array are : ");

        for(int i = 0;i < Arr.length;i++)
        {
            System.out.println(Arr[i]);
        }
    }
}

class Program385
{
    public static void main(String argv[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the size of array : ");
        int Length = sobj.nextInt();

        Sorting sort = new Sorting(Length);

        sort.Accept();
        sort.Display();
    }
}