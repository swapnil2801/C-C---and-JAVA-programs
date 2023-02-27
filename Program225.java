import java.util.*;

class MarvellousX
{
    public int SmallCount(String s)
    {
        int iCount = 0;
        for(int i = 0;i < s.length();i++)
        {
            if((s.charAt(i) >= 'a') && (s.charAt(i) <= 'z'))
            {
                iCount++;
            }
        }
        return iCount;
    }
}

class Program225
{
    public static void main(String args[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Please enter your full name : ");
        String str = sobj.nextLine();

        MarvellousX mobj = new MarvellousX();

        int iRet = mobj.SmallCount(str);
        System.out.println("Number of small case characters in given string are : "+iRet);
    }
}