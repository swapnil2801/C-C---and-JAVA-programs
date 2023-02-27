// Reverse the array

import java.util.*;

class ArrayX
{
    public int Arr[];

    public ArrayX(int iSize)
    {
        Arr = new int[iSize];
    }

    protected void Accept()
    {
        System.out.println("Please enter "+Arr.length+" elements : ");
        Scanner sobj = new Scanner(System.in);
        for(int iCnt = 0;iCnt < Arr.length;iCnt++)
        {
            System.out.println("Enter the element no : "+(iCnt+1));
            Arr[iCnt] = sobj.nextInt();
        }
    }

    protected void Display()
    {
        System.out.println("Elements of array are : ");
        for(int iCnt = 0;iCnt < Arr.length;iCnt++)
        {
            System.out.print(Arr[iCnt]+"\t");
        }
        System.out.println();
    }
}

class MarvellousX extends ArrayX
{
    public MarvellousX(int iSize)
    {
        super(iSize);
    }

    void Reverse()
    {
        int iStart = 0;
        int iEnd = Arr.length-1;
        int iTemp = 0;

        while(iStart < iEnd)
        {
            iTemp = Arr[iStart];
            Arr[iStart] = Arr[iEnd];
            Arr[iEnd] = iTemp;

            iStart++;
            iEnd--;
        }
    }
}

class Program218
{
    public static void main(String args[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the size of array : ");
        int iLength = sobj.nextInt();

        MarvellousX obj = new MarvellousX(iLength);

        obj.Accept();
        obj.Display();

        obj.Reverse();
        System.out.println("Array after reverse operation : ");
        obj.Display();
    }
}