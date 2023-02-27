import java.util.*;

/*
    *   *   *   *
    *   *   *   *
    *   *   *   *
    *   *   *   *
*/

class Pattern
{
    public void Display(int iRow,int iCol)
    {
        for(int i = 0;i < iRow;i++)
        {
            for(int j = 0;j < iCol;j++)
            {
                System.out.print("*\t");
            }
            System.out.println();            
        }
    }
}

class Program241
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the number of rows : ");
        int iNo1 = sobj.nextInt();

        System.out.println("Enter the number of columns : ");
        int iNo2 = sobj.nextInt();

        Pattern pobj = new Pattern();

        pobj.Display(iNo1,iNo2);
    }
}