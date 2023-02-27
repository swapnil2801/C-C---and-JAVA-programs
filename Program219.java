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

    public boolean Pallindrome()
    {
        boolean flag = true;

        int iStart = 0;
        int iEnd = Arr.length-1;
        
        while(iStart < iEnd)
        {
            if(Arr[iStart] != Arr[iEnd])
            {
                flag = false;
                break;
            }
            iStart++;
            iEnd--;
        }
        return flag;
    }

    
}

class Program219
{
    public static void main(String args[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the size of array : ");
        int iLength = sobj.nextInt();

        MarvellousX obj = new MarvellousX(iLength);

        obj.Accept();
        obj.Display();

        boolean bRet = obj.Pallindrome();
        if(bRet == true)
        {
            System.out.println("The array is an pallindrome.");
        }
        else 
        {
            System.out.println("The array is not an pallindrome.");
        }

        
    }
}