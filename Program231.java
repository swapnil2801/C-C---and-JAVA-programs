import java.util.*;

class ArrayX
{
    public void Display(char Brr[])
    {
        for(int i = 0;i < Brr.length;i++)
        {
            System.out.println(Brr[i]);
        }
    }
}

class Program231
{
    public static void main(String args[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Please enter your full name : ");
        String str = sobj.nextLine();

        char Arr[] = str.toCharArray();

        ArrayX aobj = new ArrayX();
        aobj.Display(Arr);
    }
}