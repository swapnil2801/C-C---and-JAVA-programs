import java.util.*;
import java.io.File;
class Program357
{
    public static void main(String argv[]) throws Exception
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter the name file :");

        String File_Name = sobj.nextLine();

        File fobj = new File(File_Name);

        boolean bret = fobj.createNewFile();

        if(bret == true)
        {
            System.out.println("File created succesfully");
        }
        else 
        {
            System.out.println("Unable to create file.");
        }
    }
}