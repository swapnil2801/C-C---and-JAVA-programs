#include <iostream>
using namespace std;

class ArrayX
{
    public:
        int iSize;
        int *Arr;

        ArrayX(int A)
        {
            cout<<"Allocating the memory for resourses..."<<"\n";
            iSize = A;
            Arr = new int[iSize];
        }

        ~ArrayX()
        {
            cout<<"Deallocating the memory of resources.."<<"\n";
            delete []Arr;
        }
        void Accept()
        {
            cout<<"Enter the elements of array : "<<"\n";
            int iCnt = 0;
            for(iCnt = 0;iCnt < iSize;iCnt++)
            {
                cin>>Arr[iCnt];
            }
        }

        void Display()
        {
            cout<<"Elements of array are : "<<"\n";
            int iCnt = 0;
            for(iCnt = 0;iCnt < iSize;iCnt++)
            {
                cout<<Arr[iCnt]<<"\t";
            }
            cout<<"\n";
        }

        int Minimum()
        {
            int iMin = Arr[0];
            int iCnt = 0;
            for(iCnt = 0;iCnt < iSize;iCnt++)
            {
                if(iMin > Arr[iCnt])
                {
                    iMin = Arr[iCnt];
                }
            }
            return iMin;
        }

};

int main()
{   
    int iLength = 0;
    int iRet = 0;
    cout<<"Enter the size of array : "<<"\n";
    cin>>iLength;

    ArrayX *obj= new ArrayX(iLength);   // Dynamic memory allocation

    obj->Accept();
    obj->Display();
    iRet = obj->Minimum();

    cout<<"The minimum number from array is : "<<iRet<<"\n";

    delete obj;
    return 0;

}