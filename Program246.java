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
        for(int i = 0;i < s.length();i++)
        {
            for(int j = 0;j < s.length();j++)
            {
                System.out.print(s.charAt(j)+"\t");
                iCnt++;
            }
            System.out.println();            
        }
    }
}

class Program246
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