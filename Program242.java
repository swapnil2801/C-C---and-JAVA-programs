import java.util.*;

/*
    Row = 4
    col = 4

    1   2   3   4
    5   6   7   8
    9   1   2   3
    4   5   6   7
*/

class Pattern
{
    public void Display(int iRow,int iCol)
    {
        int iCnt = 1;
        for(int i = 0;i < iRow;i++)
        {
            for(int j = 0;j < iCol;j++)
            {
                if(iCnt == 10)
                {
                    iCnt = 1;
                }
                System.out.print(iCnt+"\t");
                iCnt++;
            }
            System.out.println();            
        }
    }
}

class Program242
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