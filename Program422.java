import java.util.*;

class Program422
{
    public static void main(String art[])
    {
        Scanner sobj = new Scanner(System.in);
        
        System.out.println("Enter the string : ");
        String str = sobj.nextLine();

        String newstr = str.trim();     // to remove white spaces before and after the string
        String Arr[] = newstr.split(" ");

        System.out.println("Number of words are : "+Arr.length);
    }
}