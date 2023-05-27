#include<iostream>

using namespace std;

class Digit
{
    public:
        int iNo;

    Digit( int X)
    {
        iNo = X;
    }

    int SumDigit()
    {
        int iSum = 0;
        int iDigit = 0;
        int iTemp = iNo;

        while (iTemp != 0)
        {
            iDigit = iTemp % 10;
            iSum = iDigit + iSum;
            iTemp = iTemp /10;
        }
        return iSum;
    }
};

int main()
{
    int iValue = 0;

    cout<<"Enter Number : \n";
    cin>>iValue;

    Digit dobj (iValue);
    iRet = dobj.SumDigit();
    cout<<"Summ Of Digit is : "<<iRet<<"\n"

    iRet = dobj.SumDigit();
    cout<<"Summ Of Digit is : "<<iRet<<"\n"

    return 0;
}