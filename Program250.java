import java.util.*;

/*
    input : 4529

    9   2   5   4
    9   2   5   4
    9   2   5   4
    9   2   5   4

*/

class Pattern
{
    public void Display(int iValue)
    {
        int iCnt = 0;
        int iTemp1 = iValue;
        int iTemp2 = iValue;
        while(iTemp1 != 0)
        {
            while(iTemp2 != 0)
            {
                System.out.print((iTemp2 % 10)+"\t");
                iTemp2 = iTemp2 / 10;
            }
            iTemp2 = iValue;

            System.out.println();
            iTemp1 = iTemp1 / 10;
        }
    }
}

class Program250
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