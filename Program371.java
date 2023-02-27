import java.io.*;
import java.util.*;
import java.nio.charset.StandardCharsets;


class Program371
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

                String name;
                for(int i = 0;i < allfiles.length;i++)
                {
                    name = allfiles[i].getName();

                    
                    if(name.endsWith(".txt"));
                    {
                        name = name+" "+(allfiles[i].length());
                        for(int j = name.length(); j < 100;j++)
                        {
                            name = name + " ";
                        }
                        System.out.println("Header : "+name+" with length : "+name.length());
                        System.out.println("File name : "+allfiles[i].getName()+" Size : "+allfiles[i].length()+" bytes");
                        
                        byte HeaderByte[] = name.getBytes();  //String to byte array conversion

                        fout.write(HeaderByte,0,HeaderByte.length); // write header in packed file

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