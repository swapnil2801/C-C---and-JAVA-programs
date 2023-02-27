import java.util.*;
import java.math.*;

class Digits
{
    public boolean CheckArmstrong(int iNo)
    {
        int iTemp = iNo;
        int iSum = 0;
        int iDigit = 0;
        int iCnt = 0;
        int iPower = 1;
        while(iTemp != 0)
        {
            iCnt++;
            iTemp = iTemp/10;
        }
        iTemp = iNo;
        while(iTemp != 0)
        {
            iDigit = iTemp % 10;

            for(int i = 1;i <= iCnt;i++)
            {
                iPower = iPower * iDigit;
            }
            iSum = iSum + iPower;
            iPower = 1;

            iTemp = iTemp / 10;
        }
        if(iSum == iNo)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}

class Program212
{
    public static void main(String arg[])
    {
        int iNo = 0;
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter number : ");
        iNo = sobj.nextInt();

        Digits nobj = new Digits();
        boolean bRet = nobj.CheckArmstrong(iNo);

        if(bRet == true)
        {
            System.out.println(iNo+" is a armstrong number");
        }
        else
        {
            System.out.println(iNo+" is not a armstrong number");
        }
    }   
}