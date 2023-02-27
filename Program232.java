import java.util.*;

class MarvellousX
{
    public int CapCount(String s)
    {
        int iCount = 0;

        char Arr[] = s.toCharArray();
        for(int i = 0;i < Arr.length;i++)
        {
            if((Arr[i] >= 'A') && (Arr[i] <= 'Z'))
            {
                iCount++;
            }
        }
        return iCount;
    }
}

class Program232
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