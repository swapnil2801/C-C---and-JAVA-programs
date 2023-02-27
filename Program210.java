import java.util.*;
import java.math.*;

class Digits
{
    private int DigitCount(int iNo)
    {
        int iCnt = 0;
        while(iNo != 0)
        {
            iCnt++;
            iNo = iNo/10;
        }
        return iCnt;
    }
    private int Power(int Base,int index)
    {
        int iAns = 1;

        for(int iCnt = 1;iCnt <= index;iCnt++)
        {
            iAns = iAns * Base;
        }
        return iAns;
    }
    public boolean CheckArmstrong(int iNo)
    {
        int iTemp = iNo;
        int iSum = 0;
        int iDigit = 0;
        int DigitCnt = DigitCount(iNo);

        while(iNo != 0)
        {
            iDigit = iNo % 10;
            iSum += Power(iDigit,DigitCnt);
            iNo = iNo / 10;
        }
        if(iSum == iTemp)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}

class Program210
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