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
            while(iNo != 0)
            {
                iDigit = iNo % 10;
                if(iDigit % 2 == 0)
                {
                    iSum = iSum + iDigit;
                }
                iNo = iNo/10;
            }
            return iSum;
        }
// when we perform direct operation on number then the changes of that number are applied directly the value of
// number may changes and we can not perform next operation on that number.
// -> to avoid that problem we take 1 temp variable and initialized with that number means we reserve that number 
//    now we can prform operations on that temp variable.
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