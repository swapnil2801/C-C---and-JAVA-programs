import java.util.*;

class Program419
{
    public static void main(String art[])
    {
        Scanner sobj = new Scanner(System.in);
        
        System.out.println("Enter the string : ");
        String str = sobj.nextLine();

        char Arr[] = str.toCharArray();

        for(int i = 0;i < Arr.length;i++)
        {
            if(Arr[i] >= 'A' && Arr[i] <= 'Z')
            {
                Arr[i] = (char)(Arr[i] + 32);
            }
        }
        System.out.println(Arr);

        String output = Arr.toString();

        System.out.println(output);
    }
}