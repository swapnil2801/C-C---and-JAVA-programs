import java.util.*;

class Program230
{
    public static void main(String args[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Please enter your full name : ");
        String str = sobj.nextLine();

        char Arr[] = str.toCharArray();

        for(int i = 0;i < Arr.length;i++)
        {
            System.out.println(Arr[i]);
        }
    }
}