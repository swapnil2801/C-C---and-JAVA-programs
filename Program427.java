import java.util.*;

class Program427
{
    public static void main(String argv[])
    {
        LinkedList <Integer> obj = new LinkedList();

        obj.add(11);
        obj.add(21);
        obj.add(51);
        obj.addLast(897);
        obj.remove(0);


        System.out.println("Data is : "+obj);

        for(int no : obj)
        {
            System.out.println(no);
        }
    }
}