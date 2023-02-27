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

        void Function()
        {
           
        }

};

int main()
{
    int iNo = 0;
    int iRet = 0;

    cout<<"Enter number : \n";
    cin>>iNo;

    Numbers obj(iNo);

    obj.Function();

    return 0;
}