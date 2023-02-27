#include<iostream>
using namespace std;

class ArrayX
{
    public:
        int iSize;
        int *Arr;

        ArrayX(int i)
        {
            iSize = i;
            Arr = new int[iSize];
        }

        ~ArrayX()
        {
            delete []Arr;
        }

        void Accept()
        {
            cout<<"Enter the elements of Array:\n";
            int iCnt = 0;
            for(iCnt = 0;iCnt < iSize;iCnt++)
            {
                cin>>Arr[iCnt];
            }
        }
        void Display()
        {
            cout<<"The elements of Array are :\n";
            int iCnt = 0;
            for(iCnt = 0;iCnt < iSize;iCnt++)
            {
                cout<<Arr[iCnt]<<"\t";
            }
            cout<<"\n";
        }
        
};

int main()
{
    int iNo = 0;
    int iRet = 0;

    cout<<"Enter Size of Array : \n";
    cin>>iNo;

    ArrayX obj(iNo);

    obj.Accept();
    obj.Display();

    return 0;
}