import java.util.*;

class Program229
{
    public static void main(String args[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Please enter your full name : ");
        String str = sobj.nextLine();

        char Arr[] = str.toCharArray();

        System.out.println("After string to array : ");
        System.out.println(Arr);
    }
}