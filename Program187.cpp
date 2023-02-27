
// Input    789567  597768
// Output:  Numbers are anagram

#include<iostream>
using namespace std;

class Anagram
{
    public:
        int iNo1;
        int iNo2;

        Anagram(int A,int B)
        {
            iNo1 = A;
            iNo2 = B;
        }

        bool CheckAnagram()
        {
            int Frequency[10] = {0};        // All value are initialised with zero {0}
            bool Flag = true;
            int iDigit = 0;

            while(iNo1 != 0)
            {
                iDigit = iNo1 % 10;
                Frequency[iDigit]++;;
                iNo1 = iNo1 / 10;
            }
            while(iNo2 != 0)
            {
                iDigit = iNo2 % 10;
                Frequency[iDigit]--;
                iNo2 = iNo2 / 10;
            }
            
            for (int iCnt = 0;iCnt < 10;iCnt++)
            {
                if(Frequency[iCnt] != 0)
                {
                    Flag = false;
                    break;
                }
            }
            return Flag;
        }
};

int main()
{
    int iValue1 = 0,iValue2 = 0;
    bool bRet = false;

    cout<<"Enter the first number : "<<"\n";
    cin>>iValue1;

    cout<<"Enter the second number :"<<"\n";
    cin>>iValue2;

    Anagram *aobj = new Anagram(iValue1,iValue2);

    bRet = aobj->CheckAnagram();
    if(bRet == true)
    {
        cout<<"Numbers are anagram."<<"\n";
    }
    else
    {
        cout<<"Numbers are not anagram."<<"\n";
    }

    delete aobj;

    return 0;
}