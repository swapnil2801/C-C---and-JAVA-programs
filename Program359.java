import java.util.*;
import java.io.*;
class Program359
{
    public static void main(String argv[]) throws Exception
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter the name file :");

        String File_Name = sobj.nextLine();

        File fobj = new File(File_Name);

        if(fobj.exists()) 
        {
            BufferedReader bobj = new BufferedReader(new FileReader(fobj));

            String Data;

            while((Data = bobj.readLine()) != null)
            {
                System.out.println(Data);
            }

        }       
        else 
        {
            System.out.println("There is no such file");
        }

    }
}