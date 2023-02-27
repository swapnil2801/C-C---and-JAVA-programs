import java.io.*;
import java.util.*;
import java.nio.charset.StandardCharsets;


class Program379
{
    public static void main(String a[])
    {
        Scanner sobj = new Scanner(System.in);
        
        System.out.println("Enter the string : ");

        String str = sobj.nextLine();

        String Arr[] = str.split(" ");

        int iFreq = 0;

        System.out.println("Number of words are : "+Arr.length);
        for(int i = 0;i < Arr.length;i++)
        {
            if(Arr[i].equals("Demo"))
            {
                iFreq++;
            }
        }
        System.out.println("The frequency of Demo word is : "+iFreq);
    } //end of main
}   // end of class