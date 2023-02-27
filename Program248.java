import java.util.*;

/*
    input : 4529

    9   2   5   4
*/

class Pattern
{
    public void Display(int iValue)
    {
        int iCnt = 0;
        int iDigit = 0;
        while(iValue != 0)
        {
            iDigit = iValue % 10;
            System.out.print(iDigit+"\t");
            iValue = iValue / 10;
        }
        System.out.println();
    }
}

class Program248
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the number : ");
        int iNo = sobj.nextInt();
        Pattern pobj = new Pattern();

        pobj.Display(iNo);
    }
}