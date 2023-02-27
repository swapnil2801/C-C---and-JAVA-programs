import ArrayXX.*;
import java.util.*;

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

class Program215
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