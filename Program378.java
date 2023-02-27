import java.io.*;
import java.util.*;
import java.nio.charset.StandardCharsets;


class Program378
{
    public static void main(String a[])
    {
        Scanner sobj = new Scanner(System.in);
        
        System.out.println("Enter the string : ");

        String str = sobj.nextLine();

        String Arr[] = str.split(" ");

        int iMax = 0;

        System.out.println("Number of words are : "+Arr.length);
        for(int i = 0;i < Arr.length;i++)
        {
            if(iMax < Arr[i].length())
            {
                iMax = i;
            }
        }
        System.out.println("The largest word is "+Arr[iMax]+" with length : "+Arr[iMax].length());
    } //end of main
}   // end of class