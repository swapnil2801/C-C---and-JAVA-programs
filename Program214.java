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

    public int Addition()
    {
        int iSum = 0;
        for(int iCnt = 0;iCnt < Arr.length;iCnt++)
        {
            iSum += Arr[iCnt];
        }
        return iSum;
    }
}

class Program214
{
    public static void main(String args[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the size of array : ");
        int iLength = sobj.nextInt();

        MarvellousX obj = new MarvellousX(iLength);

        obj.Accept();
        obj.Display();
        int iRet = obj.Addition();
        System.out.println("The summation of elements of array are : "+iRet);
    }
}