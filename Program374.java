import java.io.*;
import java.util.*;
import java.nio.charset.StandardCharsets;


class Program374
{
    public static void main(String a[])
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("------Marvellous Packer Unpacker CUI panel-----------");

        try
        {
            System.out.println("Enter the name of packed file: ");
            System.out.println("Note : Packed file should be in the current directory.");
           
            String packFile = sobj.nextLine();
            File fpackobj = new File(packFile);

            FileInputStream fin = new FileInputStream(fpackobj);

            if(fpackobj.exists())
            {
                System.out.println("Packed file is there..");

                byte Header[] = new byte[100];

                fin.read(Header,0,100);

                String strHeader = new String(Header);

                System.out.println(strHeader);
            }
            else
            {
                System.out.println("There is no such folder ");
            }

        }// End of try
        catch(Exception obj)
        {
            System.out.println("Exception occured : "+obj);
        }
    } //end of main
}   // end of class