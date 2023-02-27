import java.util.*;
import java.io.*;
import java.nio.charset.StandardCharsets;

class Program360
{
    public static void main(String argv[]) throws Exception
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("Enter the name file :");

        String File_Name = sobj.nextLine();

        File fobj = new File(File_Name);

        String str;

        if(fobj.exists()) 
        {
            FileInputStream fiobj = new FileInputStream(fobj);

            byte Buffer[] = new byte[100];
            int ret = 0;

            while((ret = fiobj.read(Buffer)) != -1)
            {
                str = new String(Buffer,StandardCharsets.UTF_8);
                System.out.println(str);
            }
        }       
        else 
        {
            System.out.println("There is no such file");
        }

    }
}