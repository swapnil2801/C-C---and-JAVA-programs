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

        void RevDisplay()
        {
            int iDigit = 0;
            while(iNo != 0)
            {
                iDigit = iNo % 10;
                cout<<iDigit;
                iNo = iNo/10;
            }
            cout<<"\n";
        }

};

int main()
{
    int iValue = 0;

    cout<<"Enter any number : "<<"\n";
    cin>>iValue;

    DigitX obj(iValue);

    obj.RevDisplay();

    return 0;
}