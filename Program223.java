import java.util.*;

class MarvellousX
{
    public void Display(String s)
    {
        for(int i = 0;i < s.length();i++)
        {
            System.out.println(s.charAt(i));
        }
    }
}

class Program223
{
    public static void main(String args[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enetr string : ");
        String str = sobj.nextLine();

        MarvellousX mobj = new MarvellousX();
        obj.Display(str);

    }
}