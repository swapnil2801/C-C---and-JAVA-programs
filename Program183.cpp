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
        void MaxFrequency()
        {
            int iDigit = 0;
            int iTemp = iNo;
            int Frequency[10] = {0};

            while(iTemp != 0)
            {
                iDigit = iTemp % 10;
                Frequency[iDigit]++;
                iTemp = iTemp / 10;
            }
            int iMaxFreauency = 0;
            int iMaxDigit = 0;
            for(int iCnt = 0;iCnt < 10;iCnt++)
            {
                
                if(Frequency[iCnt] > iMaxFreauency)
                {
                    iMaxFreauency = Frequency[iCnt];
                    iMaxDigit = iCnt;
                }
            }
            cout<<"Maximum times occured digit is "<<iMaxDigit<<" and its frequency is "<<iMaxFreauency<<"\n";
        }
        

};

int main()
{
    int iValue = 0;
    int iRet  = 0;

    cout<<"Enter any number : "<<"\n";
    cin>>iValue;

    DigitX obj(iValue);

    obj.MaxFrequency();
    
    return 0;
}