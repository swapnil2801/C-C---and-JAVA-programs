import java.util.*;

class MarvellousX
{
    public int CapCount(String s)
    {
        int iCount = 0;
        for(int i = 0;i < s.length();i++)
        {
            if((s.charAt(i) >= 'A') && (s.charAt(i) <= 'Z'))
            {
                iCount++;
            }
        }
        return iCount;
    }
}

class Program226
{
    public static void main(String args[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Please enter your full name : ");
        String str = sobj.nextLine();

        MarvellousX mobj = new MarvellousX();

        int iRet = mobj.CapCount(str);
        System.out.println("Number of Capital case characters in given string are : "+iRet);
    }
}