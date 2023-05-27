#include<iostream>

using namespace std;


class Array
{
    public:

        int iSize;
        int *Arr;

        Array(int iNo)
        {
            cout<<"Inside Constructor ..\n\n";
            iSize = iNo;
            Arr = new int [iSize];
        }

        ~Array()
        {
            cout<<"Inside Destructor ..\n\n";
            delete []Arr;
        }

        void Accept()
        {
            cout<<"Inside Accept Method..\n\n";
            cout<<"Enter Elements : \n\n";

            int iCnt = 0;
            for (iCnt = 0; iCnt < iSize ; iCnt++)
            {
                cin >> Arr[iCnt];
            }
        }
        void Display()
        {
            cout<<"Inside Display Method..\n\n";
            cout<<" Elements of Array are  : \n\n";

            int iCnt = 0;
            for (iCnt = 0; iCnt < iSize ; iCnt++)
            {
                cout <<Arr[iCnt]<<"\n";
            }
            cout<<"\n";
        }

        int Summation()
        {
            cout<<"Inside Summation Method..\n\n";
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
    cout<<"Inside Main..\n\n";
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