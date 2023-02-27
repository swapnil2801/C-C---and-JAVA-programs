#include <iostream>
using namespace std;

class DigitX
{
    public:
        int iNo;

        DigitX()
        {
            iNo = 0;
        }

        DigitX(int A)
        {
            iNo = A;
        }

        int SumEvenDigit()
        {
            int iDigit = 0;
            int iSum = 0;
            int iTemp = iNo;
            while(iTemp != 0)
            {
                iDigit = iTemp % 10;
                if(iDigit % 2 == 0)
                {
                    iSum = iSum + iDigit;
                }
                iTemp = iTemp/10;
            }
            return iSum;
        }

};

int main()
{
    int iValue = 0;
    int iRet  = 0;

    cout<<"Enter any number : "<<"\n";
    cin>>iValue;

    DigitX obj(iValue);

    iRet = obj.SumEvenDigit();
    cout<<"The summation of even digits is : "<<iRet<<"\n";

    cout<<obj.iNo<<"\n";
    
    return 0;
}