import java.util.*;
import java.io.File;
class Program358
{
    public static void main(String argv[]) throws Exception
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter the name file :");

        String File_Name = sobj.nextLine();

        File fobj = new File(File_Name);

        if(fobj.exists()) 
        {
            System.out.println("File size is :"+fobj.length());
        }       
        else 
        {
            System.out.println("There is no such file");
        }

    }
}