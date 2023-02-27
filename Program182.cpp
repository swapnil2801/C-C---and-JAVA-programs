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
        void DisplayFrequency()
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

            for(int iCnt = 0;iCnt < 10;iCnt++)
            {
                if(Frequency[iCnt] > 0)
                {
                    cout<<iCnt<<" occures at "<<Frequency[iCnt]<<" times"<<"\n";
                }
            }
            
            
        }
        

};

int main()
{
    int iValue = 0;
    int iRet  = 0;

    cout<<"Enter any number : "<<"\n";
    cin>>iValue;

    DigitX obj(iValue);

    obj.DisplayFrequency();
    
    return 0;
}