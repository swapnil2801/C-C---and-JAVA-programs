import java.util.*;

class Numbers
{
    public void EvenFactorsDisplay(int iNo)
    {   
        int iCnt = 0;

        for(iCnt = 1;iCnt <= iNo/2;iCnt++)
        {
            if((iNo % iCnt == 0) && (iCnt % 2 == 0))
            {
                System.out.println("Even Factor is : "+iCnt);
            }
        }
    }
}

class Program204
{
    public static void main(String arg[])
    {
        int iNo = 0;
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number : ");
        iNo = sobj.nextInt();

        Numbers nobj = new Numbers();
        nobj.EvenFactorsDisplay(iNo);
    }   
}