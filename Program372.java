import java.io.*;
import java.util.*;
import java.nio.charset.StandardCharsets;


class Program372
{
    public static void main(String a[])
    {
        Scanner sobj = new Scanner(System.in);
        System.out.println("------Marvellous Packer Unpacker CUI panel-----------");

        try
        {
            System.out.println("Enter folder name which contains the file that you want to pack: ");
            String FolderName = sobj.nextLine();
            File fobj = new File(FolderName);

            System.out.println("Enter the name of packed file that you want to create: ");
            System.out.println("Note : Packed file gets automatically created in current directory.");
            String packFile = sobj.nextLine();
            File fpackobj = new File(packFile);
            fpackobj.createNewFile();

            FileOutputStream fout = new FileOutputStream(fpackobj);

            if(fobj.exists())
            {
                File allfiles[] = fobj.listFiles();

                System.out.println("Number of files are : "+allfiles.length);
                int Counter = 0;
                String name;
                for(int i = 0;i < allfiles.length;i++)
                {
                    name = allfiles[i].getName();

                    
                    if(name.endsWith(".txt"))
                    {
                        name = name+" "+(allfiles[i].length());
                        for(int j = name.length(); j < 100;j++)
                        {
                            name = name + " ";
                        }
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
                        Counter++;
                    }
                }

                System.out.println("-------------Summary-----------------");
                System.out.println("Number of files scanned : "+allfiles.length);
                System.out.println("Number of files packed succesfully : "+Counter);
                System.out.println("Thanks for using application.");
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