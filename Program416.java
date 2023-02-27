import java.util.*;

class Program416
{
    public static void main(String art[])
    {
        Scanner sobj = new Scanner(System.in);
        
        System.out.println("Enter the string : ");
        String str = sobj.nextLine();

        // char Arr[] = str.toCharArray();

        // System.out.println(str.length());
        // System.out.println(Arr.length);

        // // System.out.println(Arr);
        // // System.out.println(str);
        int Count = 0;
        // for(int i = 0;i < Arr.length;i++)
        // {
        //     if(Arr[i] >= 'a' && Arr[i] <= 'z')
        //     {
        //         Count++;
        //     }
        // }

        for(int i = 0;i < str.length();i++)
        {
            if(str.charAt(i) >= 'a' && str.charAt(i) <= 'z')
            {
                Count++;
            }
        }

        System.out.println("Small character are : "+Count);
    }
}