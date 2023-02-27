
import java.util.*;

class Numbers
{
    public void CommonFactorsDisplay(int iNo1,int iNo2)
    {   
        int iCnt = 0;
        int iTemp = 0;
        if(iNo1>iNo2)
        {
            iTemp = iNo2;
        }
        else
        {
            iTemp = iNo1;
        }
        for(iCnt = 1;iCnt <= iTemp/2;iCnt++)
        {
            if((iNo1 % iCnt == 0) && (iNo2 % iCnt == 0))
            {
                System.out.println("common Factor is : "+iCnt);
            }
        }
    }
}

class Program206
{
    public static void main(String arg[])
    {
        int iNo1 = 0;
        int iNo2 = 0;
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter first number : ");
        iNo1 = sobj.nextInt();

        System.out.println("Enter second number : ");
        iNo2 = sobj.nextInt();

        Numbers nobj = new Numbers();
        nobj.CommonFactorsDisplay(iNo1,iNo2);
    }   
}