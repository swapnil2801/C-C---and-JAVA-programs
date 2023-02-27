import java.util.*;

class Program224
{
    public static void main(String args[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Please enter your full name : ");
        String str = sobj.nextLine();

        int iCount = 0;
        for(int i = 0;i < str.length();i++)
        {
            if(str.charAt(i) >= 'a' && str.charAt(i) <= 'z')
            {
                iCount++;
            }
        }
        System.out.println("Number of small case characters in given string are : "+iCount);
    }
}