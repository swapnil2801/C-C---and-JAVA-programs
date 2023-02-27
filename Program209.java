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
    private int Power(int iNo)
    {
        int iDigit = 0;
        int iPower = 0;
        int n = DigitCount(iNo);
        while(iNo != 0)
        {
            iDigit = iNo % 10;
            iPower += Math.pow(iDigit,n);
            iNo = iNo/10;
        }
        return iPower;
    }
    public boolean CheckArmstrong(int iNo)
    {
        int iPow = Power(iNo);
        if(iPow == iNo)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}

class Program209
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