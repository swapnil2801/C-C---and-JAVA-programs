import java.util.*;

class MarvellousX
{
    public int DigitCount(String s)
    {
        int iCount = 0;
        for(int i = 0;i < s.length();i++)
        {
            if((s.charAt(i) >= '0') && (s.charAt(i) <= '9'))
            {
                iCount++;
            }
        }
        return iCount;
    }
}

class Program227
{
    public static void main(String args[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Please enter your full name : ");
        String str = sobj.nextLine();

        MarvellousX mobj = new MarvellousX();

        int iRet = mobj.DigitCount(str);
        System.out.println("Number of digits in given string are : "+iRet);
    }
}