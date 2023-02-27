#include<iostream>
using namespace std;

class Arithmatic
{
    public:                     // Access specifier
        int iValue1,iValue2;    // Characteristics

        Arithmatic()            // Default constructor
        {
            iValue1 = 0;
            iValue2 = 0;
        }

        Arithmatic(int a,int b) // Parameterised constructor
        {
            iValue1 = a;
            iValue2 = b;
        }
        int Addition()          // Behaviour
        {
            int iAdd = 0;
            iAdd = iValue1 + iValue2;
            return iAdd;
        }
};

int main()
{
    int iRet = 0;

    Arithmatic obj1;
    Arithmatic obj2(10,11);
    Arithmatic obj3(20,21);

    iRet = obj1.Addition();
    cout<<"Addition is : "<<iRet<<"\n";

    iRet = obj2.Addition();
    cout<<"Addition is : "<<iRet<<"\n";

    iRet = obj3.Addition();
    cout<<"Addition is : "<<iRet<<"\n";

    return 0;
}