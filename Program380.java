import java.io.*;
import java.util.*;
import java.nio.charset.StandardCharsets;


class Program380
{
    public static void main(String a[])
    {
        Scanner sobj = new Scanner(System.in);
        
        System.out.println("Enter the string : ");

        String str = sobj.nextLine();

        System.out.println("Enter the word that you want to search : ");
        String Word = sobj.nextLine();

        String Arr[] = str.split(" ");

        int iFreq = 0;

        System.out.println("Number of words are : "+Arr.length);
        for(int i = 0;i < Arr.length;i++)
        {
            if(Arr[i].equals(Word))
            {
                iFreq++;
            }
        }
        System.out.println("The frequency of Demo word is : "+iFreq);
    } //end of main
}   // end of class