import java.util.*;

class Arithematic
{
    public int iValue1;        // Characteristics
    public int iValue2;        // Characteristics

    public Arithematic(int a,int b)
    {
        iValue1 = a;
        iValue2 = b;
    }
    public int Addition()
    {
        int iSum = 0;
        iSum = iValue1 + iValue2;
        return iSum;
    }
}

class Program202
{
    public static void main(String args[])
    {
        Scanner sobj = new Scanner(System.in);

        int iNo1 = 0,iNo2 = 0,iAns = 0;

        System.out.println("Enter first number : ");
        iNo1 = sobj.nextInt();

        System.out.println("Enter Second number : ");
        iNo2 = sobj.nextInt();

        Arithematic aobj = new Arithematic(iNo1,iNo2);
        iAns = aobj.Addition();

        System.out.println("Addition of "+iNo1+" and "+iNo2+" is : "+iAns);
    }
}