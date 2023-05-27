#include<iostream>

using namespace std;


class Array
{
    public:

        int iSize;
        int *Arr;

        Array(int iNo)
        {
            iSize = iNo;
            Arr = new int [iSize];
        }

        ~Array()
        {
            delete []Arr;
        }

        void Accept()
        {
            cout<<"Enter Elements : \n";

            int iCnt = 0;
            for (iCnt = 0; iCnt < iSize ; iCnt++)
            {
                cin >> Arr[iCnt];
            }
        }
        void Display()
        {
            cout<<" Elements of Array are  : \n";

            int iCnt = 0;
            for (iCnt = 0; iCnt < iSize ; iCnt++)
            {
                cout <<Arr[iCnt]<<"\n";
            }
        }

        int Summation()
        {
            int iSum = 0;
            int iCnt = 0;

            for(iCnt = 0; iCnt < iSize ; iCnt++)
            {
                iSum = iSum + Arr[iCnt];
            }
            return iSum;
        }
};

int main()
{
    int iValue = 0;
    int iRet = 0;

    cout<<"Enter the Size of Array : \n";
    cin >>iValue;

    Array aobj (iValue);

    aobj.Accept();
    aobj.Display();
    iRet = aobj.Summation();

    cout<<"Summation of Array Elements are : "<<iRet<<"\n";

    return 0;
}