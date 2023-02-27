import java.util.*;

/*
    input : Hello

    H   e   l   l   o
    H   e   l   l   o
    H   e   l   l   o
    H   e   l   l   o
    H   e   l   l   o
*/

class Pattern
{
    public void Display(String s)
    {
        int iCnt = 0;
        char Arr[] = s.toCharArray();
        for(int i = 0;i < Arr.length;i++)
        {
            for(int j = 0;j < Arr.length;j++)
            {
                System.out.print(Arr[j]+"\t");
                iCnt++;
            }
            System.out.println();            
        }
    }
}

class Program247
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the String : ");
        String str = sobj.nextLine();
        Pattern pobj = new Pattern();

        pobj.Display(str);
    }
}