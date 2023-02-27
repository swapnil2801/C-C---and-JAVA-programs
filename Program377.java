import java.io.*;
import java.util.*;
import java.nio.charset.StandardCharsets;


class Program377
{
    public static void main(String a[])
    {
        Scanner sobj = new Scanner(System.in);
        
        System.out.println("Enter the string : ");

        String str = sobj.nextLine();

        String Arr[] = str.split(" ");

        System.out.println("Number of words are : "+Arr.length);
        for(int i = 0;i < Arr.length;i++)
        {
            System.out.println("Length of "+Arr[i]+" = "+Arr[i].length());
        }
    } //end of main
}   // end of class