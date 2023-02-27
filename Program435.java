import java.util.*;

class Program435
{
    public static void main(String argv[])
    {
        Scanner sobj = new Scanner(System.in);
        
        System.out.println("Enter String : ");
        String str = sobj .nextLine();

        String Tokens[] = str.split(" ");

        HashMap <String,Integer> hobj = new HashMap();
        int Frequency = 0;

        for(String ch : Tokens)
        {
            if(hobj.containsKey(ch))
            {
                Frequency = hobj.get(ch);
                hobj.put(ch,Frequency+1);
            }
            else
            {
                hobj.put(ch,1);
            }
        }
        Set <String> setobj = hobj.keySet();

        for(String value : setobj)
        {
            System.out.println(value+" occurs "+hobj.get(value)+" times");
        }
    }
}