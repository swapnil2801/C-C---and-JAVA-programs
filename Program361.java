import java.io.*;
import java.util.*;

class Program361
{
    public static void main(String argv[])
    {
        Scanner sobj = new Scanner(System.in);

        try
        {
            System.out.println("Enter the source file name : ");
            String Source = sobj.nextLine();

            System.out.println("Enter the destination file name : ");
            String Destination = sobj.nextLine();

            File fsourse = new File(Source);
            File fdest = new File(Destination);

            boolean bret = fsourse.exists();
            if(bret == false)
            {
                System.out.println("Source file is not existing...");
                return;
            }

            bret = fdest.createNewFile();
            if(bret == false)
            {
                System.out.println("Unable to create destination file...");
                return;
            }

            FileInputStream fiobj = new FileInputStream(fsourse);
            FileOutputStream foobj = new FileOutputStream(fdest);

            byte Buffer[] = new byte[1024];
            int ret = 0;

            while((ret = fiobj.read(Buffer)) != -1)
            {
                foobj.write(Buffer);
            }
        }// End of try
        catch(Exception obj)
        {
            System.out.println("Exception occured : "+obj);
        }
    }// end  of main

}// end of classs