import java.io.*;
import java.util.*;
import java.nio.charset.StandardCharsets;


class Program368
{
    public static void main(String a[])
    {
        Scanner sobj = new Scanner(System.in);

        try
        {
            System.out.println("Enter folder name : ");
            String FolderName = sobj.nextLine();
            File fobj = new File(FolderName);

            System.out.println("Enter the name of packed file : ");
            String packFile = sobj.nextLine();
            File fpackobj = new File(packFile);
            fpackobj.createNewFile();

            FileOutputStream fout = new FileOutputStream(fpackobj);

            if(fobj.exists())
            {
                File allfiles[] = fobj.listFiles();

                System.out.println("Number of files are : "+allfiles.length);

                for(int i = 0;i < allfiles.length;i++)
                {
                    String name = allfiles[i].getName();

                    if(name.endsWith(".txt"));
                    {
                        System.out.println("File name : "+allfiles[i].getName()+" Size : "+allfiles[i].length()+" bytes");
                        
                        FileInputStream fiobj = new FileInputStream(allfiles[i]);

                        byte Buffer[] = new byte[1024];
                        int ret = 0;
                        while((ret = fiobj.read(Buffer)) != -1)
                        {
                            fout.write(Buffer,0,ret);
                        }
                    }
                }
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