import java.util.*;

class Program418
{
    public static void main(String art[])
    {
        Scanner sobj = new Scanner(System.in);
        
        System.out.println("Enter the string : ");
        String str = sobj.nextLine();

        char Arr[] = str.toCharArray();

        int Count = 0;

        int  i = 0;
        while(i < Arr.length)
        {
            if(Arr[i] >= 'a' && Arr[i] <= 'z')
            {
                Count++;
            }
            i++;
        }

        System.out.println("Small character are : "+Count);
    }
}