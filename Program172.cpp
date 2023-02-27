#include<iostream>
using namespace std;

class Numbers
{
    public:
        int iValue;

        Numbers(int A)
        {
            iValue = A;
        }

        int Factorial()
        {
            int i = 0;
            int iMult = 1;

            for(i = iValue;i > 0;i--)
            {
                iMult = iMult * i;
            }
            return iMult;
        }
};

int main()
{
    int iNo = 0;
    int iRet = 0;

    cout<<"Enter number : \n";
    cin>>iNo;

    Numbers obj(iNo);

    iRet = obj.Factorial();

    cout<<"Factorial of "<<iNo<<" is "<<iRet<<"\n";

    return 0;
}