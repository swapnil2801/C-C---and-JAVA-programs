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
        while(iValue != 0)
        {
            System.out.print((iValue % 10)+"\t");
            iValue = iValue / 10;
        }
        System.out.println();
    }
}

class Program249
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