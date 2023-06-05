#include<iostream>
using namespace std;

bool CheckBit( int iNo)
{
    int iMask = 4;
    int iResult = 0;

    iResult = iNo & iMask;
    if(iResult == iMask)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int iValue = 0;
    bool bRet = false;

    cout<<"enter First Number\n";
    cin>>iValue;

    bRet = CheckBit(iValue);

    if(bRet == true)
    {
        cout<<"3rd Bit is ON"<<"\n";
    }
    else
    {
        cout<<"3rd Bit is OFF"<<"\n";
    }

    return 0;
}