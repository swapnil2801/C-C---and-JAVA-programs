import java.util.*;

class Program199
{
    public static void main(String args[])
    {
        Scanner sobj = new Scanner(System.in);

        int iNo1 = 0,iNo2 = 0,iAns = 0;

        System.out.println("Enter first number : ");
        iNo1 = sobj.nextInt();

        System.out.println("Enter Second number : ");
        iNo2 = sobj.nextInt();

        iAns = iNo1 + iNo2;
        System.out.println("Addition of "+iNo1+" and "+iNo2+" is : "+iAns);
    }
}