import java.util.*;

class MarvellousX
{
    public int SpecialCharCount(String s)
    {
        int iCount = 0;
        for(int i = 0;i < s.length();i++)
        {
            if((s.charAt(i) == '!') || (s.charAt(i) == '@') || (s.charAt(i) == '#') || (s.charAt(i) == '$') || (s.charAt(i) == '%') || (s.charAt(i) == '&') || (s.charAt(i) == '*') || (s.charAt(i) == '^'))
            {
                iCount++;
            }
        }
        return iCount;
    }
}

class Program228
{
    public static void main(String args[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Please enter your full name : ");
        String str = sobj.nextLine();

        MarvellousX mobj = new MarvellousX();

        int iRet = mobj.SpecialCharCount(str);
        System.out.println("Number of Special Character in given string are : "+iRet);
    }
}